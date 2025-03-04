#ifndef DEBUG_IO_H_
#define DEBUG_IO_H_

#include "includes.h"

#ifdef EN_DEBUG_IO

void DEBUG_IO_Init(void);
void DEBUG_IO_Deinit(void);
void DEBUG_IO_SetDebugIOLow(void);
void DEBUG_IO_SetDebugIOHigh(void);
void DEBUG_IO_ToggleDebugIO(void);

#endif

#endif /* DEBUG_IO_H_ */

/* -------------------------------------------- END OF FILE -------------------------------------------- */
