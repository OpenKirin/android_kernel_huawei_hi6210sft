/************************************************************************
  Copyright    : 2005-2007, Huawei Tech. Co., Ltd.
  File name    : TafMmaApi.c
  Author       : ---
  Version      : V200R002
  Date         : 2005-09-10
  Description  : 该C文件给出了MMA模块的远端实现
                        1、完成形成数据打包传送至mux，
                        2、处理上报的事件与数据传至APP或AT


  Function List:
        1) Taf_DefPhAccessMode
        2) Taf_DefPhBand
        3) Taf_DefPhClassType
        4) Taf_DefPhMode
        5) Taf_InitEventInfoOP
        6) Taf_MmaGetInfo
        7) Taf_PhoneAttach
        8) Taf_PhoneDetach
        9) Taf_PhonePinHandle
       10) Taf_PhonePlmnList
       11) Taf_PhonePlmnResel
       12) Taf_PhonePlmnUserSel
       13) Taf_PhoneStart
       14) Taf_PhoneStartInfoInd
       15) Taf_PhoneStop

  History      :
  1. Date:2005-09-10
     Author: 刘飏
     Modification:Create

  1.日    期   : 2006年2月23日
    作    者   : liuyang id:48197
    修改内容   : ARM内存操作必须要从4字节开始的位置获取,Taf_PhonePlmnUserSel
                 函数中添加填充位.问题单号:A32D02119

  2.日    期   : 2006年3月24日
    作    者   : liuyang id:48197
    修改内容   : 问题单号：A32D02738

  3. x51137 A32D06630 2006/10/25
Date         Updated By      PR Number
2006-10-26   Li Jilin        A32D06630
  5.日    期   : 2007年02月11日
    作    者   : luojian id:60022475
    修改内容   : 问题单号:A32D08708
  6.Date        : 2007-10-16
    Author      : F62575
    Modification: 问题单A32D13062(文档校对发现问题)
  7.日    期   : 2007年10月9日
    作    者   : luojian id:107747
    修改内容   : 新生成函数，A32D13994
  8.日    期   : 2008年3月17日
    作    者   : s46746
    修改内容   : 问题单号:AT2D02570,NAS B005版本新增需求合入
  9.日    期   : 2008年06月17日
    作    者   : s46746
    修改内容   : 问题单号：AT2D03804,
                 新增 ^HS命令
************************************************************************/


/*****************************************************************************
   1 头文件包含
*****************************************************************************/
#include "vos.h"
#include "Taf_Tafm_Remote.h"
#include "PsCommonDef.h"
#include "NVIM_Interface.h"
#include "TafClientApi.h"
/* Modified by o00132663 for At Project, 2011-10-3, Begin */

/* #include "MnComm.h" */
#include "MnCommApi.h"
/* Modified by o00132663 for At Project, 2011-10-3, End */
#include "TafAppMma.h"


#ifdef  __cplusplus
 #if  __cplusplus
