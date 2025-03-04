#ifndef DEBUG_TIMER_H_
#define DEBUG_TIMER_H_

#include "includes.h"

#ifdef EN_DEBUG_TIMER

void DEBUG_TIMER_Init(void);

uint32 DEBUG_TIMER_GetTimerValue(void);

void DEBUG_TIMER_Deinit(void);

#endif

#endif /* DEBUG_TIMER_H_ */

/* -------------------------------------------- END OF FILE -------------------------------------------- */
