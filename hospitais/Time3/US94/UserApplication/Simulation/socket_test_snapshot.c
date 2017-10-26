#include "socket_test_snapshot.h"
#include "socket_test_type.h"
#include "SmuLib.h"
#include "SmuVTable.h"
#include "stdio.h"

#ifdef _MSC_VER
  #define snprintf _snprintf
#endif

const char* szKcgTraceCheckSum = "53a6dc856ee1e1c506246be04f4ae8ca";

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
    bOK &= save_field(cpath, ".DescriptionFromDisplay", (const void *)(&pValue->DescriptionFromDisplay), pBaseAddr, array_char_150_to_string, snsFile); 
    bOK &= save_field(cpath, ".SignalFromButton", (const void *)(&pValue->SignalFromButton), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".Latitude", (const void *)(&pValue->Latitude), pBaseAddr, array_char_10_to_string, snsFile); 
    bOK &= save_field(cpath, ".Longitude", (const void *)(&pValue->Longitude), pBaseAddr, array_char_10_to_string, snsFile); 
    bOK &= save_field(cpath, ".Notification", (const void *)(&pValue->Notification), pBaseAddr, kcg_bool_to_string, snsFile); 
    return bOK;
}

int save_outC_test(const char *cpath, const outC_test *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bOK = 1;
    bOK &= save_field(cpath, ".Emit", (const void *)(&pValue->Emit), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".SignalToLED", (const void *)(&pValue->SignalToLED), pBaseAddr, kcg_int_to_string, snsFile); 
    bOK &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L48", (const void *)(&pValue->_L48), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L47", (const void *)(&pValue->_L47), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L46", (const void *)(&pValue->_L46), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L44", (const void *)(&pValue->_L44), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L76", (const void *)(&pValue->_L76), pBaseAddr, kcg_int_to_string, snsFile); 
    bOK &= save_field(cpath, "._L77", (const void *)(&pValue->_L77), pBaseAddr, kcg_int_to_string, snsFile); 
    bOK &= save_field(cpath, "._L78", (const void *)(&pValue->_L78), pBaseAddr, kcg_int_to_string, snsFile); 
    bOK &= save_field(cpath, "._L81", (const void *)(&pValue->_L81), pBaseAddr, array_char_150_to_string, snsFile); 
    bOK &= save_field(cpath, "._L82", (const void *)(&pValue->_L82), pBaseAddr, array_char_10_to_string, snsFile); 
    bOK &= save_field(cpath, "._L83", (const void *)(&pValue->_L83), pBaseAddr, array_char_10_to_string, snsFile); 
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
    bOK &= load_var((void *)(&pValue->DescriptionFromDisplay), string_to_array_char_150, snsFile); 
    bOK &= load_var((void *)(&pValue->SignalFromButton), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->Latitude), string_to_array_char_10, snsFile); 
    bOK &= load_var((void *)(&pValue->Longitude), string_to_array_char_10, snsFile); 
    bOK &= load_var((void *)(&pValue->Notification), string_to_kcg_bool, snsFile); 
    return bOK;
}

int load_outC_test(outC_test *pValue, FILE *snsFile) {
    int bOK = 1;
    bOK &= load_var((void *)(&pValue->Emit), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->SignalToLED), string_to_kcg_int, snsFile); 
    bOK &= load_var((void *)(&pValue->_L4), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L48), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L47), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L46), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L44), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L76), string_to_kcg_int, snsFile); 
    bOK &= load_var((void *)(&pValue->_L77), string_to_kcg_int, snsFile); 
    bOK &= load_var((void *)(&pValue->_L78), string_to_kcg_int, snsFile); 
    bOK &= load_var((void *)(&pValue->_L81), string_to_array_char_150, snsFile); 
    bOK &= load_var((void *)(&pValue->_L82), string_to_array_char_10, snsFile); 
    bOK &= load_var((void *)(&pValue->_L83), string_to_array_char_10, snsFile); 
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
