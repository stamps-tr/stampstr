#include <stdlib.h>
#include <Windows.h>
#include <stdio.h>
#include <wchar.h>
#include <string.h>
#include <time.h>
#include "MQTTClient.h"

#define ADDRESS     "stampsnet.hashtagsource.com:1883"
#define CLIENTID    "ExampleClientPub"
#define TOPIC       "us111"
#define PAYLOAD     ""
#define QOS         1
#define TIMEOUT     10000L
#define DESCRIPTION ""

//Instancia handles da biblioteca Paho
MQTTClient client;
MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;
MQTTClient_deliveryToken token;
MQTTClient_message pubmsg = MQTTClient_message_initializer;

char	buttonPoor = 1, buttonFair = 0, buttonGood = 0, buttonExcellent = 0;
char    strJson[350];

int mqtt_inicializado = 0;

int publishMQTT(char *topic, char *payload)
{
	int rc;
	pubmsg.payload = payload;
    pubmsg.payloadlen = strlen(payload);
    pubmsg.qos = QOS;
    pubmsg.retained = 0;
    MQTTClient_publishMessage(client, topic, &pubmsg, &token);
    printf("Waiting for up to %d seconds for publication of %s\n"
            "on topic %s for client with ClientID: %s\n",
            (int)(TIMEOUT/1000), PAYLOAD, topic, CLIENTID);
    rc = MQTTClient_waitForCompletion(client, token, TIMEOUT);
    printf("Message with delivery token %d delivered\n", token);
	return rc;
}

int openClientMQTT()
{
	int rc;
	MQTTClient_create(&client, ADDRESS, CLIENTID,
        MQTTCLIENT_PERSISTENCE_NONE, NULL);
	conn_opts.keepAliveInterval = 20;
	conn_opts.cleansession = 1;

	if ((rc = MQTTClient_connect(client, &conn_opts)) != MQTTCLIENT_SUCCESS)
	{
	printf("Failed to connect, return code %d\n", rc);
	exit(-1);
	}
	else printf("Conected to %s\n", ADDRESS);
	printf("\nPress button to send message");

	return rc;
}

void buildJson() {
    char *p = &strJson[0];

    p += sprintf(p, "{\"version\":\"1.1\"");
    p += sprintf(p, ",\"host\":\"DisplayUS111\"");
    p += sprintf(p, ",\"short_message\":\"Display SCADE US111\"");
    p += sprintf(p, ",\"_poor\":\"%d\"", buttonPoor);
    p += sprintf(p, ",\"_fair\":\"%d\"", buttonFair);
    p += sprintf(p, ",\"_good\":\"%d\"", buttonGood);
    p += sprintf(p, ",\"_excellent\":\"%d\"", buttonExcellent);
    p += sprintf(p, "}");
}

int closeClientMQTT()
{
	int rc;
	rc = MQTTClient_disconnect(client, 10000);
    	MQTTClient_destroy(&client);
	return rc;
}

#ifndef PublishMQTT
/* PublishMQTT/ */
int main(void)
{
   buildJson();
   openClientMQTT();
   publishMQTT(TOPIC, strJson);
   closeClientMQTT();
   return 0;
}
#endif /* PublishMQTT */