extern "C" {
 #endif
#endif

/*lint -e958*/

/*****************************************************************************
    协议栈打印打点方式下的.C文件宏定义
*****************************************************************************/

/*lint -e767 修改人:罗建 107747;检视人:孙少华65952;原因:Log打印*/
#define    THIS_FILE_ID PS_FILE_ID_TAF_MMA_API_C
/*lint +e767 修改人:罗建 107747;检视人:sunshaohua*/

/*****************************************************************************
   2 全局变量定义
*****************************************************************************/
#if (OSA_CPU_ACPU == VOS_OSA_CPU)
    extern VOS_UINT32 AT_GetDestPid(
        MN_CLIENT_ID_T                      usClientId,
        VOS_UINT32                          ulRcvPid
    );
#endif

/*****************************************************************************
   3 函数实现
*****************************************************************************/


/**********************************************************
 Function:       Taf_DefPhServiceMode
 Description:    业务模式设置
 Calls:          APP/AT
 Data Accessed:
 Data Updated:
 Input:      ClientId     - APP/AT标识
             OpId         - 操作标识
             ServiceMode  - 通信参数
 Output:
 Return:         TAF_SUCCESS - 成功
                 TAF_FAILURE - 失败
 Others:
    1.Date        : 2007-10-16
      Author      : F62575
      Modification: 问题单A32D13062(文档校对发现问题)
**********************************************************/
TAF_UINT32  Taf_DefPhClassType ( MN_CLIENT_ID_T       ClientId,
                                 MN_OPERATION_ID_T    OpId,
                                 TAF_PH_MS_CLASS_TYPE MsClass)
{
    return MN_FillAndSndAppReqMsg( ClientId,
                                   OpId,
                                   TAF_MSG_MMA_MS_CLASS,
                                   &MsClass,
                                   sizeof(TAF_PH_MS_CLASS_TYPE),
                                   I0_WUEPS_PID_MMA);
}

/*****************************************************************************
 函 数 名  : Taf_DefPhMode
 功能描述  :  设置终端功能级别（＋CFUN华三新增需求），
              通过设置回调函数返回
 输入参数  :  ClientId  - APP/AT标识
              OpId      - 操作标识
              PhModeSet - 手机操作模式
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2005年8月25日
    作    者   : liuyang
    修改内容   : V200R001版本新生成函数
  2.日    期   : 2014年2月14日
    作    者   : w00167002
    修改内容   : L-C互操作项目:开关机函数调整,AT的开关机查询明确
*****************************************************************************/
VOS_UINT32 Taf_DefPhMode(MN_CLIENT_ID_T   ClientId,
                         MN_OPERATION_ID_T   OpId,
                         TAF_PH_OP_MODE_STRU PhModeSet)
{
    /* Modified by w00167002 for L-C互操作项目, 2014-2-19, begin */
    return MN_FillAndSndAppReqMsg( ClientId,
                                   OpId,
                                   TAF_MSG_MMA_FUN_QUERY,
                                   &PhModeSet,
                                   sizeof(TAF_PH_OP_MODE_STRU),
                                   I0_WUEPS_PID_MMA);
    /* Modified by w00167002 for L-C互操作项目, 2014-2-19, end */
}

/*****************************************************************************
 函 数 名  : Taf_PhonePinHandle
 功能描述  : +CPIN USIM提供的PIN操做的API
             void Api_PIN_Handle(VOS_UINT8 ucClientId,VOS_UINT8 ucCmdType, VOS_UINT8
             ucPINType,\
             VOS_UINT8 *pucOldPIN, VOS_UINT8 *pucNewPIN)；
 输入参数  : ClientId - APP/AT标识
                 OpId - 操作标识
*pPinData - 手机PIN码操作数据结构
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2005年8月25日
    作    者   : liuyang
    修改内容   : V200R001版本生成函数
  2.日    期   : 2007年10月16日
    作    者   : F62575
    修改内容   : 问题单A32D13062(文档校对发现问题)
*****************************************************************************/
TAF_UINT32 Taf_PhonePinHandle ( MN_CLIENT_ID_T          ClientId,
                                MN_OPERATION_ID_T       OpId,
                                TAF_PH_PIN_DATA_STRU   *pPinData)
{
    return MN_FillAndSndAppReqMsg( ClientId,
                                   OpId,
                                   TAF_MSG_MMA_OP_PIN_REQ,
                                   pPinData,
                                   sizeof(TAF_PH_PIN_DATA_STRU),
                                   I0_WUEPS_PID_MMA);
}


/*****************************************************************************
 函 数 名  : Taf_MePersonalisationHandle
 功能描述  : 锁卡状态查询
 输入参数  : pMsg  消息块
 输出参数  : ClientId - APP/AT标识
             OpId - 操作标识
 返 回 值  : 成功，失败
 修改历史      :
  1.日    期   : 2007年9月28日
    作    者   : h44270
    修改内容   : 新生成函数
*****************************************************************************/
VOS_UINT32 Taf_MePersonalisationHandle(MN_CLIENT_ID_T          ClientId,
                                       MN_OPERATION_ID_T                 OpId,
                                       TAF_ME_PERSONALISATION_DATA_STRU *pMePersonalData)
{
    return MN_FillAndSndAppReqMsg( ClientId,
                                   OpId,
                                   TAF_MSG_MMA_ME_PERSONAL_REQ,
                                   pMePersonalData,
                                   sizeof(TAF_ME_PERSONALISATION_DATA_STRU),
                                   I0_WUEPS_PID_MMA);
}

/**********************************************************/
/*                      电话管理API                       */
/**********************************************************/

/**********************************************************
 Function:       Taf_PhonePlmnResel
 Description:    PLMN重选
 Calls:          APP/AT
 Data Accessed:  2005-09-16
 Data Updated:
 Input:          ClientId  - APP/AT标识
                 OpId      - 操作标识
                 ReselType - 重选类型
 Output:
 Return:         TAF_SUCCESS - 成功
                 TAF_FAILURE - 失败
 Others:
    1.Date        : 2007-10-16
      Author      : F62575
      Modification: 问题单A32D13062(文档校对发现问题)
**********************************************************/
TAF_UINT32 Taf_PhonePlmnResel ( MN_CLIENT_ID_T           ClientId,
                                MN_OPERATION_ID_T        OpId,
                                TAF_PLMN_RESEL_MODE_TYPE ReselType)
{
    return MN_FillAndSndAppReqMsg( ClientId,
                                   OpId,
                                   TAF_MSG_MMA_PLMN_RESEL,
                                   &ReselType,
                                   sizeof(TAF_PLMN_RESEL_MODE_TYPE),
                                   I0_WUEPS_PID_MMA);
}
/*****************************************************************************
 函 数 名  : TAF_PhonePlmnUserSel
 功能描述  : 用户指定搜网
 输入参数  : TAF_UINT8 ucIndex
 输出参数  : 无
 返 回 值  : TAF_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年10月16日
    作    者   : c00173809
    修改内容   : 新生成函数
  2.日    期   : 2012年1月2日
    作    者   : 黎客来/00130025
    修改内容   : 问题单DTS2011122605064，AT没有处理指定搜网超时消息
*******************************************************************************/
VOS_UINT32 TAF_PhonePlmnUserSel(
    MN_CLIENT_ID_T                      ClientId,
    MN_OPERATION_ID_T                   OpId,
    TAF_PLMN_USER_SEL_STRU             *pstPlmnUserSel
)
{
    VOS_UINT32                           ulRst;

    /* Modified by w00167002 for L-C互操作项目, 2014-2-14, begin */

    /* 发送消息 TAF_MSG_MMA_PLMN_USER_SEL 给 MMA 处理，
       该消息带TAF_PLMN_USER_SEL_STRU类型的参数结构 */
    ulRst = MN_FillAndSndAppReqMsg(ClientId,
                                   OpId,
                                   TAF_MSG_MMA_PLMN_USER_SEL,
                                   (VOS_UINT8*)pstPlmnUserSel, /*要求查询PS的注册状态。*/
                                   sizeof(TAF_PLMN_USER_SEL_STRU),
                                   I0_WUEPS_PID_MMA);


    /* Modified by l00130025 for DTS2011122605064, 2012-1-2, begin */

    if (TAF_SUCCESS == ulRst )
    {
        return VOS_TRUE;
    }
    /* Modified by l00130025 for DTS2011122605064, 2012-1-2, end */

    return VOS_FALSE;

    /* Modified by w00167002 for L-C互操作项目, 2014-2-14, end */
}

/*****************************************************************************
 函 数 名  : Taf_PhoneAttach
 功能描述  : +CGATT ATTACH，通过操作结果回调函数上报返回结果
 输入参数  : ClientId    - APP/AT标识
             OpId        - 操作标识
             AttachType  - 附着类型
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2005年8月25日
    作    者   : liuyang
    修改内容   :V200R001版本 新生成函数
  2.日    期   : 2007年10月16日
    作    者   : F62575
    修改内容   : 问题单A32D13062(文档校对发现问题)

*****************************************************************************/
TAF_UINT32 Taf_PhoneAttach ( MN_CLIENT_ID_T     ClientId,
                             MN_OPERATION_ID_T  OpId,
                             TAF_PH_ATTACH_TYPE AttachType)
{
    return MN_FillAndSndAppReqMsg( ClientId,
                                   OpId,
                                   TAF_MSG_MMA_ATTACH,
                                   &AttachType,
                                   sizeof(TAF_PH_ATTACH_TYPE),
                                   I0_WUEPS_PID_MMA);
}

/**********************************************************
 Function:       Taf_PhonePlmnList
 Description:    可用PLMN搜索
 Calls:          APP/AT
 Data Accessed:  2005-09-16
 Data Updated:
 Input:          ClientId - APP/AT标识
                 OpId     - 操作标识
                 ListType - 搜索类型
 Output:
 Return:         TAF_SUCCESS - 成功
                 TAF_FAILURE - 失败
 Others:
    1.Date        : 2007-10-16
    Author      : F62575
    Modification: 问题单A32D13062(文档校对发现问题)
**********************************************************/
TAF_UINT32 Taf_PhonePlmnList ( MN_CLIENT_ID_T           ClientId,
                               MN_OPERATION_ID_T        OpId,
                               TAF_AVAIL_PLMN_LIST_TYPE ListType)
{
    return MN_FillAndSndAppReqMsg( ClientId,
                                   OpId,
                                   TAF_MSG_MMA_PLMN_LIST,
                                   &ListType,
                                   sizeof(TAF_AVAIL_PLMN_LIST_TYPE),
                                   I0_WUEPS_PID_MMA);
}

/* Added by l00171473 for V7R1C50_At_Abort, 2012-9-19, begin */

/*****************************************************************************
 函 数 名  : Taf_AbortPlmnList
 功能描述  : AT向MMA发起打断列表搜的请求
 输入参数  : ClientId
             OpId
 输出参数  :
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年9月19日
    作    者   : l00171473
    修改内容   : 新增函数,AT向MMA发起打断列表搜的请求

*****************************************************************************/
VOS_UINT32 TAF_AbortPlmnListReq (
    MN_CLIENT_ID_T                      ClientId,
    MN_OPERATION_ID_T                   OpId
)
{
    return MN_FillAndSndAppReqMsg( ClientId,
                                   OpId,
                                   TAF_MSG_MMA_PLMN_LIST_ABORT_REQ,
                                   VOS_NULL_PTR,
                                   0,
                                   I0_WUEPS_PID_MMA );
}

/* Added by l00171473 for V7R1C50_At_Abort, 2012-9-19, end */


/* Deleted by w00167002 for L-C互操作项目, 2014-2-17, begin */

/* Deleted by w00167002 for L-C互操作项目, 2014-2-17, end */
/*****************************************************************************
 函 数 名  : Taf_PhoneStartInfoInd
 功能描述  : 启动接入层主动上报消息，该函数用于设定是否上报信号质量，小区ID等信息，
             返回系统信息反馈事件判定设置成功与否。
 输入参数  : stStartInfoInd -- 参看接口定义
 输出参数  : 无
 返 回 值  : VOS_UINT32 -- 0:设置成功
                           1:设置失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2005年12月13日
    作    者   : liuyang id:48197
    修改内容   : 新生成函数
  2.日    期   : 2007年10月16日
    作    者   : F62575
    修改内容   : 问题单A32D13062(文档校对发现问题)
*****************************************************************************/
TAF_UINT32 Taf_PhoneStartInfoInd ( MN_CLIENT_ID_T          ClientId,
                                   MN_OPERATION_ID_T       OpId,
                                   TAF_START_INFO_IND_STRU StartInfoInd)
{
    return MN_FillAndSndAppReqMsg( ClientId,
                                   OpId,
                                   TAF_MSG_MMA_INFO_REPORT,
                                   &StartInfoInd,
                                   sizeof(TAF_START_INFO_IND_STRU),
                                   I0_WUEPS_PID_MMA);
}

/*****************************************************************************
 函 数 名  : TAF_DefQuickStart
 功能描述  : 设置快速开机
 输入参数  : MN_CLIENT_ID_T ClientId
             MN_OPERATION_ID_T   OpId
             TAF_UINT32 ulSetValue
 输出参数  : 无
 返 回 值  :
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2007年10月9日
    作    者   : luojian id:107747
    修改内容   : 新生成函数
*****************************************************************************/
TAF_UINT32 TAF_DefQuickStart(MN_CLIENT_ID_T ClientId, MN_OPERATION_ID_T OpId, TAF_UINT32 ulSetValue)
{
    return MN_FillAndSndAppReqMsg( ClientId,
                                   OpId,
                                   TAF_MSG_MMA_SET_QUICKSTART,
                                   &ulSetValue,
                                   sizeof(TAF_UINT32),
                                   I0_WUEPS_PID_MMA);
}

/*****************************************************************************
 函 数 名  : Taf_DefPhAutoAttach
 功能描述  : 设置自动注册
 输入参数  : MN_CLIENT_ID_T ClientId
             MN_OPERATION_ID_T   OpId
             TAF_UINT32 ulSetValue
 输出参数  : 无
 返 回 值  :
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2008年02月19日
    作    者   : x00115505
    修改内容   : 新生成函数
*****************************************************************************/
TAF_UINT32 Taf_DefPhAutoAttach(MN_CLIENT_ID_T ClientId, MN_OPERATION_ID_T OpId, TAF_UINT32 ulSetValue)
{
    return MN_FillAndSndAppReqMsg( ClientId,
                                   OpId,
                                   TAF_MSG_MMA_SET_AUTOATTACH,
                                   &ulSetValue,
                                   sizeof(TAF_UINT32),
                                   I0_WUEPS_PID_MMA);
}

/*****************************************************************************
 函 数 名  : TAF_DefLoadDefault
 功能描述  : 恢复出厂配置
 输入参数  : MN_CLIENT_ID_T ClientId
             MN_OPERATION_ID_T   OpId
 输出参数  : 无
 返 回 值  :
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2007年10月22日
    作    者   : H59254
    修改内容   : creat function
*****************************************************************************/
TAF_UINT32 TAF_DefLoadDefault(MN_CLIENT_ID_T ClientId, MN_OPERATION_ID_T OpId)
{
    return MN_FillAndSndAppReqMsg( ClientId,
                                   OpId,
                                   TAF_MSG_MMA_SET_LOADDEFAULT,
                                   VOS_NULL_PTR,
                                   0,
                                   I0_WUEPS_PID_MMA);
}

/*****************************************************************************
 函 数 名  : Taf_UsimRestrictedAccessCommand
 功能描述  : 用于支持受限制的卡操作命令
 输入参数  :
 输出参数  :
 返 回 值  :
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2006年10月25日
    作    者   : h59254
    修改内容   : 新生成函数
*****************************************************************************/
TAF_UINT32 Taf_UsimRestrictedAccessCommand(MN_CLIENT_ID_T               ClientId,
                                           MN_OPERATION_ID_T            OpId,
                                           TAF_SIM_RESTRIC_ACCESS_STRU *pPara)
{
    return MN_FillAndSndAppReqMsg( ClientId,
                                   OpId,
                                   TAF_MSG_MMA_USIM_RESTRICTED_ACCESS,
                                   pPara,
                                   sizeof(TAF_SIM_RESTRIC_ACCESS_STRU),
                                   I0_WUEPS_PID_MMA);
}



/*****************************************************************************
 函 数 名  : Taf_IndPhFreq
 功能描述  : 指定频点搜网
 输入参数  : MN_CLIENT_ID_T ClientId
             MN_OPERATION_ID_T   OpId
             TAF_IND_FREQ_STRU Freq
 输出参数  : TAF_SUCCESS or TAF_FAILURE
 返 回 值  :
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2006年10月24日
    作    者   : x51137
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 Taf_IndPhFreq(MN_CLIENT_ID_T     ClientId,
                         MN_OPERATION_ID_T        OpId,
                         TAF_IND_FREQ_STRU        Freq)
{
    VOS_UINT16 temp_Freq;
    VOS_UINT16 temp_value;

    switch (Freq.RatType)
    {
    case TAF_SYS_SUBMODE_GSM:
        temp_value   = Freq.GsmBand;
        temp_value <<= 12;
        temp_Freq   = temp_value;
        temp_value  = Freq.IndFreq;
        temp_value &= 0x0fff;
        temp_Freq |= temp_value;

        /* write temp_GSM_Freq to NVIM */
        if (NV_OK != NV_Write( en_NV_Item_Gsm_Ind_Freq, &temp_Freq, sizeof(VOS_UINT16)))
        {
            return TAF_FAILURE;
        }

        break;

    case TAF_SYS_SUBMODE_WCDMA:

        /*write Freq to NVIM */
        temp_Freq = Freq.IndFreq;
        if (NV_OK != NV_Write( en_NV_Item_Wcdma_Ind_Freq, &temp_Freq, sizeof(VOS_UINT16)))
        {
            return TAF_FAILURE;
        }

        break;

    default:
        return TAF_FAILURE;
    }

    return TAF_SUCCESS;
}

