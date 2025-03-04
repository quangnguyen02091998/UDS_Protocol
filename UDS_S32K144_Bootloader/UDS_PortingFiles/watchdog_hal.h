#ifndef WATCHDOG_HAL_H_
#define WATCHDOG_HAL_H_

#include "includes.h"

void WATCHDOG_HAL_Init(void);

void WATCHDOG_HAL_Feed(void);

void WATCHDOG_HAL_SystemReset(void);

void WATCHDOG_HAL_Deinit(void);

#endif /* WATCHDOG_HAL_H_ */

/* -------------------------------------------- END OF FILE -------------------------------------------- */
