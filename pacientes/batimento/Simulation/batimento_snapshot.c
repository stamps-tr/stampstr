#include "batimento_snapshot.h"
#include "batimento_type.h"
#include "SmuLib.h"
#include "SmuVTable.h"
#include "stdio.h"

#ifdef _MSC_VER
  #define snprintf _snprintf
#endif

const char* szKcgTraceCheckSum = "f000ddf836874a619561f9f073b5138f";

/*********************************************
 * Snapshot Save functions
 *********************************************/
int save_var(const char *cpath, const void *pValue, const void *pBaseAddr, PFN_TYPE_TO_STRING pfnTypeToString, FILE *snsFile) {
    int bOK = 1;
    SimString strValue;
    SimStringAlloc(&strValue);
    bOK &= (pfnTypeToString(pValue, SimStringAppend, &strValue) != 0);
    bOK &= (fprintf(snsFile, "%s\t[offset=%u]\t%s\n", SimStringGet(&strValue), (size_t)pValue-(size_t)pBaseAddr, cpath) >= 0);
    SimStringFree(&strValue);
    return bOK;
}

int save_field(const char *cpath, const char *proj, const void *pValue, const void *pBaseAddr, PFN_TYPE_TO_STRING pfnTypeToString, FILE *snsFile) {
    int bOK = 1;
    SimString strCPath;
    SimStringAlloc(&strCPath);
    SimStringAppend(cpath, &strCPath);
    SimStringAppend(proj, &strCPath);
    bOK = save_var(SimStringGet(&strCPath), pValue, pBaseAddr, pfnTypeToString, snsFile);
    SimStringFree(&strCPath);
    return bOK;
}

typedef int(*PFN_SAVE_CONTEXT)(const char *cpath, const void *pValue, const void *pBaseAddr, FILE *snsFile);

int save_context(const char *cpath, const char *proj, const void *pValue, const void *pBaseAddr, PFN_SAVE_CONTEXT pfnSaveContext, FILE *snsFile) {
    int bOK = 1;
    SimString strCPath;
    SimStringAlloc(&strCPath);
    SimStringAppend(cpath, &strCPath);
    SimStringAppend(proj, &strCPath);
    bOK = pfnSaveContext(SimStringGet(&strCPath), pValue, pBaseAddr, snsFile);
    SimStringFree(&strCPath);
    return bOK;
}

