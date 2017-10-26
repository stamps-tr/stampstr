#include "comando_controle_interface.h"
#include "comando_controle_type.h"
#include "comando_controle_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "3444e8a0e4b9c8c9b5d83f37cb06ef22";
const char* _SCSIM_SmuTypesCheckSum = "70167ab69f4117fa3043a69f71c5aa42";

/* context */

inC_control inputs_ctx;
static inC_control inputs_ctx_restore;
static inC_control inputs_ctx_execute;
outC_control outputs_ctx;

static void _SCSIM_RestoreInterface(void) {
    inputs_ctx.SignalFromButton = inputs_ctx_restore.SignalFromButton;
    kcg_copy_array_char_150(&inputs_ctx.Description, &inputs_ctx_restore.Description);
    memset((void*)&outputs_ctx, 0, sizeof(outputs_ctx));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    inputs_ctx_execute.SignalFromButton = inputs_ctx.SignalFromButton;
    kcg_copy_array_char_150(&inputs_ctx_execute.Description, &inputs_ctx.Description);
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

/* simulation */

int SimInit(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_USER_DEFINED_INIT
    control_init(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

int SimReset(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
    control_reset(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

#ifdef __cplusplus
    #ifdef pSimoutC_controlCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_controlCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_controlCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_controlCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_controlCIVTable != NULL && 
        pSimoutC_controlCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_controlCIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
    }
    else {
        /* VTable misssing => error */
        nRet = 0;
    }
    return nRet;
}

#ifdef EXTENDED_SIM
    int GraphicalInputsConnected = 1;
#endif

int SimStep(void) {
#ifdef EXTENDED_SIM
    if (GraphicalInputsConnected)
        BeforeSimStep();
#endif
    _SCSIM_ExecuteInterface();
    control(&inputs_ctx_execute, &outputs_ctx);
#ifdef EXTENDED_SIM
    AfterSimStep();
#endif
    return 1;
}

int SimStop(void) {
#ifdef EXTENDED_SIM
    ExtendedSimStop();
#endif
    return 1;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
    UpdateValues();
#endif
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
    GraphicalInputsConnected = bConnect;
#endif
}

/* dump */

int SsmGetDumpSize(void) {
    int nSize = 0;
    nSize += sizeof(inC_control);
    nSize += sizeof(outC_control);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_control));
    pCurrent += sizeof(inC_control);
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_control));
    pCurrent += sizeof(outC_control);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_control));
    pCurrent += sizeof(inC_control);
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_control));
    pCurrent += sizeof(outC_control);
#ifdef EXTENDED_SIM
    ExtendedRestoreDumpData(pCurrent);
#endif
}

/* snapshot */

int SsmSaveSnapshot(const char * szFilePath, size_t nCycle) {
    /* Test Services API not available */
    return 0;
}

int SsmLoadSnapshot(const char * szFilePath, size_t *nCycle) {
    /* Test Services API not available */
    return 0;
}

/* checksum */

const char * SsmGetCheckSum() {
    return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
    return _SCSIM_SmuTypesCheckSum;
}

#ifdef __cplusplus
} /* "C" */
#endif

