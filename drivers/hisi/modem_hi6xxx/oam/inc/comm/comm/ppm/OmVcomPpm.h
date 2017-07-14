/************************************************************************
  Copyright   : 2013-2015, Huawei Tech. Co., Ltd.
  File name   : OmVcomPpm.h
  Author      : l00256032
  Version     : V900R001
  Date        : 2014-5-31
  Description : OM VCOM物理端口管理模块头文件
  History     :
  1.日    期   : 2014年5月25日
    作    者   : L00256032
    修改内容   : V8R1 OM_Optimize项目新增

************************************************************************/

#ifndef __OM_VCOM_PPM_H__
#define __OM_VCOM_PPM_H__

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/


/*******************************************************************************
  3 枚举定义
*******************************************************************************/


/*****************************************************************************
  4 结构体定义
*****************************************************************************/


/*****************************************************************************
  4 函数声明
*****************************************************************************/
VOS_UINT32 PPM_VComCfgSendData(VOS_UINT8 *pucVirAddr, VOS_UINT8 *pucPhyAddr, VOS_UINT32 ulDataLen);

VOS_UINT32 PPM_VComCfgReadData(VOS_UINT32 ulDevIndex, VOS_UINT8 *pData, VOS_UINT32 uslength);

VOS_UINT32 PPM_VComIndSendData(VOS_UINT8 *pucVirAddr, VOS_UINT8 *pucPhyAddr, VOS_UINT32 ulDataLen);

VOS_VOID   PPM_VComCfgPortInit(VOS_VOID);

VOS_VOID   PPM_VComIndPortInit(VOS_VOID);

VOS_VOID   PPM_VComPortInit(VOS_VOID);

VOS_VOID   GU_OamErrLogVComPortInit(VOS_VOID);
/*****************************************************************************
  5 全局变量声明
*****************************************************************************/


/*****************************************************************************
  6 OTHERS定义
*****************************************************************************/




#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of OmCommonPpm.h*/