/*****************************************************************************
 函 数 名  : Taf_FplmnHandle
 功能描述  : FPLMN通用操作处理
 输入参数  :  ClientId  - APP/AT标识
              OpId      - 操作标识
              PhModeSet - 手机操作模式
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
1.日    期   : 2007年10月9日
  作    者   : luojian id:107747
  修改内容   : 新生成函数，A32D13994
*****************************************************************************/
TAF_UINT32 Taf_FplmnHandle(MN_CLIENT_ID_T            ClientId,
                           MN_OPERATION_ID_T         OpId,
                           TAF_PH_FPLMN_OPERATE_STRU stFplmnOperate)
{
    return MN_FillAndSndAppReqMsg( ClientId,
                                   OpId,
                                   TAF_MSG_MMA_FPLMN_HANDLE,
                                   &stFplmnOperate,
                                   sizeof(TAF_PH_FPLMN_OPERATE_STRU),
                                   I0_WUEPS_PID_MMA);
}

/* Modified by z00161729 for V7R1 phase II , 2011-06-29, begin */
/*****************************************************************************
 函 数 名  : Taf_SysCfgHandle
 功能描述  : 处理syscfg设置
 输入参数  : TAF_CLIENT_ID        ClientId
             TAF_ID OpId
             TAF_PH_SYS_CFG_STRU    stSysCfg
 输出参数  : 无
 返 回 值  : TAF_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2008年4月21日
    作    者   : luojian id:107747
    修改内容   : 新生成函数
  2.日    期   : 2008年11月10日
    作    者   : l00130025
    修改内容   : 问题单AT2D06577,将对不支持漫游的设置放到MMC完成
  3.日    期   : 2011年07月05日
    作    者   : z00161729
    修改内容   : V7R1 phase II for syscfgex
  4.日    期   : 2014年2月13日
    作    者   : w00167002
    修改内容   : L-C互操作项目:调整SYSCFG的设置查询接口
*****************************************************************************/

/* Modified by w00167002 for L-C互操作项目, 2014-2-13, begin */
VOS_UINT32 Taf_SysCfgHandle(
    MN_CLIENT_ID_T                      ClientId,
    MN_OPERATION_ID_T                   OpId,
    TAF_MMA_SYS_CFG_PARA_STRU           stSysCfg
)
{

    return MN_FillAndSndAppReqMsg(ClientId,
                                  OpId,
                                  TAF_MSG_MMA_SYSCFG_QUERY_REQ,
                                  &stSysCfg,
                                  sizeof(stSysCfg),
                                  I0_WUEPS_PID_MMA);
}
/* Modified by w00167002 for L-C互操作项目, 2014-2-13, end */

/* Modified by z00161729 for V7R1 phase II , 2011-06-29, end */

/* Added by w00242748 for NETSCAN, 2013-10-15, begin */
/*****************************************************************************
 函 数 名  : Taf_NetScanHandle
 功能描述  : 处理netscan设置
 输入参数  : TAF_CLIENT_ID        ClientId
             TAF_ID OpId
             TAF_MMA_NET_SCAN_REQ_STRU    pstNetScan
 输出参数  : 无
 返 回 值  : TAF_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年10月15日
    作    者   : w00242748
    修改内容   : 新生成函数
  2.日    期   : 2013年10月15日
    作    者   : w00167002
    修改内容   : 飞检编程规范修改
*****************************************************************************/

