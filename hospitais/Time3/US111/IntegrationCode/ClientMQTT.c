#include <stdlib.h>
#include <Windows.h>
#include <stdio.h>
#include <wchar.h>
#include <string.h>
#include <time.h>
#include "MQTTClient.h"

#define ADDRESS     "stampsnet.hashtagsource.com:1883"
#define CLIENTID    "ExampleClientPub"
#define TOPIC       "US112"
#define PAYLOAD     ""
#define QOS         1
#define TIMEOUT     10000L
#define DESCRIPTION ""

//Instancia handles da biblioteca Paho
MQTTClient client;
MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;
MQTTClient_deliveryToken token;
MQTTClient_message pubmsg = MQTTClient_message_initializer;

int	grade = 0;
char    strJson[300];

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

//void buildJson() {
//    char *p = &strJson[0];
//
//    p += sprintf(p, "{\"version\":\"1.1\"");
//    p += sprintf(p, ",\"host\":\"DisplayUS112\"");
//    p += sprintf(p, ",\"short_message\":\"Display SCADE US112\"");
//    p += sprintf(p, ",\"_grade\":\"%d\"", grade);
//    p += sprintf(p, "}");
//}

void buildJson() {
  char *p = &strJson[0];

  p += sprintf(p, "{\"version\":\"1.1\"");
  p += sprintf(p, ",\"host\":\"DisplayUS112\"");
  p += sprintf(p, ",\"short_message\":\"Display SCADE US112\"");
  p += sprintf(p, ",\"_grade\":%d", grade);
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
void PublishMQTT(char Send, int Grade)
{
  if(Grade > 0)	//S� envia quando receber 1 da aplica��o SCADE
  {
    
    grade = Grade;
    
    buildJson();
    openClientMQTT();
    publishMQTT(TOPIC, strJson);
    closeClientMQTT();	
  }
}
#endif /* PublishMQTT */