int save_outC_NumericToFloat32_math_uint32(const char *cpath, const outC_NumericToFloat32_math_uint32 *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bOK = 1;
    bOK &= save_field(cpath, ".Output1_uint32", (const void *)(&pValue->Output1_uint32), pBaseAddr, kcg_float32_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_uint32", (const void *)(&pValue->_L1_uint32), pBaseAddr, kcg_uint32_to_string, snsFile); 
    bOK &= save_field(cpath, "._L2_uint32", (const void *)(&pValue->_L2_uint32), pBaseAddr, kcg_float32_to_string, snsFile); 
    return bOK;
}

int save_outC_batimento(const char *cpath, const outC_batimento *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bOK = 1;
    bOK &= save_field(cpath, ".Emit", (const void *)(&pValue->Emit), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".p1", (const void *)(&pValue->p1), pBaseAddr, kcg_uint32_to_string, snsFile); 
    bOK &= save_field(cpath, ".p2", (const void *)(&pValue->p2), pBaseAddr, kcg_uint32_to_string, snsFile); 
    bOK &= save_field(cpath, ".p3", (const void *)(&pValue->p3), pBaseAddr, kcg_uint32_to_string, snsFile); 
    bOK &= save_field(cpath, ".p4", (const void *)(&pValue->p4), pBaseAddr, kcg_uint32_to_string, snsFile); 
    bOK &= save_field(cpath, ".p5", (const void *)(&pValue->p5), pBaseAddr, kcg_uint32_to_string, snsFile); 
    bOK &= save_field(cpath, ".atual", (const void *)(&pValue->atual), pBaseAddr, kcg_float32_to_string, snsFile); 
    bOK &= save_context(cpath, ".Context_NumericToFloat32_1", (const void *)(&pValue->Context_NumericToFloat32_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_NumericToFloat32_math_uint32, snsFile);
    bOK &= save_field(cpath, "._L18", (const void *)(&pValue->_L18), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L20", (const void *)(&pValue->_L20), pBaseAddr, array_uint32_5_to_string, snsFile); 
    bOK &= save_field(cpath, "._L24", (const void *)(&pValue->_L24), pBaseAddr, kcg_uint32_to_string, snsFile); 
    bOK &= save_field(cpath, "._L23", (const void *)(&pValue->_L23), pBaseAddr, kcg_uint32_to_string, snsFile); 
    bOK &= save_field(cpath, "._L22", (const void *)(&pValue->_L22), pBaseAddr, kcg_uint32_to_string, snsFile); 
    bOK &= save_field(cpath, "._L21", (const void *)(&pValue->_L21), pBaseAddr, kcg_uint32_to_string, snsFile); 
    bOK &= save_field(cpath, "._L25", (const void *)(&pValue->_L25), pBaseAddr, kcg_uint32_to_string, snsFile); 
    bOK &= save_field(cpath, "._L28", (const void *)(&pValue->_L28), pBaseAddr, kcg_float32_to_string, snsFile); 
    bOK &= save_field(cpath, "._L29", (const void *)(&pValue->_L29), pBaseAddr, kcg_float32_to_string, snsFile); 
    bOK &= save_field(cpath, "._L30", (const void *)(&pValue->_L30), pBaseAddr, kcg_float32_to_string, snsFile); 
    bOK &= save_field(cpath, "._L31", (const void *)(&pValue->_L31), pBaseAddr, kcg_float32_to_string, snsFile); 
    bOK &= save_field(cpath, "._L32", (const void *)(&pValue->_L32), pBaseAddr, kcg_float32_to_string, snsFile); 
    return bOK;
}

int save_snapshot(const char *szFilePath, size_t nCycle,
                      outC_batimento *outC) {
    int bOK = 1;
    char savRealFormat[MAX_REAL_FORMAT_LEN];
    FILE *snsFile = fopen(szFilePath, "w");
    if ( !snsFile )
        return 0;

    /* Force real number format to 17 significant digits */
    strcpy(savRealFormat, pConverter->m_RealFormat);
    strcpy(pConverter->m_RealFormat, "%.17g");

    /* Write mapping file checksum */
    bOK &= (fprintf(snsFile, "%s\n", szKcgTraceCheckSum) >= 0);

    /* Write cycle counter */
    bOK &= (fprintf(snsFile, "%u\n", nCycle) >= 0);

    /* Write all context variables */
    bOK &= save_outC_batimento("outC", outC, (const void*)outC, snsFile);

    /* Restore real number format */
    strcpy(pConverter->m_RealFormat, savRealFormat);
    fclose(snsFile);
    return bOK;
}
/*********************************************
 * Snapshot Load functions
 *********************************************/
int read_line(FILE *snsFile, SimString *pstrLine) {
    char buf[1024];
    size_t bufLen;
    SimStringReset(pstrLine);
    if (feof(snsFile))
        return 0;
    /* Read entire line */
    while (fgets(buf, 100, snsFile) != NULL) {
        SimStringAppend(buf, pstrLine);
        if (buf[strlen(buf) - 1] == '\n')
            break;
    }
    /* Remove end of line characters */
    while (pstrLine->m_nLength >=0 && pstrLine->m_pszBase[pstrLine->m_nLength-1] == '\n' || pstrLine->m_pszBase[pstrLine->m_nLength-1] == '\r') {
        pstrLine->m_pszBase[pstrLine->m_nLength-1] = '\0';
        pstrLine->m_nLength--;
    }
    return 1;
}

int load_var(void *pValue, PFN_STRING_TO_TYPE pfnStringToType, FILE *snsFile) {
    int bOK = 1;
    char *endptr;
    SimString strLine;
    SimStringAlloc(&strLine);
    bOK = read_line(snsFile, &strLine);
    if (bOK)
        bOK = (pfnStringToType(SimStringGet(&strLine), pValue, &endptr) != 0
            && (*endptr=='\t' || *endptr=='\0' || *endptr==' '));
    SimStringFree(&strLine);
    return bOK;
}

int load_outC_NumericToFloat32_math_uint32(outC_NumericToFloat32_math_uint32 *pValue, FILE *snsFile) {
    int bOK = 1;
    bOK &= load_var((void *)(&pValue->Output1_uint32), string_to_kcg_float32, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_uint32), string_to_kcg_uint32, snsFile); 
    bOK &= load_var((void *)(&pValue->_L2_uint32), string_to_kcg_float32, snsFile); 
    return bOK;
}

int load_outC_batimento(outC_batimento *pValue, FILE *snsFile) {
    int bOK = 1;
    bOK &= load_var((void *)(&pValue->Emit), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->p1), string_to_kcg_uint32, snsFile); 
    bOK &= load_var((void *)(&pValue->p2), string_to_kcg_uint32, snsFile); 
    bOK &= load_var((void *)(&pValue->p3), string_to_kcg_uint32, snsFile); 
    bOK &= load_var((void *)(&pValue->p4), string_to_kcg_uint32, snsFile); 
    bOK &= load_var((void *)(&pValue->p5), string_to_kcg_uint32, snsFile); 
    bOK &= load_var((void *)(&pValue->atual), string_to_kcg_float32, snsFile); 
    bOK &= load_outC_NumericToFloat32_math_uint32(&pValue->Context_NumericToFloat32_1, snsFile);
    bOK &= load_var((void *)(&pValue->_L18), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L20), string_to_array_uint32_5, snsFile); 
    bOK &= load_var((void *)(&pValue->_L24), string_to_kcg_uint32, snsFile); 
    bOK &= load_var((void *)(&pValue->_L23), string_to_kcg_uint32, snsFile); 
    bOK &= load_var((void *)(&pValue->_L22), string_to_kcg_uint32, snsFile); 
    bOK &= load_var((void *)(&pValue->_L21), string_to_kcg_uint32, snsFile); 
    bOK &= load_var((void *)(&pValue->_L25), string_to_kcg_uint32, snsFile); 
    bOK &= load_var((void *)(&pValue->_L28), string_to_kcg_float32, snsFile); 
    bOK &= load_var((void *)(&pValue->_L29), string_to_kcg_float32, snsFile); 
    bOK &= load_var((void *)(&pValue->_L30), string_to_kcg_float32, snsFile); 
    bOK &= load_var((void *)(&pValue->_L31), string_to_kcg_float32, snsFile); 
    bOK &= load_var((void *)(&pValue->_L32), string_to_kcg_float32, snsFile); 
    return bOK;
}

int load_snapshot(const char *szFilePath, size_t *nCycle,
                      outC_batimento *outC) {
    int bOK = 1;
    FILE *snsFile = fopen(szFilePath, "r");
    SimString strLine;
    SimStringAlloc(&strLine);
    if ( !snsFile )
        return 0;

    /* Read and verify mapping file checksum */
    bOK = read_line(snsFile, &strLine);
    if (bOK)
        bOK = strcmp(SimStringGet(&strLine), szKcgTraceCheckSum)==0;

    /* Read cycle counter */
    if (bOK)
        bOK = (fscanf(snsFile, "%u\n", nCycle) == 1);

    /* Read all context variables */
    if (bOK) {
        bOK &= load_outC_batimento(outC, snsFile);
    }

    fclose(snsFile);
    SimStringFree(&strLine);
    return bOK;
}