/* Modified by w00167002 for NETSCAN, 2013-11-11, begin */
VOS_UINT32 Taf_NetScanHandle(
    MN_CLIENT_ID_T                      usClientId,
    MN_OPERATION_ID_T                   ucOpId,
    TAF_MMA_NET_SCAN_REQ_STRU          *pstNetScan
)
{
    return MN_FillAndSndAppReqMsg(usClientId,
                                  ucOpId,
                                  TAF_MSG_MMA_NET_SCAN_REQ,
                                  pstNetScan,
                                  sizeof(TAF_MMA_NET_SCAN_REQ_STRU),
                                  I0_WUEPS_PID_MMA);
}
/* Modified by w00167002 for NETSCAN, 2013-11-11, end */


/* Modified by c00318887 for file refresh需要触发背景搜, 2015-3-9, begin */
/*****************************************************************************
 函 数 名  : TAF_SetRefreshStub
 功能描述  : 模拟pih给指定模块发送refresh消息
 输入参数  : TAF_CLIENT_ID        ClientId
             TAF_ID OpId
             TAF_MMA_REFRESH_STUB_SET_REQ_STRU  *pstRefreshStub
 输出参数  : 无
 返 回 值  : TAF_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年3月31日
    作    者   : z00161729
    修改内容   : AT&T 支持EONS特性修改
*****************************************************************************/
VOS_UINT32 TAF_SetRefreshStub(
    MN_CLIENT_ID_T                      usClientId,
    MN_OPERATION_ID_T                   ucOpId,
    TAF_MMA_REFRESH_STUB_SET_REQ_STRU  *pstRefreshStub
)
{
    return MN_FillAndSndAppReqMsg(usClientId,
                                  ucOpId,
                                  TAF_MSG_MMA_REFRESH_STUB_SET_REQ,
                                  pstRefreshStub,
                                  sizeof(TAF_MMA_REFRESH_STUB_SET_REQ_STRU),
                                  I0_WUEPS_PID_MMA);
}

/* Modified by c00318887 for file refresh需要触发背景搜, 2015-3-9, end */

/*****************************************************************************
 函 数 名  : Taf_AbortNetScan
 功能描述  : AT向MMA发起打断NetScan的请求
 输入参数  : ClientId
             OpId
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年10月18日
    作    者   : w00242748
    修改内容   : 新增函数,AT向MMA发起打断NETSCAN的请求
  2.日    期   : 2013年10月15日
    作    者   : w00167002
    修改内容   : 飞检编程规范修改
*****************************************************************************/

/* Modified by w00167002 for NETSCAN, 2013-11-11, begin */
VOS_UINT32 Taf_AbortNetScan (
    MN_CLIENT_ID_T                      usClientId,
    MN_OPERATION_ID_T                   ucOpId
)
{
    return MN_FillAndSndAppReqMsg( usClientId,
                                   ucOpId,
                                   TAF_MSG_MMA_ABORT_NET_SCAN_REQ,
                                   VOS_NULL_PTR,
                                   0,
                                   I0_WUEPS_PID_MMA );
}
/* Modified by w00167002 for NETSCAN, 2013-11-11, end */

/* Added by w00242748 for NETSCAN, 2013-10-15, end */

/*****************************************************************************
 函 数 名  : TAF_QryUsimInfo
 功能描述  :
 输入参数  :
 输出参数  : Icctype
 返 回 值  : TAF_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2009年9月19日
    作    者   : z40661
    修改内容   : 新增函数,查询USIM卡的相关信息

*****************************************************************************/
TAF_UINT32 TAF_QryUsimInfo(
    MN_CLIENT_ID_T                      ClientId,
    MN_OPERATION_ID_T                   OpId,
    TAF_PH_QRY_USIM_INFO_STRU           *pstInfo
)
{
    if ( (TAF_PH_ICC_UNKNOW == pstInfo->Icctype)
      || (pstInfo->Icctype > TAF_PH_ICC_USIM))
    {
        return TAF_FAILURE;
    }

    if (pstInfo->enEfId > TAF_PH_OPL_FILE)
    {
        return TAF_FAILURE;
    }
    return MN_FillAndSndAppReqMsg( ClientId,
                             OpId,
                             TAF_MSG_MMA_USIM_INFO,
                             pstInfo,
                             sizeof(TAF_PH_QRY_USIM_INFO_STRU),
                             I0_WUEPS_PID_MMA);

}

/*****************************************************************************
 函 数 名  : TAF_QryCpnnInfo
 功能描述  :
 输入参数  :
 输出参数  :
 返 回 值  : TAF_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2009年9月19日
    作    者   : z40661
    修改内容   : 新增函数,查询USIM卡的相关信息

*****************************************************************************/
TAF_UINT32 TAF_QryCpnnInfo(
    MN_CLIENT_ID_T                      ClientId,
    MN_OPERATION_ID_T                   OpId,
    TAF_PH_ICC_TYPE                     IccType
)
{
    if ( (TAF_PH_ICC_UNKNOW == IccType)
      || (IccType > TAF_PH_ICC_USIM))
    {
        return TAF_FAILURE;
    }

    return MN_FillAndSndAppReqMsg( ClientId,
                             OpId,
                             TAF_MSG_MMA_CPNN_INFO,
                             &IccType,
                             sizeof(IccType),
                             I0_WUEPS_PID_MMA);
}

/* Added by s00190137 for ACC&SPLMN, 2013-10-15 Begin */
/*****************************************************************************
 函 数 名  : Taf_SetEOPlmnHandle
 功能描述  : 处理EOPLMN设置
 输入参数  : TAF_CLIENT_ID        ClientId
             TAF_ID OpId
             TAF_MMA_SET_EOPLMN_LIST_STRU        *pstEOPlmnCfg
 输出参数  : 无
 返 回 值  : TAF_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年10月15日
    作    者   : s00190137
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 Taf_SetEOPlmnHandle(
    MN_CLIENT_ID_T                      ClientId,
    MN_OPERATION_ID_T                   OpId,
    TAF_MMA_SET_EOPLMN_LIST_STRU       *pstEOPlmnCfg
)
{

    return MN_FillAndSndAppReqMsg(ClientId,
                                  OpId,
                                  TAF_MSG_MMA_EOPLMN_SET_REQ,
                                  pstEOPlmnCfg,
                                  sizeof(TAF_MMA_SET_EOPLMN_LIST_STRU),
                                  I0_WUEPS_PID_MMA);
}
/* Added by s00190137 for ACC&SPLMN, 2013-10-15 End */

