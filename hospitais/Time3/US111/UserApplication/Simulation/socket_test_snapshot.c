#include "socket_test_snapshot.h"
#include "socket_test_type.h"
#include "SmuLib.h"
#include "SmuVTable.h"
#include "stdio.h"

#ifdef _MSC_VER
  #define snprintf _snprintf
#endif

const char* szKcgTraceCheckSum = "e69eb838f4dd385023dc7bf5c56195d9";

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

int save_inC_test(const char *cpath, const inC_test *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bOK = 1;
    bOK &= save_field(cpath, ".SignalButtonPoor", (const void *)(&pValue->SignalButtonPoor), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".SignalButtonFair", (const void *)(&pValue->SignalButtonFair), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".SignalButtonGood", (const void *)(&pValue->SignalButtonGood), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".SignalButtonExcellent", (const void *)(&pValue->SignalButtonExcellent), pBaseAddr, kcg_bool_to_string, snsFile); 
    return bOK;
}

int save_outC_test(const char *cpath, const outC_test *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bOK = 1;
    bOK &= save_field(cpath, ".Emit", (const void *)(&pValue->Emit), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L83", (const void *)(&pValue->_L83), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L86", (const void *)(&pValue->_L86), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L87", (const void *)(&pValue->_L87), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L88", (const void *)(&pValue->_L88), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L93", (const void *)(&pValue->_L93), pBaseAddr, kcg_int_to_string, snsFile); 
    bOK &= save_field(cpath, "._L94", (const void *)(&pValue->_L94), pBaseAddr, kcg_int_to_string, snsFile); 
    bOK &= save_field(cpath, "._L96", (const void *)(&pValue->_L96), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L123", (const void *)(&pValue->_L123), pBaseAddr, kcg_int_to_string, snsFile); 
    bOK &= save_field(cpath, "._L126", (const void *)(&pValue->_L126), pBaseAddr, kcg_int_to_string, snsFile); 
    bOK &= save_field(cpath, "._L138", (const void *)(&pValue->_L138), pBaseAddr, kcg_int_to_string, snsFile); 
    bOK &= save_field(cpath, "._L137", (const void *)(&pValue->_L137), pBaseAddr, kcg_int_to_string, snsFile); 
    bOK &= save_field(cpath, "._L136", (const void *)(&pValue->_L136), pBaseAddr, kcg_int_to_string, snsFile); 
    bOK &= save_field(cpath, "._L141", (const void *)(&pValue->_L141), pBaseAddr, kcg_int_to_string, snsFile); 
    bOK &= save_field(cpath, "._L140", (const void *)(&pValue->_L140), pBaseAddr, kcg_int_to_string, snsFile); 
    bOK &= save_field(cpath, "._L139", (const void *)(&pValue->_L139), pBaseAddr, kcg_int_to_string, snsFile); 
    bOK &= save_field(cpath, "._L144", (const void *)(&pValue->_L144), pBaseAddr, kcg_int_to_string, snsFile); 
    bOK &= save_field(cpath, "._L143", (const void *)(&pValue->_L143), pBaseAddr, kcg_int_to_string, snsFile); 
    bOK &= save_field(cpath, "._L142", (const void *)(&pValue->_L142), pBaseAddr, kcg_int_to_string, snsFile); 
    return bOK;
}

int save_snapshot(const char *szFilePath, size_t nCycle,
                      inC_test *inC,
                      outC_test *outC) {
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
    bOK &= save_inC_test("inC", inC, (const void*)inC, snsFile);
    bOK &= save_outC_test("outC", outC, (const void*)outC, snsFile);

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

int load_inC_test(inC_test *pValue, FILE *snsFile) {
    int bOK = 1;
    bOK &= load_var((void *)(&pValue->SignalButtonPoor), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->SignalButtonFair), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->SignalButtonGood), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->SignalButtonExcellent), string_to_kcg_bool, snsFile); 
    return bOK;
}

int load_outC_test(outC_test *pValue, FILE *snsFile) {
    int bOK = 1;
    bOK &= load_var((void *)(&pValue->Emit), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L4), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L83), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L86), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L87), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L88), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L93), string_to_kcg_int, snsFile); 
    bOK &= load_var((void *)(&pValue->_L94), string_to_kcg_int, snsFile); 
    bOK &= load_var((void *)(&pValue->_L96), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L123), string_to_kcg_int, snsFile); 
    bOK &= load_var((void *)(&pValue->_L126), string_to_kcg_int, snsFile); 
    bOK &= load_var((void *)(&pValue->_L138), string_to_kcg_int, snsFile); 
    bOK &= load_var((void *)(&pValue->_L137), string_to_kcg_int, snsFile); 
    bOK &= load_var((void *)(&pValue->_L136), string_to_kcg_int, snsFile); 
    bOK &= load_var((void *)(&pValue->_L141), string_to_kcg_int, snsFile); 
    bOK &= load_var((void *)(&pValue->_L140), string_to_kcg_int, snsFile); 
    bOK &= load_var((void *)(&pValue->_L139), string_to_kcg_int, snsFile); 
    bOK &= load_var((void *)(&pValue->_L144), string_to_kcg_int, snsFile); 
    bOK &= load_var((void *)(&pValue->_L143), string_to_kcg_int, snsFile); 
    bOK &= load_var((void *)(&pValue->_L142), string_to_kcg_int, snsFile); 
    return bOK;
}

int load_snapshot(const char *szFilePath, size_t *nCycle,
                      inC_test *inC,
                      outC_test *outC) {
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
        bOK &= load_inC_test(inC, snsFile);
        bOK &= load_outC_test(outC, snsFile);
    }

    fclose(snsFile);
    SimStringFree(&strLine);
    return bOK;
}
