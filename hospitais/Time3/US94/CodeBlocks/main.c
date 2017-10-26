#include <stdlib.h>
#include <Windows.h>
#include <stdio.h>
#include <wchar.h>
#include <string.h>
#include <time.h>
#include "MQTTClient.h"

#define ADDRESS     "stampsnet.hashtagsource.com:1883"
#define CLIENTID    "ExampleClientPub"
#define TOPIC       "us82b"
#define PAYLOAD     ""
#define QOS         1
#define TIMEOUT     10000L
#define DESCRIPTION "Death on rail"

//Instancia handles da biblioteca Paho
MQTTClient client;
MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;
MQTTClient_deliveryToken token;
MQTTClient_message pubmsg = MQTTClient_message_initializer;

float 	latitude = -22.0, longitude = -47.0;
char	description[150]  = "Test";
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

void buildJson() {
    time_t timer;
    char timeBuffer[26];
    struct tm* tm_info;

    time(&timer);
    tm_info = localtime(&timer);    //Lê o timestamp
    strftime(timeBuffer, 26, "%Y-%m-%d %H:%M:%S", tm_info); //Formata o timestamp

    char *p = &strJson[0];

    p += sprintf(p, "{\"version\":\"1.1\"");
    p += sprintf(p, ",\"host\":\"sensorSCADE82b\"");
    p += sprintf(p, ",\"short_message\":\"%s\"", description);
    p += sprintf(p, ",\"geolocation\":\"%f,%f\"", latitude, longitude);
    //p += sprintf(p, ",\"data_hora\":\"%s\"", timeBuffer);
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
void main(char Send, char Description[150], long Latitude, long Longitude)
{
 //if(Send == 1)	//Só envia quando receber 1 da aplicação SCADE
 //{
   Description = "One man is dead and two seriously injured after car crash";
   strcpy(description, Description);
   //latitude = Latitude;
   buildJson();
   openClientMQTT();
   publishMQTT(TOPIC, strJson);
   closeClientMQTT();
 //}
}
#endif /* PublishMQTT */