/* Added by s00246516 for L-C互操作项目, 2014-01-29, Begin */
/*****************************************************************************
 函 数 名  : TAF_MMA_PhoneModeSetReq
 功能描述  : 手机模式设置接口
 输入参数  : ulModuleId       ---  外部模块PID
             usCliendId       ---  外部模块CliendId
             ucOpId           ---  外部模块OpId
             pstPhoneModePara ---  Phone mode设置参数
 输出参数  : 无
 返 回 值  : VOS_TRUE:成功,VOS_FALSE:失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年1月27日
    作    者   : s00246516
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 TAF_MMA_PhoneModeSetReq(
    VOS_UINT32                          ulModuleId,
    VOS_UINT16                          usClientId,
    VOS_UINT8                           ucOpId,
    TAF_MMA_PHONE_MODE_PARA_STRU       *pstPhoneModePara
)
{
    TAF_MMA_PHONE_MODE_SET_REQ_STRU    *pstMsg = VOS_NULL_PTR;
    VOS_UINT32                          ulReceiverPid;
    VOS_UINT32                          ulSenderPid;

#if (OSA_CPU_ACPU == VOS_OSA_CPU)
    ulReceiverPid = AT_GetDestPid(usClientId, WUEPS_PID_MMA);
    ulSenderPid   = AT_GetDestPid(usClientId, WUEPS_PID_TAF);
#else
    ulReceiverPid = WUEPS_PID_MMA;
    ulSenderPid   = WUEPS_PID_TAF;
#endif

    /* 参数检查 */
    if (VOS_NULL_PTR == pstPhoneModePara)
    {
        return VOS_FALSE;
    }

    /* 申请消息包TAF_MMA_PHONE_MODE_SET_REQ_STRU */
    pstMsg = (TAF_MMA_PHONE_MODE_SET_REQ_STRU*)PS_ALLOC_MSG_WITH_HEADER_LEN(
                                       ulSenderPid,
                                       sizeof(TAF_MMA_PHONE_MODE_SET_REQ_STRU));

    /* 内存申请失败，返回 */
    if (VOS_NULL_PTR == pstMsg)
    {
        return VOS_FALSE;
    }

    PS_MEM_SET( (VOS_INT8 *)pstMsg + VOS_MSG_HEAD_LENGTH, 0X00,
            (VOS_SIZE_T)(sizeof(TAF_MMA_PHONE_MODE_SET_REQ_STRU) - VOS_MSG_HEAD_LENGTH) );

    /* 发送PID统一填写为WUEPS_PID_TAF */
    pstMsg->ulSenderPid                 = ulSenderPid;
    pstMsg->ulReceiverPid               = ulReceiverPid;
    pstMsg->ulMsgName                   = ID_TAF_MMA_PHONE_MODE_SET_REQ;
    pstMsg->stCtrl.ulModuleId           = ulModuleId;
    pstMsg->stCtrl.usClientId           = usClientId;
    pstMsg->stCtrl.ucOpId               = ucOpId;
    PS_MEM_CPY(&(pstMsg->stPhoneModePara), pstPhoneModePara, sizeof(TAF_MMA_PHONE_MODE_PARA_STRU));

    /* 发送消息 */
    if (VOS_OK != PS_SEND_MSG(ulSenderPid, pstMsg))
    {
        return VOS_FALSE;
    }

    return VOS_TRUE;
}

/*****************************************************************************
 函 数 名  : TAF_MMA_SetSysCfgReq
 功能描述  : 手机系统配置接口
 输入参数  : ulModuleId      ---  外部模块PID
            : usCliendId     ---  外部模块CliendId
            ucOpId           ---  外部模块OpId
            pstSysCfgPara    ---  Sys Cfg设置参数
 输出参数  : 无
 返 回 值  : VOS_TRUE:成功,VOS_FALSE:失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年1月27日
    作    者   : s00246516
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 TAF_MMA_SetSysCfgReq(
    VOS_UINT32                          ulModuleId,
    VOS_UINT16                          usClientId,
    VOS_UINT8                           ucOpId,
    TAF_MMA_SYS_CFG_PARA_STRU          *pstSysCfgPara
)
{
    TAF_MMA_SYS_CFG_REQ_STRU           *pstMsg  = VOS_NULL_PTR;
    VOS_UINT32                          ulReceiverPid;
    VOS_UINT32                          ulSenderPid;

#if (OSA_CPU_ACPU == VOS_OSA_CPU)
    ulReceiverPid = AT_GetDestPid(usClientId, WUEPS_PID_MMA);
    ulSenderPid   = AT_GetDestPid(usClientId, WUEPS_PID_TAF);
#else
    ulReceiverPid = WUEPS_PID_MMA;
    ulSenderPid   = WUEPS_PID_TAF;
#endif

    /* 参数检查 */
    if (VOS_NULL_PTR == pstSysCfgPara)
    {
        return VOS_FALSE;
    }

    /* 申请消息包TAF_MMA_SYS_CFG_REQ_STRU */
    pstMsg = (TAF_MMA_SYS_CFG_REQ_STRU*)PS_ALLOC_MSG_WITH_HEADER_LEN(
                                             ulSenderPid,
                                             sizeof(TAF_MMA_SYS_CFG_REQ_STRU));

    /* 内存申请失败，返回 */
    if (VOS_NULL_PTR == pstMsg)
    {
        return VOS_FALSE;
    }

    PS_MEM_SET( (VOS_INT8 *)pstMsg + VOS_MSG_HEAD_LENGTH, 0X00,
            (VOS_SIZE_T)(sizeof(TAF_MMA_SYS_CFG_REQ_STRU) - VOS_MSG_HEAD_LENGTH) );

    /* 根据输入参数填充TAF_MMA_SYS_CFG_REQ_STRU */
    /* 发送PID统一填写为WUEPS_PID_TAF */
    pstMsg->ulSenderPid       = ulSenderPid;
    pstMsg->ulReceiverPid     = ulReceiverPid;
    pstMsg->ulMsgName         = ID_TAF_MMA_SYS_CFG_SET_REQ;
    pstMsg->stCtrl.ulModuleId = ulModuleId;
    pstMsg->stCtrl.usClientId = usClientId;
    pstMsg->stCtrl.ucOpId     = ucOpId;

    PS_MEM_CPY(&(pstMsg->stSysCfgPara), pstSysCfgPara, sizeof(TAF_MMA_SYS_CFG_PARA_STRU));

    /* 发送消息 */
    if (VOS_OK != PS_SEND_MSG(ulSenderPid, pstMsg))
    {
        return VOS_FALSE;
    }

    return VOS_TRUE;
}

/*****************************************************************************
 函 数 名  : TAF_MMA_AcqBestNetworkReq
 功能描述  : 获取网络接口
 输入参数  : ulModuleId      ---  外部模块PID
            : usCliendId     ---  外部模块CliendId
            ucOpId           ---  外部模块OpId
            pstAcqPara       ---  Acq设置参数
 输出参数  : 无
 返 回 值  : VOS_TRUE:成功,VOS_FALSE:失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年1月27日
    作    者   : s00246516
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 TAF_MMA_AcqBestNetworkReq(
    VOS_UINT32                          ulModuleId,
    VOS_UINT16                          usClientId,
    VOS_UINT8                           ucOpId,
    TAF_MMA_ACQ_PARA_STRU              *pstAcqPara
)
{
    TAF_MMA_ACQ_REQ_STRU               *pstMsg  = VOS_NULL_PTR;
    VOS_UINT32                          ulReceiverPid;
    VOS_UINT32                          ulSenderPid;

#if (OSA_CPU_ACPU == VOS_OSA_CPU)
    ulReceiverPid = AT_GetDestPid(usClientId, WUEPS_PID_MMA);
    ulSenderPid   = AT_GetDestPid(usClientId, WUEPS_PID_TAF);
#else
    ulReceiverPid = WUEPS_PID_MMA;
    ulSenderPid   = WUEPS_PID_TAF;
#endif

    /* 参数检查 */
    if (VOS_NULL_PTR == pstAcqPara)
    {
        return VOS_FALSE;
    }

    /* 申请消息包TAF_MMA_ACQ_REQ_STRU */
    pstMsg = (TAF_MMA_ACQ_REQ_STRU*)PS_ALLOC_MSG_WITH_HEADER_LEN(
                                             ulSenderPid,
                                             sizeof(TAF_MMA_ACQ_REQ_STRU));

    /* 内存申请失败，返回 */
    if (VOS_NULL_PTR == pstMsg)
    {
        return VOS_FALSE;
    }

    PS_MEM_SET( (VOS_INT8 *)pstMsg + VOS_MSG_HEAD_LENGTH, 0X00,
            (VOS_SIZE_T)(sizeof(TAF_MMA_ACQ_REQ_STRU) - VOS_MSG_HEAD_LENGTH) );

    /* 发送PID统一填写为WUEPS_PID_TAF */
    pstMsg->ulSenderPid       = ulSenderPid;
    pstMsg->ulReceiverPid     = ulReceiverPid;
    pstMsg->ulMsgName         = ID_TAF_MMA_ACQ_BEST_NETWORK_REQ;
    pstMsg->stCtrl.ulModuleId = ulModuleId;
    pstMsg->stCtrl.usClientId = usClientId;
    pstMsg->stCtrl.ucOpId     = ucOpId;
    PS_MEM_CPY(&(pstMsg->stAcqPara), pstAcqPara, sizeof(TAF_MMA_ACQ_PARA_STRU));

    /* 发送消息 */
    if (VOS_OK != PS_SEND_MSG(ulSenderPid, pstMsg))
    {
        return VOS_FALSE;
    }

    return VOS_TRUE;
}

