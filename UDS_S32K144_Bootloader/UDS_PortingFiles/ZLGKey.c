#include "ZLGKey.h"
#ifdef EN_ZLG_SA_ALGORITHM

/*******************************************************************************
* @name   : deZLGKey
* @brief  : �򵥵�����ZCANPRO��ȫ������֤�����㷨����Ӧ��ZCANPRO�İ�ȫ�㷨���ӿ�
* @param  : void
* @retval : void
*******************************************************************************/
void deZLGKey(sint8 *c, sint32 clen, sint8 *pPlainText)
{
    sint32 i;

    if (clen == 0 || clen % 16 != 0)
    {
        return;
    }

    for (i = 0; i < clen; i++)
    {
        pPlainText[i] = c[i] - 1;
    }
}
#endif

/* -------------------------------------------- END OF FILE -------------------------------------------- */
