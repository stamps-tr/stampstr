
/* Code generated for Graphical Panels Co-simulation */

#include "ErlunControl_UA_1.h"
#include "ErlunControl_interface.h"
#include "A661Cosim.h"



void AfterSimInit(void){
	const char *pszBinListFiles[2];
	A661SetServerPath("C:/Program Files/ANSYS Inc/v180/SCADE/SCADE/bin/../../SCADE A661/bin/A661Server.exe");
	#ifdef A661_LOGFILE
	A661SetLogFile(A661_LOGFILE);
	#endif
	pszBinListFiles[0] = "C:/Users/Paiva/SCADE/STAMPS-TR/ErlunControl/Simulation/ErlunControl_UA_1_binaries.txt";
	pszBinListFiles[1] = 0;
	if (0/*OK*/ != A661ConnectServer("127.0.0.1", 1231, pszBinListFiles, "C:/Users/Paiva/SCADE/STAMPS-TR/ErlunControl/Simulation/ErlunControl_UA_1_conf.xml" )) {
		const char *pszError;
		A661GetLastError(&pszError);
		SsmOutputMessage(SIM_WARNING, pszError);
	}
}


void BeforeSimStep(void){
	buffer_el msg[ErlunControl_UA_1_MAX_SIZE_INPUT_BUFFER];
	/* reveive from server */
	ErlunControl_UA_1_receive_clear(&inputs_ctx, NULL);
	if (A661Receive(msg, sizeof msg) == 0)
		ErlunControl_UA_1_receive(msg, sizeof msg, &inputs_ctx, NULL);
}


void AfterSimStep(void){
	static buffer_el msg[ErlunControl_UA_1_MAX_SIZE_OUTPUT_BUFFER];
	int len;
	len = ErlunControl_UA_1_send(msg, &outputs_ctx, NULL);
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