/*****************************************************************************
 函 数 名  : TAF_MMA_RegReq
 功能描述  : 注册网络接口
 输入参数  : ulModuleId      ---  外部模块PID
            : usCliendId     ---  外部模块CliendId
            ucOpId           ---  外部模块OpId
            pstRegPara       ---  REG设置参数
 输出参数  : 无
 返 回 值  : VOS_TRUE:成功,VOS_FALSE:失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年1月27日
    作    者   : s00246516
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 TAF_MMA_RegReq(
    VOS_UINT32                          ulModuleId,
    VOS_UINT16                          usClientId,
    VOS_UINT8                           ucOpId,
    TAF_MMA_REG_PARA_STRU              *pstRegPara
)
{
    TAF_MMA_REG_REQ_STRU               *pstMsg  = VOS_NULL_PTR;
    VOS_UINT32                          ulReceiverPid;
    VOS_UINT32                          ulSenderPid;

#if (OSA_CPU_ACPU == VOS_OSA_CPU)
    ulReceiverPid = AT_GetDestPid(usClientId, WUEPS_PID_MMA);
    ulSenderPid   = AT_GetDestPid(usClientId, WUEPS_PID_TAF);
#else
    ulReceiverPid = WUEPS_PID_MMA;
    ulSenderPid   = WUEPS_PID_TAF;
#endif

    /* 参数检查 */
    if (VOS_NULL_PTR == pstRegPara)
    {
        return VOS_FALSE;
    }

    /* 申请消息包TAF_MMA_REG_REQ_STRU */
    pstMsg = (TAF_MMA_REG_REQ_STRU*)PS_ALLOC_MSG_WITH_HEADER_LEN(
                                             ulSenderPid,
                                             sizeof(TAF_MMA_REG_REQ_STRU));

    /* 内存申请失败，返回 */
    if (VOS_NULL_PTR == pstMsg)
    {
        return VOS_FALSE;
    }

    PS_MEM_SET( (VOS_INT8 *)pstMsg + VOS_MSG_HEAD_LENGTH, 0X00,
            (VOS_SIZE_T)(sizeof(TAF_MMA_REG_REQ_STRU) - VOS_MSG_HEAD_LENGTH) );

    /* 根据输入参数填充TAF_MMA_REG_REQ_STRU */
    /* 发送PID统一填写为WUEPS_PID_TAF */
    pstMsg->ulSenderPid       = ulSenderPid;
    pstMsg->ulReceiverPid     = ulReceiverPid;
    pstMsg->ulMsgName         = ID_TAF_MMA_REG_REQ;
    pstMsg->stCtrl.ulModuleId = ulModuleId;
    pstMsg->stCtrl.usClientId = usClientId;
    pstMsg->stCtrl.ucOpId     = ucOpId;
    PS_MEM_CPY(&(pstMsg->stRegPara), pstRegPara, sizeof(TAF_MMA_REG_PARA_STRU));

    /* 发送消息 */
    if (VOS_OK != PS_SEND_MSG(ulSenderPid, pstMsg))
    {
        return VOS_FALSE;
    }

    return VOS_TRUE;
}

/*****************************************************************************
 函 数 名  : TAF_MMA_PowerSaveReq
 功能描述  : Power Save接口
 输入参数  : ulModuleId      ---  外部模块PID
            : usCliendId     ---  外部模块CliendId
            ucOpId           ---  外部模块OpId
            pstPowerSavePara ---  Power Save设置参数
 输出参数  : 无
 返 回 值  : VOS_TRUE:成功,VOS_FALSE:失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年1月27日
    作    者   : s00246516
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 TAF_MMA_PowerSaveReq(
    VOS_UINT32                          ulModuleId,
    VOS_UINT16                          usClientId,
    VOS_UINT8                           ucOpId,
    TAF_MMA_POWER_SAVE_PARA_STRU       *pstPowerSavePara
)
{

    TAF_MMA_POWER_SAVE_REQ_STRU        *pstMsg  = VOS_NULL_PTR;
    VOS_UINT32                          ulReceiverPid;
    VOS_UINT32                          ulSenderPid;

#if (OSA_CPU_ACPU == VOS_OSA_CPU)
    ulReceiverPid = AT_GetDestPid(usClientId, WUEPS_PID_MMA);
    ulSenderPid   = AT_GetDestPid(usClientId, WUEPS_PID_TAF);
#else
    ulReceiverPid = WUEPS_PID_MMA;
    ulSenderPid   = WUEPS_PID_TAF;
#endif

    /* 参数检查 */
    if (VOS_NULL_PTR == pstPowerSavePara)
    {
        return VOS_FALSE;
    }

    /* 申请消息包TAF_MMA_POWER_SAVE_REQ_STRU */
    pstMsg = (TAF_MMA_POWER_SAVE_REQ_STRU*)PS_ALLOC_MSG_WITH_HEADER_LEN(
                                           ulSenderPid,
                                           sizeof(TAF_MMA_POWER_SAVE_REQ_STRU));

    /* 内存申请失败，返回 */
    if (VOS_NULL_PTR == pstMsg)
    {
        return VOS_FALSE;
    }

    PS_MEM_SET( (VOS_INT8 *)pstMsg + VOS_MSG_HEAD_LENGTH, 0X00,
            (VOS_SIZE_T)(sizeof(TAF_MMA_POWER_SAVE_REQ_STRU) - VOS_MSG_HEAD_LENGTH) );

    /* 发送PID统一填写为WUEPS_PID_TAF */
    pstMsg->ulSenderPid       = ulSenderPid;
    pstMsg->ulReceiverPid     = ulReceiverPid;
    pstMsg->ulMsgName         = ID_TAF_MMA_POWER_SAVE_REQ;
    pstMsg->stCtrl.ulModuleId = ulModuleId;
    pstMsg->stCtrl.usClientId = usClientId;
    pstMsg->stCtrl.ucOpId     = ucOpId;
    PS_MEM_CPY(&(pstMsg->stPowerSavePara), pstPowerSavePara, sizeof(TAF_MMA_POWER_SAVE_PARA_STRU));

    /* 发送消息 */
    if (VOS_OK != PS_SEND_MSG(ulSenderPid, pstMsg))
    {
        return VOS_FALSE;
    }

    return VOS_TRUE;
}

/*****************************************************************************
 函 数 名  : TAF_MMA_DetachReq
 功能描述  : Detach接口
 输入参数  : ulModuleId      ---  外部模块PID
            : usCliendId     ---  外部模块CliendId
            ucOpId           ---  外部模块OpId
            pstDetachPara    ---  Detach设置参数
 输出参数  : 无
 返 回 值  : VOS_TRUE:成功,VOS_FALSE:失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年1月27日
    作    者   : s00246516
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 TAF_MMA_DetachReq(
    VOS_UINT32                          ulModuleId,
    VOS_UINT16                          usClientId,
    VOS_UINT8                           ucOpId,
    TAF_MMA_DETACH_PARA_STRU           *pstDetachPara
)
{
    TAF_MMA_DETACH_REQ_STRU            *pstMsg  = VOS_NULL_PTR;
    VOS_UINT32                          ulReceiverPid;
    VOS_UINT32                          ulSenderPid;

#if (OSA_CPU_ACPU == VOS_OSA_CPU)
    ulReceiverPid = AT_GetDestPid(usClientId, WUEPS_PID_MMA);
    ulSenderPid   = AT_GetDestPid(usClientId, WUEPS_PID_TAF);
#else
    ulReceiverPid = WUEPS_PID_MMA;
    ulSenderPid   = WUEPS_PID_TAF;
#endif

    /* 参数检查 */
    if (VOS_NULL_PTR == pstDetachPara)
    {
        return VOS_FALSE;
    }

    /* 申请消息包TAF_MMA_DETACH_REQ_STRU */
    pstMsg = (TAF_MMA_DETACH_REQ_STRU*)PS_ALLOC_MSG_WITH_HEADER_LEN(
                                           ulSenderPid,
                                           sizeof(TAF_MMA_DETACH_REQ_STRU));

    /* 内存申请失败，返回 */
    if (VOS_NULL_PTR == pstMsg)
    {
        return VOS_FALSE;
    }

    PS_MEM_SET( (VOS_INT8 *)pstMsg + VOS_MSG_HEAD_LENGTH, 0X00,
            (VOS_SIZE_T)(sizeof(TAF_MMA_DETACH_REQ_STRU) - VOS_MSG_HEAD_LENGTH) );

    /* 根据输入参数填充TAF_MMA_DETACH_REQ_STRU */
    /* 发送PID统一填写为WUEPS_PID_TAF */
    pstMsg->ulSenderPid       = ulSenderPid;
    pstMsg->ulReceiverPid     = ulReceiverPid;
    pstMsg->ulMsgName         = ID_TAF_MMA_DETACH_REQ;
    pstMsg->stCtrl.ulModuleId = ulModuleId;
    pstMsg->stCtrl.usClientId = usClientId;
    pstMsg->stCtrl.ucOpId     = ucOpId;
    PS_MEM_CPY(&(pstMsg->stDetachPara), pstDetachPara, sizeof(TAF_MMA_DETACH_PARA_STRU));

    /* 发送消息 */
    if (VOS_OK != PS_SEND_MSG(ulSenderPid, pstMsg))
    {
        return VOS_FALSE;
    }

    return VOS_TRUE;
}
/* Added by s00246516 for L-C互操作项目, 2014-01-29, End */

