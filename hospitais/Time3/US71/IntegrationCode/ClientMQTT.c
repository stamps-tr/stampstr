/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe 
** Generation date: 2016-10-26T17:04:48
*************************************************************$ */
#ifndef _KCG_IMPORTED_FUNCTIONS_H_
#define _KCG_IMPORTED_FUNCTIONS_H_

#include "kcg_types.h"

//Cliente MQTT utilizando biblioteca Paho

#include <Windows.h>
#include <stdio.h>
#include <wchar.h>
#include <string.h>
#include <time.h>
//#include "MQTTClient.h"

#ifndef ClientMQTT

 kcg_int ClientMQTT(kcg_bool Send, kcg_char Titulo[50], kcg_char Segmento,
                     kcg_char Descricao[150], kcg_real Latitude, kcg_real Longitude, kcg_char Status[16])
 {
	int Mqttstatus = 1;

 	if(Send == 1)	//Só envia quando receber 1 da aplicação SCADE
	{
		/*memset(strJson, 0, strlen(strJson));
		sprintf(titulo,"%s",Titulo);
		segmento = (char)Segmento;
		sprintf(descricao,"%s",Descricao);
		latitude = (long)Latitude;
		longitude = (long)Longitude;
		sprintf(status,"%s",Status);
		buildJson();
		openClientMQTT();
		Mqttstatus = publishMQTT(TOPIC, strJson);	//Publica string em MQTT no tópico desejado
		closeClientMQTT();*/
	}

    return Mqttstatus;	
 }
#endif


#endif /* _KCG_IMPORTED_FUNCTIONS_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** kcg_imported_functions.h
** Generation date: 2016-10-26T17:04:48
*************************************************************$ */

