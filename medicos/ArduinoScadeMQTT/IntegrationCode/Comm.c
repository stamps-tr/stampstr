/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/SCADE_18/Desktop/SCADExArduino/UserApplication/S2A/KCG/config.txt
** Generation date: 2017-09-19T02:28:12
*************************************************************$ */
#ifndef _KCG_IMPORTED_FUNCTIONS_H_
#define _KCG_IMPORTED_FUNCTIONS_H_

#include "kcg_types.h"

#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <stdlib.h>
#include <string.h>

#include "MQTTClient.h"

#define ADDRESS     "iot.eclipse.org:1883"
#define CLIENTID    "ExampleClientPub123"
#define TOPIC       "STAMPS-RT-TS02"
#define PAYLOAD     "Testinnng!"
#define QOS         1
#define TIMEOUT     10000L

typedef int bool;
#define true  1
#define false 0

bool commStarted = false;
HANDLE hComm;
MQTTClient client;

void startComm(){
		                          // Handle to the Serial port
	LPCSTR  ComPortName = "COM3";  // Alterar de acordo com a Porta do Arduino, verificada no IDE
	BOOL  Status;                          // Status of the various operations

	                  // Bytes read by ReadFile()
	int i = 0;

	printf("\n\n +==========================================+");
	printf("\n |    Serial Port  Reception (Win32 API)    |");
	printf("\n +==========================================+\n");
	//---------------------------------- Opening the Serial Port -------------------------------------------

	hComm = CreateFile( ComPortName,                  // Name of the Port to be Opened
                        GENERIC_READ | GENERIC_WRITE, // Read/Write Access
						0,                            // No Sharing, ports cant be shared
						NULL,                         // No Security
					    OPEN_EXISTING,                // Open existing port only
                         FILE_ATTRIBUTE_NORMAL,                            // Non Overlapped I/O
                        NULL);                        // Null for Comm Devices

	if (hComm == INVALID_HANDLE_VALUE)
		printf("\n    Error! - Port %s can't be opened\n", ComPortName);
	else
		printf("Port opened\n");//std::wcout <<"\n    Port " << ComPortName << " Opened\n ";

	//------------------------------- Setting the Parameters for the SerialPort ------------------------------

	DCB dcbSerialParams = { 0 };                         // Initializing DCB structure
	dcbSerialParams.DCBlength = sizeof(dcbSerialParams);

	Status = GetCommState(hComm, &dcbSerialParams);      //retrieves  the current settings

	if (Status == FALSE)
		printf("\n    Error! in GetCommState()");

	dcbSerialParams.BaudRate = CBR_9600;      // Setting BaudRate = 9600
	dcbSerialParams.ByteSize = 8;             // Setting ByteSize = 8
	dcbSerialParams.StopBits = ONESTOPBIT;    // Setting StopBits = 1
	dcbSerialParams.Parity = NOPARITY;        // Setting Parity = None

	Status = SetCommState(hComm, &dcbSerialParams);  //Configuring the port according to settings in DCB

	if (Status == FALSE)
		{
			printf("\n    Error! in Setting DCB Structure");
		}
	else //If Successfull display the contents of the DCB Structure
		{
			printf("\n\n    Setting DCB Structure Successfull\n");
			printf("\n       Baudrate = %d", dcbSerialParams.BaudRate);
			printf("\n       ByteSize = %d", dcbSerialParams.ByteSize);
			printf("\n       StopBits = %d", dcbSerialParams.StopBits);
			printf("\n       Parity   = %d", dcbSerialParams.Parity);
		}

	//------------------------------------ Setting Timeouts --------------------------------------------------

	COMMTIMEOUTS timeouts = { 0 };
	timeouts.ReadIntervalTimeout         = 50;
	timeouts.ReadTotalTimeoutConstant    = 50;
	timeouts.ReadTotalTimeoutMultiplier  = 10;
	timeouts.WriteTotalTimeoutConstant   = 50;
	timeouts.WriteTotalTimeoutMultiplier = 10;

	if (SetCommTimeouts(hComm, &timeouts) == FALSE)
		printf("\n\n    Error! in Setting Time Outs");
	else
		printf("\n\n    Setting Serial Port Timeouts Successfull");

	//------------------------------------ Setting Receive Mask ----------------------------------------------

	Status = SetCommMask(hComm, EV_RXCHAR); //Configure Windows to Monitor the serial device for Character Reception

	if (Status == FALSE)
		printf("\n\n    Error! in Setting CommMask");
	else
		printf("\n\n    Setting CommMask successfull");
        
	
	//------------------------------------- MQTT Communication -------------------------------------------
	
	MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;
    	int rc;

    	MQTTClient_create(&client, ADDRESS, CLIENTID,
        	MQTTCLIENT_PERSISTENCE_NONE, NULL);
    	conn_opts.keepAliveInterval = 20;
    	conn_opts.cleansession = 1;

    	if ((rc = MQTTClient_connect(client, &conn_opts)) != MQTTCLIENT_SUCCESS)
    	{
            printf("Failed to connect, return code %d\n", rc);
    	    exit(EXIT_FAILURE);
    	}    	
}

void stopComm() {
	CloseHandle(hComm);
	MQTTClient_disconnect(client, 10000);
    	MQTTClient_destroy(&client);
}

void readSerial(char **data)
{
    DWORD dwEventMask;                     // Event mask to trigger
    printf("\n\n    Characters Received");
    char TempChar;                        // Temporary Character
    char buf[10];
    buf[0] = '\0';
    int idx;
    DWORD NoBytesRead;

    while (buf[0] == '\0') {
    	    memset(&buf[0], 0, sizeof(buf));
	    ReadFile(hComm, &buf, sizeof(buf), &NoBytesRead, NULL);
	    for (idx = 0; idx < 10; idx++) {
	        if (buf[idx] == '\r' || buf[idx] == '\n') {
	            buf[idx] = '\0';
	            break;
		}
	    }
    }

    char *read = (char *) malloc(sizeof(char) * (idx+1));
    strncpy(read, buf, idx+1);
    *data = read;
}

void sendOverMQTT(char *data) {
	MQTTClient_message pubmsg = MQTTClient_message_initializer;
	MQTTClient_deliveryToken token;
	pubmsg.payload = data;
    	pubmsg.payloadlen = strlen(data);
    	pubmsg.qos = QOS;
    	pubmsg.retained = 0;
    	MQTTClient_publishMessage(client, TOPIC, &pubmsg, &token);
    	printf("Waiting for up to %d seconds for publication of %s\n"
            "on topic %s for client with ClientID: %s\n",
            (int)(TIMEOUT/1000), data, TOPIC, CLIENTID);
    	MQTTClient_waitForCompletion(client, token, TIMEOUT);
    	printf("Message with delivery token %d delivered\n", token);
}

#ifndef Comm
/* Communication */
extern kcg_float32 Comm(/* Input1/ */ kcg_uint8 Input1)
{
    int decision = (int) Input1;
    
    if (decision == 33) {
    	if (!commStarted) {
		startComm();
		commStarted = true;
	}
	if (commStarted) {
	        char *data;
		readSerial(&data);
		float num = atof(data);
		sendOverMQTT(data);
		return num;
	}
    }
    if (decision == 44) {
    	if (commStarted) {
		stopComm();
		commStarted = false;
	}
    }
    return (kcg_float32) 0;
}
#endif /* Communication */

#endif /* _KCG_IMPORTED_FUNCTIONS_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_imported_functions.h
** Generation date: 2017-09-19T02:28:12
*************************************************************$ */