#if(FEATURE_ON == FEATURE_DSDS)
/* Modified by w00242748 for DSDS III, 2014-6-17, begin */
/*****************************************************************************
 函 数 名  : TAF_MMA_SrvAcqReq
 功能描述  : SPM模块给MMA模块发送搜网指示
 输入参数  : enSrvType:服务类型
 输出参数  : 无
 返 回 值  : VOS_TRUE:成功,VOS_FALSE:失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年6月17日
    作    者   : w00242748
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 TAF_MMA_SrvAcqReq(
    TAF_MMA_SRV_TYPE_ENUM_UINT8         enSrvType
)
{
    TAF_MMA_SRV_ACQ_REQ_STRU           *pstMsg  = VOS_NULL_PTR;

    /* 申请消息包TAF_MMA_SRV_ACQ_REQ_STRU */
    pstMsg = (TAF_MMA_SRV_ACQ_REQ_STRU*)PS_ALLOC_MSG_WITH_HEADER_LEN(
                                             WUEPS_PID_TAF,
                                             sizeof(TAF_MMA_SRV_ACQ_REQ_STRU));

    /* 内存申请失败，返回 */
    if (VOS_NULL_PTR == pstMsg)
    {
        return VOS_FALSE;
    }

    PS_MEM_SET( (VOS_INT8 *)pstMsg + VOS_MSG_HEAD_LENGTH, 0X00,
            (VOS_SIZE_T)(sizeof(TAF_MMA_SRV_ACQ_REQ_STRU) - VOS_MSG_HEAD_LENGTH) );

    /* 发送PID统一填写为WUEPS_PID_TAF */
    pstMsg->ulSenderPid       = WUEPS_PID_TAF;
    pstMsg->ulReceiverPid     = WUEPS_PID_MMA;
    pstMsg->ulMsgName         = ID_TAF_MMA_SRV_ACQ_REQ;
    pstMsg->enSrvType         = enSrvType;


    /* 发送消息 */
    if (VOS_OK != PS_SEND_MSG(WUEPS_PID_TAF, pstMsg))
    {
        return VOS_FALSE;
    }

    return VOS_TRUE;
}


/* Modified by w00242748 for DSDS III, 2014-6-17, end */
#endif

/* Added by zwx247453 for VOLTE SWITCH, 2015-02-02, Begin */
#if (FEATURE_ON == FEATURE_IMS)
/*****************************************************************************
 函 数 名  : TAF_MMA_SetImsSwitchReq
 功能描述  : IMSSwitch接口
 输入参数  : ulModuleId     ---  外部模块PID
             usCliendId     ---  外部模块CliendId
             ucOpId         ---  外部模块OpId
             ucImsSwitch    ---  IMS 状态设置参数
 输出参数  : 无
 返 回 值  : VOS_TRUE:成功,VOS_FALSE:失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年02月02日
    作    者   : zwx247453
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 TAF_MMA_SetImsSwitchReq(
    VOS_UINT32                          ulModuleId,
    VOS_UINT16                          usClientId,
    VOS_UINT8                           ucOpId,
    TAF_MMA_IMS_SWITCH_SET_ENUM_UINT8   enImsSwitch
)
{
    TAF_MMA_IMS_SWITCH_SET_REQ_STRU    *pstMsg  = VOS_NULL_PTR;
    VOS_UINT32                          ulReceiverPid;
    VOS_UINT32                          ulSenderPid;

#if (OSA_CPU_ACPU == VOS_OSA_CPU)
    ulReceiverPid = AT_GetDestPid(usClientId, WUEPS_PID_MMA);
    ulSenderPid   = AT_GetDestPid(usClientId, WUEPS_PID_TAF);
#else
    ulReceiverPid = WUEPS_PID_MMA;
    ulSenderPid   = WUEPS_PID_TAF;
#endif

    /* 参数检查 */
    if ((TAF_MMA_IMS_SWITCH_SET_POWER_OFF != enImsSwitch)
     && (TAF_MMA_IMS_SWITCH_SET_POWER_ON  != enImsSwitch))
    {
        return VOS_FALSE;
    }

    /* 申请消息包TAF_MMA_IMS_SWITCH_SET_REQ_STRU */
    pstMsg = (TAF_MMA_IMS_SWITCH_SET_REQ_STRU *)PS_ALLOC_MSG_WITH_HEADER_LEN(
                                           ulSenderPid,
                                           sizeof(TAF_MMA_IMS_SWITCH_SET_REQ_STRU));

    /* 内存申请失败，返回 */
    if (VOS_NULL_PTR == pstMsg)
    {
        return VOS_FALSE;
    }

    PS_MEM_SET( (VOS_INT8 *)pstMsg + VOS_MSG_HEAD_LENGTH, 0X00,
            (VOS_SIZE_T)(sizeof(TAF_MMA_IMS_SWITCH_SET_REQ_STRU) - VOS_MSG_HEAD_LENGTH) );

    /* 根据输入参数填充TAF_MMA_IMS_SWITCH_SET_REQ_STRU */
    pstMsg->ulSenderPid       = ulSenderPid;
    pstMsg->ulReceiverPid     = ulReceiverPid;
    pstMsg->ulMsgName         = ID_TAF_MMA_IMS_SWITCH_SET_REQ;
    pstMsg->stCtrl.ulModuleId = ulModuleId;
    pstMsg->stCtrl.usClientId = usClientId;
    pstMsg->stCtrl.ucOpId     = ucOpId;
    pstMsg->enImsSwitch       = enImsSwitch;

    /* 发送消息 */
    if (VOS_OK != PS_SEND_MSG(ulSenderPid, pstMsg))
    {
        return VOS_FALSE;
    }

    return VOS_TRUE;
}

