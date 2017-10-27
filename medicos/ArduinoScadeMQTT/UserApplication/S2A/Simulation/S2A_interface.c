#include "S2A_interface.h"
#include "S2A_type.h"
#include "S2A_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "85fab91b13b99c6fb3a26f3273c6e199";
const char* _SCSIM_SmuTypesCheckSum = "70167ab69f4117fa3043a69f71c5aa42";

/* context */

inC_S2A inputs_ctx;
static inC_S2A inputs_ctx_restore;
static inC_S2A inputs_ctx_execute;
outC_S2A outputs_ctx;

static void _SCSIM_RestoreInterface(void) {
    inputs_ctx.SignalPortButton = inputs_ctx_restore.SignalPortButton;
    memset((void*)&outputs_ctx, 0, sizeof(outputs_ctx));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    inputs_ctx_execute.SignalPortButton = inputs_ctx.SignalPortButton;
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
    S2A_init(&outputs_ctx);
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
    S2A_reset(&outputs_ctx);
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
    #ifdef pSimoutC_S2ACIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_S2ACIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_S2ACIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_S2ACIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_S2ACIVTable != NULL && 
        pSimoutC_S2ACIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_S2ACIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
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
    S2A(&inputs_ctx_execute, &outputs_ctx);
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
    nSize += sizeof(inC_S2A);
    nSize += sizeof(outC_S2A);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_S2A));
    pCurrent += sizeof(inC_S2A);
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_S2A));
    pCurrent += sizeof(outC_S2A);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_S2A));
    pCurrent += sizeof(inC_S2A);
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_S2A));
    pCurrent += sizeof(outC_S2A);
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

