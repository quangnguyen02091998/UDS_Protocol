#ifndef LIN_TP_H_
#define LIN_TP_H_

#include "LIN_tp_cfg.h"

#ifdef EN_LIN_TP

#include "multi_cyc_fifo.h"

void LINTP_MainFun(void);

void LINTP_SytstemTickControl(void);

void LINTP_Init(void);

#endif /* EN_LIN_TP */

#endif /* LIN_TP_H_ */

/* -------------------------------------------- END OF FILE -------------------------------------------- */