/*****************************************************************************
 函 数 名  : TAF_MMA_QryImsSwitchReq
 功能描述  : IMSSwitch接口
 输入参数  : ulModuleId     ---  外部模块PID
             usCliendId     ---  外部模块CliendId
             ucOpId         ---  外部模块OpId
 输出参数  : 无
 返 回 值  : VOS_TRUE:成功,VOS_FALSE:失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年02月02日
    作    者   : zwx247453
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 TAF_MMA_QryImsSwitchReq(
    VOS_UINT32                          ulModuleId,
    VOS_UINT16                          usClientId,
    VOS_UINT8                           ucOpId
)
{
    TAF_MMA_IMS_SWITCH_QRY_REQ_STRU    *pstMsg  = VOS_NULL_PTR;
    VOS_UINT32                          ulReceiverPid;
    VOS_UINT32                          ulSenderPid;

#if (OSA_CPU_ACPU == VOS_OSA_CPU)
    ulReceiverPid = AT_GetDestPid(usClientId, WUEPS_PID_MMA);
    ulSenderPid   = AT_GetDestPid(usClientId, WUEPS_PID_TAF);
#else
    ulReceiverPid = WUEPS_PID_MMA;
    ulSenderPid   = WUEPS_PID_TAF;
#endif


    /* 申请消息包TAF_MMA_IMS_SWITCH_QRY_REQ_STRU */
    pstMsg = (TAF_MMA_IMS_SWITCH_QRY_REQ_STRU *)PS_ALLOC_MSG_WITH_HEADER_LEN(
                                           ulSenderPid,
                                           sizeof(TAF_MMA_IMS_SWITCH_QRY_REQ_STRU));

    /* 内存申请失败，返回 */
    if (VOS_NULL_PTR == pstMsg)
    {
        return VOS_FALSE;
    }

    PS_MEM_SET( (VOS_INT8 *)pstMsg + VOS_MSG_HEAD_LENGTH, 0X00,
            (VOS_SIZE_T)(sizeof(TAF_MMA_IMS_SWITCH_QRY_REQ_STRU) - VOS_MSG_HEAD_LENGTH) );

    /* 根据输入参数填充TAF_MMA_IMS_SWITCH_QRY_REQ_STRU */
    pstMsg->ulSenderPid       = ulSenderPid;
    pstMsg->ulReceiverPid     = ulReceiverPid;
    pstMsg->ulMsgName         = ID_TAF_MMA_IMS_SWITCH_QRY_REQ;
    pstMsg->stCtrl.ulModuleId = ulModuleId;
    pstMsg->stCtrl.usClientId = usClientId;
    pstMsg->stCtrl.ucOpId     = ucOpId;

    /* 发送消息 */
    if (VOS_OK != PS_SEND_MSG(ulSenderPid, pstMsg))
    {
        return VOS_FALSE;
    }

    return VOS_TRUE;
}

/*****************************************************************************
 函 数 名  : TAF_MMA_SetVoiceDomainReq
 功能描述  : VoiceDomain接口
 输入参数  : ulModuleId       ---  外部模块PID
             usCliendId       ---  外部模块CliendId
             ucOpId           ---  外部模块OpId
             enVoiceDomain    ---  优先域设置参数
 输出参数  : 无
 返 回 值  : VOS_TRUE:成功,VOS_FALSE:失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年02月02日
    作    者   : zwx247453
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 TAF_MMA_SetVoiceDomainReq(
    VOS_UINT32                          ulModuleId,
    VOS_UINT16                          usClientId,
    VOS_UINT8                           ucOpId,
    TAF_MMA_VOICE_DOMAIN_ENUM_UINT32    enVoiceDomain
)
{
    TAF_MMA_VOICE_DOMAIN_SET_REQ_STRU  *pstMsg  = VOS_NULL_PTR;
    VOS_UINT32                          ulReceiverPid;
    VOS_UINT32                          ulSenderPid;

#if (OSA_CPU_ACPU == VOS_OSA_CPU)
    ulReceiverPid = AT_GetDestPid(usClientId, WUEPS_PID_MMA);
    ulSenderPid   = AT_GetDestPid(usClientId, WUEPS_PID_TAF);
#else
    ulReceiverPid = WUEPS_PID_MMA;
    ulSenderPid   = WUEPS_PID_TAF;
#endif

    /* 参数检查 */
    if (enVoiceDomain >= TAF_MMA_VOICE_DOMAIN_BUTT)
    {
        return VOS_FALSE;
    }

    /* 申请消息包TAF_MMA_VOICE_DOMAIN_SET_REQ_STRU */
    pstMsg = (TAF_MMA_VOICE_DOMAIN_SET_REQ_STRU *)PS_ALLOC_MSG_WITH_HEADER_LEN(
                                           ulSenderPid,
                                           sizeof(TAF_MMA_VOICE_DOMAIN_SET_REQ_STRU));

    /* 内存申请失败，返回 */
    if (VOS_NULL_PTR == pstMsg)
    {
        return VOS_FALSE;
    }

    PS_MEM_SET( (VOS_INT8 *)pstMsg + VOS_MSG_HEAD_LENGTH, 0X00,
            (VOS_SIZE_T)(sizeof(TAF_MMA_VOICE_DOMAIN_SET_REQ_STRU) - VOS_MSG_HEAD_LENGTH) );

    /* 根据输入参数填充TAF_MMA_VOICE_DOMAIN_SET_REQ_STRU */
    pstMsg->ulSenderPid       = ulSenderPid;
    pstMsg->ulReceiverPid     = ulReceiverPid;
    pstMsg->ulMsgName         = ID_TAF_MMA_VOICE_DOMAIN_SET_REQ;
    pstMsg->stCtrl.ulModuleId = ulModuleId;
    pstMsg->stCtrl.usClientId = usClientId;
    pstMsg->stCtrl.ucOpId     = ucOpId;
    pstMsg->enVoiceDomain     = enVoiceDomain;

    /* 发送消息 */
    if (VOS_OK != PS_SEND_MSG(ulSenderPid, pstMsg))
    {
        return VOS_FALSE;
    }

    return VOS_TRUE;
}

/*****************************************************************************
 函 数 名  : TAF_MMA_QryVoiceDomainReq
 功能描述  : VoiceDomain接口
 输入参数  : ulModuleId      ---  外部模块PID
             usCliendId      ---  外部模块CliendId
             ucOpId          ---  外部模块OpId
 输出参数  : 无
 返 回 值  : VOS_TRUE:成功,VOS_FALSE:失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年02月02日
    作    者   : zwx247453
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 TAF_MMA_QryVoiceDomainReq(
    VOS_UINT32                          ulModuleId,
    VOS_UINT16                          usClientId,
    VOS_UINT8                           ucOpId
)
{
    TAF_MMA_VOICE_DOMAIN_QRY_REQ_STRU  *pstMsg  = VOS_NULL_PTR;
    VOS_UINT32                          ulReceiverPid;
    VOS_UINT32                          ulSenderPid;

#if (OSA_CPU_ACPU == VOS_OSA_CPU)
    ulReceiverPid = AT_GetDestPid(usClientId, WUEPS_PID_MMA);
    ulSenderPid   = AT_GetDestPid(usClientId, WUEPS_PID_TAF);
#else
    ulReceiverPid = WUEPS_PID_MMA;
    ulSenderPid   = WUEPS_PID_TAF;
#endif

    /* 申请消息包TAF_MMA_VOICE_DOMAIN_QRY_REQ_STRU */
    pstMsg = (TAF_MMA_VOICE_DOMAIN_QRY_REQ_STRU *)PS_ALLOC_MSG_WITH_HEADER_LEN(
                                           ulSenderPid,
                                           sizeof(TAF_MMA_VOICE_DOMAIN_QRY_REQ_STRU));

    /* 内存申请失败，返回 */
    if (VOS_NULL_PTR == pstMsg)
    {
        return VOS_FALSE;
    }

    PS_MEM_SET( (VOS_INT8 *)pstMsg + VOS_MSG_HEAD_LENGTH, 0X00,
            (VOS_SIZE_T)(sizeof(TAF_MMA_VOICE_DOMAIN_QRY_REQ_STRU) - VOS_MSG_HEAD_LENGTH) );

    /* 根据输入参数填充TAF_MMA_VOICE_DOMAIN_QRY_REQ_STRU */
    pstMsg->ulSenderPid       = ulSenderPid;
    pstMsg->ulReceiverPid     = ulReceiverPid;
    pstMsg->ulMsgName         = ID_TAF_MMA_VOICE_DOMAIN_QRY_REQ;
    pstMsg->stCtrl.ulModuleId = ulModuleId;
    pstMsg->stCtrl.usClientId = usClientId;
    pstMsg->stCtrl.ucOpId     = ucOpId;

    /* 发送消息 */
    if (VOS_OK != PS_SEND_MSG(ulSenderPid, pstMsg))
    {
        return VOS_FALSE;
    }

    return VOS_TRUE;
}

#endif
/* Added by zwx247453 for VOLTE SWITCH, 2015-02-02, End */
/*lint +e958*/

#ifdef  __cplusplus
 #if  __cplusplus
}
 #endif
#endif
