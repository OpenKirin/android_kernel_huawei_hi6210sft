/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : OmFsPpm.c
  版 本 号   : 初稿
  作    者   :
  生成日期   :
  最近修改   :
  功能描述   : OM的文件系统保存log管理模块
  函数列表   :
  修改历史   :
  1.日    期   : 2014年5月31日
    作    者   : L00256032
    修改内容   : V8R1 OM_Optimize项目新增

***************************************************************************** */

/*****************************************************************************
  1 头文件包含
**************************************************************************** */
#include "SCMProc.h"
#include "ombufmngr.h"
#include "cpm.h"
#include "omsdlog.h"
#include "OmFsPpm.h"
#include "NVIM_Interface.h"
#include "SysNvId.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/* lint -e767  */
#define    THIS_FILE_ID        PS_FILE_ID_OM_FS_PPM_C
/* lint +e767  */

/* ****************************************************************************
  2 全局变量定义
**************************************************************************** */


/*****************************************************************************
  3 外部引用声明
*****************************************************************************/
extern NV_FLASH_LOG_RECORD_STRU            g_stFlashLogCfg;
extern OM_FLASH_DEBUG_INFO_STRU            g_stFSLogFileInfo;
extern VOS_UINT32                          g_ulLogMaxCout;
/*****************************************************************************
  4 函数实现
*****************************************************************************/

/*****************************************************************************
 函 数 名  :
 功能描述  :
 输入参数  :
 输出参数  :
 返 回 值  :
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年5月31日
    作    者   : XXXXXXXX
    修改内容   : V8R1 OM_Optimize项目新增

*****************************************************************************/
#if (VOS_LINUX == VOS_OS_VER)

/*****************************************************************************
 函 数 名  : OM_FSStartLog
 功能描述  : 启动Log保存功能
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_ERR
             VOS_OK

 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年12月28日
    作    者   : s00207770
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 PPM_FSStartLog(VOS_VOID)
{
    /*如果GU配置保存空间配置为0，则不需要进行保存*/
    if (0 == g_stFlashLogCfg.ulGULogFileSize)
    {
        return VOS_OK;
    }

    if (VOS_OK != OM_FSInitCfgFile())
    {
        return VOS_ERR;
    }

    if (VOS_OK != OM_FSCheckSpace())
    {
        return VOS_ERR;
    }

    g_stFSLogFileInfo.bIsWritten    = VOS_TRUE;
    g_stFSLogFileInfo.lFileHandle   = -1;
    g_stFSLogFileInfo.ulRemainCount = g_ulLogMaxCout;
    g_stFSLogFileInfo.ulFileSize    = OM_FLASH_DEFAULT_FILE_SIZE;
    g_stFSLogFileInfo.ulFileMaxSize = OM_FLASH_DEFAULT_FILE_SIZE;

    return VOS_OK;
}

/*****************************************************************************
 函 数 名  : PPM_FSWriteLogProc
 功能描述  : 根据Nv项配置，将收到Log数据处理后写到文件系统
 输入参数  : pucVirAddr:   数据虚地址
             pucPhyAddr:   数据实地址
             ulLength:     数据长度
 输出参数  : 无
 返 回 值  : VOS_OK  写入成功
             VOS_ERR 写入失败

 修改历史      :
  1.日    期   : 2014年01月09日
    作    者   : d00212987
    修改内容   :
*****************************************************************************/
VOS_UINT32 PPM_FSWriteLogProc(VOS_UINT8 *pucVirAddr, VOS_UINT8 *pucPhyAddr, VOS_UINT32 ulLength)
{
#if (FEATURE_ON == FEATURE_COMPRESS_WRITE_LOG_FILE)
    return OM_CompressRcvLog(pucVirAddr, ulLength);
#else
    return OM_FSWriteLogFile(pucVirAddr, ulLength);
#endif
}

/*****************************************************************************
 函 数 名  : PPM_FSInitLogFile
 功能描述  : 初始化LOG文件
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_ERR
             VOS_OK
  1.日    期   : 2014年5月31日
    作    者   : h59254
    修改内容   : V8R1 OM_Optimize项目新增
*****************************************************************************/
VOS_UINT32 PPM_FSInitLogFile(VOS_VOID)
{
    /*读取Flash保存trace配置*/
    if(NV_OK != NV_Read(en_NV_Item_FLASH_Log_Record_CFG, &g_stFlashLogCfg, sizeof(NV_FLASH_LOG_RECORD_STRU)))
    {
        PS_LOG(WUEPS_PID_OM, 0, PS_PRINT_ERROR, "PPM_FSInitLogFile:Read NV Config fail!");

        return VOS_OK;
    }

    g_stFSLogFileInfo.bIsWritten    = VOS_FALSE;

    /*如果GU配置保存空间配置为0，则不需要进行保存*/
    if (0 == g_stFlashLogCfg.ulGULogFileSize)
    {
        return VOS_OK;
    }

    CPM_PhySendReg(CPM_FS_PORT, (CPM_SEND_FUNC)PPM_FSWriteLogProc);

    if (VOS_OK != PPM_FSStartLog())
    {
        return VOS_ERR;
    }

    return VOS_OK;
}

#endif

#ifdef __cplusplus
#if __cplusplus
    }
#endif
#endif




