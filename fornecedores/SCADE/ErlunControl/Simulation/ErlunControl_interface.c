#include "ErlunControl_interface.h"
#include "ErlunControl_type.h"
#include "ErlunControl_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "911b36984fc79f9a7258d4fe787c5988";
const char* _SCSIM_SmuTypesCheckSum = "70167ab69f4117fa3043a69f71c5aa42";

/* context */

inC_ErlunControl inputs_ctx;
static inC_ErlunControl inputs_ctx_restore;
static inC_ErlunControl inputs_ctx_execute;
outC_ErlunControl outputs_ctx;

static void _SCSIM_RestoreInterface(void) {
    inputs_ctx.Turn_Btn = inputs_ctx_restore.Turn_Btn;
    inputs_ctx.Up_Btn = inputs_ctx_restore.Up_Btn;
    inputs_ctx.Down_Btn = inputs_ctx_restore.Down_Btn;
    inputs_ctx.Left_Btn = inputs_ctx_restore.Left_Btn;
    inputs_ctx.Right_Btn = inputs_ctx_restore.Right_Btn;
    inputs_ctx.Speed_Btn = inputs_ctx_restore.Speed_Btn;
    inputs_ctx.Speed_BtnValue = inputs_ctx_restore.Speed_BtnValue;
    memset((void*)&outputs_ctx, 0, sizeof(outputs_ctx));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    inputs_ctx_execute.Turn_Btn = inputs_ctx.Turn_Btn;
    inputs_ctx_execute.Up_Btn = inputs_ctx.Up_Btn;
    inputs_ctx_execute.Down_Btn = inputs_ctx.Down_Btn;
    inputs_ctx_execute.Left_Btn = inputs_ctx.Left_Btn;
    inputs_ctx_execute.Right_Btn = inputs_ctx.Right_Btn;
    inputs_ctx_execute.Speed_Btn = inputs_ctx.Speed_Btn;
    inputs_ctx_execute.Speed_BtnValue = inputs_ctx.Speed_BtnValue;
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
    ErlunControl_init(&outputs_ctx);
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
    ErlunControl_reset(&outputs_ctx);
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
    #ifdef pSimoutC_ErlunControlCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_ErlunControlCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_ErlunControlCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_ErlunControlCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_ErlunControlCIVTable != NULL && 
        pSimoutC_ErlunControlCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_ErlunControlCIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
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
    ErlunControl(&inputs_ctx_execute, &outputs_ctx);
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
    nSize += sizeof(inC_ErlunControl);
    nSize += sizeof(outC_ErlunControl);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_ErlunControl));
    pCurrent += sizeof(inC_ErlunControl);
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_ErlunControl));
    pCurrent += sizeof(outC_ErlunControl);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_ErlunControl));
    pCurrent += sizeof(inC_ErlunControl);
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_ErlunControl));
    pCurrent += sizeof(outC_ErlunControl);
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

