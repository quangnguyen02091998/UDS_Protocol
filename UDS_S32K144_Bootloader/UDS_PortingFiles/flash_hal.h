#ifndef FLASH_HAL_H_
#define FLASH_HAL_H_

#include "flash_hal_Cfg.h"

typedef boolean (*tpfFlashInit)(void);
typedef void (*tpfFlashDeInit)(void);
typedef boolean (*tpfEraseSecotr)(const uint32, const uint32);
typedef boolean (*tpfProgramData)(const uint32, const uint8 *, const uint32);
typedef boolean (*tpfReadFlashData)(const uint32, const uint32, uint8 *);

typedef struct
{
    tpfFlashInit pfFlashInit;
    tpfEraseSecotr pfEraserSecotr;    /* erase sector */
    tpfProgramData pfProgramData;     /* program data */
    tpfReadFlashData pfReadFlashData; /* read flash data */
    tpfFlashDeInit pfFlashDeinit;
} tFlashOperateAPI;

/*!
 * @brief To Register operate API.
 *
 * This function returns the state of the initial.
 *
 * @param[out] operate flash API
 * @return register status.
 */
boolean FLASH_HAL_RegisterFlashAPI(tFlashOperateAPI *o_pstFlashOperateAPI);

#endif /* FLASH_HAL_H_ */

/* -------------------------------------------- END OF FILE -------------------------------------------- */
