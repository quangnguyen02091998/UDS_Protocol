/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : watchdog1.c
**     Project     : UDS_S32K144_APP
**     Processor   : S32K144_100
**     Component   : wdog
**     Version     : Component SDK_S32K1xx_15, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_S32K1xx_15
**     Compiler    : GNU C Compiler
**     Date/Time   : 2021-02-20, 11:57, # CodeGen: 2
**
**     Copyright 1997 - 2015 Freescale Semiconductor, Inc. 
**     Copyright 2016-2017 NXP 
**     All Rights Reserved.
**     
**     THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
**     IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
**     OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
**     IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
**     INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
**     SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
**     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
**     STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
**     IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
**     THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file watchdog1.c
** @version 01.00
*/         
/*!
**  @addtogroup watchdog1_module watchdog1 module documentation
**  @{
*/         

/* MODULE watchdog1.
 *
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variables will be used in other source files by the user.
 */

#include "watchdog1.h"


/*! watchdog1 configuration structures */

const wdog_user_config_t watchdog1_Config0 = {
    .clkSource = WDOG_LPO_CLOCK,       /* WDOG clock source */
    .opMode = {
        false,                         /* Wait Mode         */
        false,                         /* Stop Mode         */
        false                          /* Debug Mode        */
    },
    .updateEnable = true,              /* Enable/Disable further updates of the WDOG configuration */
    .intEnable = false,                /* Timeout interrupt disabled */
    .winEnable = false,                /* Enable/Disable Window mode */
    .windowValue = 0U,                 /* Window value               */
    .timeoutValue = 60000U,            /* Timeout value              */
    .prescalerEnable = false           /* WDOG prescaler             */
};

/* END watchdog1. */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.1 [05.21]
**     for the Freescale S32K series of microcontrollers.
**
** ###################################################################
*/
