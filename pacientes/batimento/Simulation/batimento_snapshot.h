#ifndef BATIMENTO_SNAPSHOT_API
#define BATIMENTO_SNAPSHOT_API

#include "batimento.h"
#include "stdio.h"

/*********************************************
 * Main Snapshot Save/Load functions
 *********************************************/
extern int save_snapshot(const char *szFilePath, size_t nCycle,
                      outC_batimento *outC);
extern int load_snapshot(const char *szFilePath, size_t *nCycle,
                      outC_batimento *outC);

/**********************************************
 * Operators context Save/Load sub-functions
 *********************************************/
extern int save_outC_NumericToFloat32_math_uint32(const char *cpath, const outC_NumericToFloat32_math_uint32 *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_NumericToFloat32_math_uint32(outC_NumericToFloat32_math_uint32 *pValue, FILE *snsFile);
extern int save_outC_batimento(const char *cpath, const outC_batimento *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_batimento(outC_batimento *pValue, FILE *snsFile);
#endif /*BATIMENTO_SNAPSHOT_API*/
