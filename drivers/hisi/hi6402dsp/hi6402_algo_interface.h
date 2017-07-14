/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : hi6402_algo_interface.h
  版 本 号   : 初稿
  作    者   : c00188744
  生成日期   : 2014年9月23日
  最近修改   :
  功能描述   : AP与6402 DSP算法之间的接口头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2014年9月23日
    作    者   : c00188744
    修改内容   : 创建文件

******************************************************************************/

/*****************************************************************************
  1 其他头文件包含

  notice:  不要包含任何其他头文件!!!
*****************************************************************************/


#ifndef __HIFIALGOINTERFACE_H__
#define __HIFIALGOINTERFACE_H__

/************************************************ SOUNDTRIGGER COMMON BEGIN ************************************************/
struct MlibParameterST
{
    int key;
    union
    {
        int value;
        struct
        {
            unsigned int index;
            unsigned int length;
            char piece[0];
        };
    };
};

enum ST_PARA_ENUM
{
    MLIB_ST_PARA_ENABLE = 0,
    MLIB_ST_PARA_MODEL,
    MLIB_ST_PARA_MODEL_SIZE,
    MLIB_ST_PARA_THRESHOLD,
    MLIB_ST_PARA_PRINT_MCPS,
    MLIB_ST_PARA_MODEL_GRAM,
    MLIB_ST_PARA_MODEL_GRAM_SIZE,
    MLIB_ST_PARA_NO_SUSPEND,
    MLIB_ST_PARA_MODEL_CMD,
    MLIB_ST_PARA_MODEL_CMD_SIZE,
    MLIB_ST_PARA_MODEL_CMD_GRAM,
    MLIB_ST_PARA_MODEL_CMD_GRAM_SIZE,
    MLIB_ST_PARA_LANGUAGE,
    MLIB_ST_PARA_TRIGGER_TYPE,

    MLIB_ST_PARA_TRANSACTION = 1000,
    MLIB_ST_PARA_DEBUG,
    MLIB_ST_PARA_CUSTOMCMD,
};

enum ST_LANGUAGE_ENUM
{
    ST_LANGUAGE_CN,
    ST_LANGUAGE_EN,
    ST_LANGUAGE_MAX,
};

enum ST_TRIGGER_TYPE_ENUM
{
    ST_TRIGGER_TYPE_FT,
    ST_TRIGGER_TYPE_FTSV,
    ST_TRIGGER_TYPE_UDT,
    ST_TRIGGER_TYPE_MAX,
};

enum ST_EVENT_ENUM
{
    ST_EVENT_TRIGGER_EMY = 0,
    ST_EVENT_COMMAND_FINDPHONE,
    ST_EVENT_TRIGGER_OKGOOGLE,

    ST_EVENT_MAX = 5,
};
/************************************************ SOUNDTRIGGER COMMON END ************************************************/

/************************************************ DSM PARA START************************************************/
struct MlibParameterDsm
{
    short key;
    union
    {
        short value;
        struct
        {
            unsigned short paraSize;
            char paraData[0];
        };
    };
};

enum DSM_PARA_ENUM
{
    MLIB_DSM_PARA_CONFIG,
    MLIB_DSM_PARA_DEBUG,
    MLIB_DSM_PARA_PRINT_MCPS,
    MLIB_DSM_PARA_DATA_HOOK,
};
/************************************************ DSM  PARA END************************************************/
#endif /* end of hi6402_algo_interface.h */
