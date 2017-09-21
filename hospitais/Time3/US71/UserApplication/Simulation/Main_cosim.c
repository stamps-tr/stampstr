
/* Code generated for Graphical Panels Co-simulation */

#include "Main_UA_1.h"
#include "comando_controle_interface.h"
#include "A661Cosim.h"



void AfterSimInit(void){
	const char *pszBinListFiles[2];
	A661SetServerPath("C:/Program Files/ANSYS Inc/v180/SCADE/SCADE/bin/../../SCADE A661/bin/A661Server.exe");
	#ifdef A661_LOGFILE
	A661SetLogFile(A661_LOGFILE);
	#endif
	pszBinListFiles[0] = "C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US71/UserApplication/Simulation/Main_UA_1_binaries.txt";
	pszBinListFiles[1] = 0;
	if (0/*OK*/ != A661ConnectServer("127.0.0.1", 1231, pszBinListFiles, "C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US71/UserApplication/Simulation/Main_UA_1_conf.xml" )) {
		const char *pszError;
		A661GetLastError(&pszError);
		SsmOutputMessage(SIM_WARNING, pszError);
	}
}


void BeforeSimStep(void){
	buffer_el msg[Main_UA_1_MAX_SIZE_INPUT_BUFFER];
	/* reveive from server */
	Main_UA_1_receive_clear(NULL, NULL);
	if (A661Receive(msg, sizeof msg) == 0)
		Main_UA_1_receive(msg, sizeof msg, NULL, NULL);
}


void AfterSimStep(void){
	static buffer_el msg[Main_UA_1_MAX_SIZE_OUTPUT_BUFFER];
	int len;
	len = Main_UA_1_send(msg, &outputs_ctx, NULL);
	/* Send to server */
	A661Send(msg, len);
}


void RefreshSimValues(void){
	 if (GraphicalInputsConnected) {
		BeforeSimStep();
		UpdateSimulatorValues();
	}
}


void BeforeSimInit(void){
}


void ExtendedSimStop(void){
	A661KillServer();
}


int ExtendedGetDumpSize(){
	return 0;
}


void ExtendedGatherDumpData(char * pData){
}


void ExtendedRestoreDumpData(const char * pData){
	AfterSimStep();
}


void UpdateValues(void){
}

