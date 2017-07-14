/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : drv_usb.c
  版 本 号   : 初稿
  作    者   : c61362
  生成日期   : 2012年3月2日
  最近修改   :
  功能描述   : 底软给上层软件封装的接口层
  修改历史   :
  1.日    期   : 2012年3月2日
    作    者   : c61362
    修改内容   : 新建Drvinterface.c

  2.日    期   : 2013年2月19日
    作    者   : 蔡喜 220237
    修改内容   : 由Drvinterface.c拆分所得

******************************************************************************/

/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#if (defined BSP_CORE_APP)
#include <linux/module.h>
#endif
#include "BSP.h"
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
#include "stdio.h"
#include "sys_config.h"
#include "BSP_GLOBAL.h"
#endif

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
  2 函数声明
*****************************************************************************/
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
extern void ErrlogRegFunc(MNTN_ERRLOGREGFUN ptr);
extern void * getSystemResetInfo(void);
#endif

/*****************************************************************************
  3 函数实现
*****************************************************************************/


/*****************************************************************************
 函 数 名  : MNTN_ERRLOG_REG_FUNC
 功能描述  : USB MNTN注册异常日志接口，Porting项目中打桩
			    Added by c00204787 for errorlog,20120211
 输入参数  : 无。
 输出参数  : 无。
 返回值：   无

*****************************************************************************/
void MNTN_ERRLOG_REG_FUNC(MNTN_ERRLOGREGFUN pRegFunc)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    ErrlogRegFunc(pRegFunc);
#endif

#if (defined BSP_CORE_APP)
    return;   /* 打桩 */
#endif
}

/*****************************************************************************
 函 数 名  : GET_SYSTEM_RESET_INFO
 功能描述  : 获取系统复位信息
			    Added by c00204787 for errorlog,20120211
 输入参数  : 无

 输出参数  : 无。
 返 回 值  : 无
 注意事项  ：
*****************************************************************************/
void * GET_SYSTEM_RESET_INFO(void)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return getSystemResetInfo();
#endif

#if (defined BSP_CORE_APP)
    return (void *)0;   /* 打桩 */
#endif
}

/*****************************************************************************
* 函 数 名  : BSP_OM_DspAHBResetCancel
* 功能描述  : ZSP AHB总线解复位
* 输入参数  : 无
* 输出参数  : 无
* 返 回 值  : 无
* 其它说明  : 无
*****************************************************************************/
void DRV_DSP_AHB_RESET_CANCEL(void)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    /* BSP_OM_DspAHBResetCancel(); */
	BSP_TRACE(BSP_LOG_LEVEL_ERROR,BSP_MODU_USB,"stub:DRV_DSP_AHB_RESET_CANCEL\n");
    return;
#endif

#if (defined BSP_CORE_APP)
    return;   /* 打桩 */
#endif
}

/*****************************闪电卡相关START*******************************/

/*****************************************************************************
 函 数 名  : DRV_AT_SETAPPDAILMODE
 功能描述  : 闪电卡版本控制应用进行拨号或断开拨号连接
 输入参数  : unsigned int ulStatus - 进行拨号或断开拨号指示
 输出参数  : 无
 返 回 值  : VOID
*****************************************************************************/
VOID DRV_AT_SETAPPDAILMODE(unsigned int ulStatus)
{
    return;
#if 0
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return;   /* 打桩 */
#endif

#if (defined BSP_CORE_APP)
#if( FEATURE_HILINK == FEATURE_ON )
    rndis_app_event_dispatch(ulStatus);
#else
    DRV_PRINTF("Function DRV_AT_SETAPPDAILMODE unsupport!\n");
#endif
#endif
#endif
}

/*****************************闪电卡相关END**********************************/


/************************************************************************
 * FUNCTION
 *       PDP_ACT_DRV_CALLBACK
 * DESCRIPTION
 *       PDP激活后调用底软的回调函数，原本用作加载符号表信息，现在打桩
 * INPUTS
 *       NONE
 * OUTPUTS
 *       NONE
 *************************************************************************/
int PDP_ACT_DRV_CALLBACK(void)
{
    return 0;
}

/*****************************************************************************
 函 数 名  : BSP_USB_UdiagValueCheck
 功能描述  : 本接口用于检查NV项中USB形态值的合法性.
 输入参数  : 无。
 输出参数  : 无。
 返 回 值  :
*****************************************************************************/
 int BSP_USB_UdiagValueCheck(unsigned int DiagValue)
{
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;
#endif

#if (defined BSP_CORE_APP)
    return 1;
#endif
}

/********************************************************
函数说明：协议栈查询HSIC枚举状态
函数功能:
输入参数：无
输出参数：无
输出参数：无
返回值：  1：枚举完成
          0：枚举未完成
********************************************************/
unsigned int BSP_GetHsicEnumStatus(void)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* 打桩 */
#endif

#if (defined BSP_CORE_APP)
    return BSP_FALSE;
#endif
}

/********************************************************
函数说明：协议栈注册HSIC去使能通知回调函数
函数功能:
输入参数：pFunc: HSIC去使能回调函输指针
输出参数：无
输出参数：无
返回值：  0：成功
          1：失败
********************************************************/
unsigned int BSP_HSIC_RegUdiDisableCB(HSIC_UDI_DISABLE_CB_T pFunc)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* 打桩 */
#endif

#if (defined BSP_CORE_APP)
    return BSP_OK;
#endif
}

/********************************************************
函数说明：协议栈注册HSIC使能通知回调函数
函数功能:
输入参数：pFunc: HSIC使能回调函输指针
输出参数：无
输出参数：无
返回值：  0：成功
          1：失败
********************************************************/
unsigned int BSP_HSIC_RegUdiEnableCB(HSIC_UDI_ENABLE_CB_T pFunc)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* 打桩 */
#endif

#if (defined BSP_CORE_APP)
    return BSP_OK;
#endif
}

/*******************************************************************************
 函 数 名  : USB_otg_switch_get
 功能描述  : 用于BALONG和K3对接时MODEM侧USB PHY状态查询
 输入参数  : 无
 输出参数  : 返回USB PHY开启状态

 返 回 值  : 0:  操作成功；
             -1：操作失败。
******************************************************************************/
int USB_otg_switch_get(UINT8 *pvalue)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* 打桩 */
#endif

#if (defined BSP_CORE_APP)
	return BSP_ERROR;
#endif
}

/******************************************************************************
 函 数 名  : USB_otg_switch_set
 功能描述  : 用于BALONG和K3对接时MODEM侧开启或关闭USB PHY
 输入参数  : 开启或关闭
 输出参数  : 无

 返 回 值  : 0:  操作成功；
             -1：操作失败。
******************************************************************************/
int USB_otg_switch_set(UINT8 value)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* 打桩 */
#endif

#if (defined BSP_CORE_APP)
	return BSP_ERROR;
#endif
}

/*******************************************************************************
  Function:     USB_otg_switch_signal_set
  Description:  Modem向AP发送消息，释放Modem侧的USB口

  Input:        UINT8 group
                UINT8 pin
                UINT8 value

  Output:
  Return:       GPIO_OK:    操作成功
                GPIO_ERROR: 操作失败
  Others:       added by z00187553 20120105
*******************************************************************************/
int USB_otg_switch_signal_set(UINT8 group,UINT8 pin, UINT8 value )
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* 打桩 */
#endif

#if (defined BSP_CORE_APP)
	return BSP_ERROR;
#endif
}

unsigned int pcsc_usim_ctrl_cmd(unsigned int CmdTpye, unsigned int Result,
                                        unsigned char *Buf, unsigned int Length)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* 打桩 */
#endif

#if (defined BSP_CORE_APP)
    return 10;  /* 参见drv_misc_if.c第371行 */
#endif
}

void pcsc_usim_int(pFunAPDUProcess pFun1, GetCardStatus pFun2)
{
#if (defined BSP_CORE_APP)
    return;
#endif
}

#if (defined BSP_CORE_APP)
EXPORT_SYMBOL(pcsc_usim_ctrl_cmd);
EXPORT_SYMBOL(pcsc_usim_int);
#endif

/*****************************************************************************
* 函 数 名  : BSP_NCM_Write_Ready
* 功能描述  : 准备发送数据
* 输入参数  : void
* 输出参数  :
* 返 回 值  : void
* 修改记录  : added by l00213811 Balong V300R300C00 TTF开发组 时延优化暨Infusion优化项目
*****************************************************************************/
void BSP_NCM_Write_Ready(void)
{
	/* 打桩 */
    return;
}

unsigned int BSP_USB_RegIpsTraceCB(USB_IPS_MNTN_TRACE_CB_T pFunc)
{
    return 0;
}

/*move from drv_usb_if.c begin*/
/*****************************************************************************
 函 数 名  : BSP_USB_GetDiagModeValue
 功能描述  : 获取设备拨号类型
 输入参数  : unsigned char *dial_mode  : 拨号类型
             unsigned char *cdc_spec   : CDC规范
 输出参数  : 无
 返 回 值  : int:打桩实现，默认返回1（VOS_ERR）
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年9月15日
    作    者   : 夏青 00195127
    修改内容   : 自V3R2移植函数

*****************************************************************************/
int BSP_USB_GetDiagModeValue(unsigned char *dial_mode, unsigned char *cdc_spec)
{
    return 1;
}

/*****************************************************************************
 函 数 名  : BSP_USB_GetLinuxSysType
 功能描述  : 查询系统是否为Linux
 输入参数  : void
 输出参数  : 无
 返 回 值  : int:打桩实现，默认返回-1
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年9月15日
    作    者   : 夏青 00195127
    修改内容   : 新生成函数

*****************************************************************************/
int BSP_USB_GetLinuxSysType(void)
{
    return -1;
}

/*****************************************************************************
 函 数 名  : BSP_USB_GetPortMode
 功能描述  : 获取端口形态模式
 输入参数  : char* PsBuffer         :用于存放端口形态名称和端口号
             unsigned long* Length  :获取PsBuffer长度
 输出参数  : 无
 返 回 值  : unsigned char:打桩实现，默认返回1（VOS_ERR）
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年9月15日
    作    者   : 夏青 00195127
    修改内容   : 新生成函数

*****************************************************************************/
unsigned char BSP_USB_GetPortMode(char* PsBuffer, unsigned int* Length )
{
    return 1;
}

/*****************************************************************************
 函 数 名  : BSP_USB_GetU2diagDefaultValue
 功能描述  : 获取端口默认u2diag值
 输入参数  : void
 输出参数  : 无
 返 回 值  : unsigned int:打桩实现，默认返回0
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年9月15日
    作    者   : 夏青 00195127
    修改内容   : 新生成函数

*****************************************************************************/
unsigned int BSP_USB_GetU2diagDefaultValue(void)
{
    return 0;
}

/*****************************************************************************
 函 数 名  : BSP_USB_NASSwitchGatewayRegFunc
 功能描述  : 用于NAS注册切换网关通知回调函数
 输入参数  : void
 输出参数  : 无
 返 回 值  : int :打桩实现，默认返回0（VOS_OK）
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年9月15日
    作    者   : 夏青 00195127
    修改内容   : 新生成函数

*****************************************************************************/
int BSP_USB_NASSwitchGatewayRegFunc(USB_NET_DEV_SWITCH_GATEWAY switchGwMode)
{
    return 0;
}

/*****************************************************************************
 函 数 名  : BSP_USB_SetPid
 功能描述  : 设置PID的值
 输入参数  : unsigned char u2diagValue
 输出参数  : 无
 返 回 值  : int :打桩实现，默认返回1（VOS_ERR）
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年9月15日
    作    者   : 夏青 00195127
    修改内容   : 新生成函数

*****************************************************************************/
int BSP_USB_SetPid(unsigned char u2diagValue)
{
    return 1;
}

/*****************************************************************************
   与OAM的接口实现，包含打桩实现
*****************************************************************************/






/*****************************************************************************
   与TTF的接口实现，包含打桩实现
*****************************************************************************/

/*****************************************************************************
 函 数 名  : USB_ETH_DrvSetRxFlowCtrl
 功能描述  : 本接口设置流控
 输入参数  : unsigned long ulParam1  :保留为扩展用
             unsigned long ulParam2  :保留为扩展用
 输出参数  : 无
 返 回 值  : unsigned long :打桩实现，默认返回0
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年9月15日
    作    者   : 夏青 00195127
    修改内容   : 新生成函数

*****************************************************************************/
unsigned int USB_ETH_DrvSetRxFlowCtrl(unsigned int ulParam1, unsigned int ulParam2)
{
    return 0;
}

/*****************************************************************************
 函 数 名  : USB_ETH_DrvClearRxFlowCtrl
 功能描述  : 本接口解除流控
 输入参数  : unsigned long ulParam1  :保留为扩展用
             unsigned long ulParam2  :保留为扩展用
 输出参数  : 无
 返 回 值  : unsigned long :打桩实现，默认返回0
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年9月15日
    作    者   : 夏青 00195127
    修改内容   : 新生成函数

*****************************************************************************/
unsigned int USB_ETH_DrvClearRxFlowCtrl(unsigned int ulParam1, unsigned int ulParam2)
{
    return 0;
}

/*****************************************************************************
 函 数 名  : BSP_USB_PortTypeValidCheck
 功能描述  : 提供给上层查询设备端口形态配置合法性接口
             1、端口为已支持类型，2、包含PCUI口，3、无重复端口，4、端点数不超过16，
             5、第一个设备不为MASS类
 输入参数  : pucPortType  端口形态配置
             ulPortNum    端口形态个数
 输出参数  : 无
 返 回 值  : unsigned int 0-端口形态合法 其它-端口形态非法
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年10月9日
    作    者   : 周明发 00145324
    修改内容   : 新生成函数

*****************************************************************************/
unsigned int BSP_USB_PortTypeValidCheck(unsigned char *pucPortType, unsigned int ulPortNum)
{
    return 0;
}

/*****************************************************************************
 函 数 名  : BSP_USB_GetAvailabePortType
 功能描述  : 提供给上层查询当前设备支持端口形态列表接口
 输入参数  : ulPortMax    协议栈支持最大端口形态个数
 输出参数  : pucPortType  支持的端口形态列表
             pulPortNum   支持的端口形态个数
 返 回 值  : unsigned int 0-获取端口形态列表成功 其它-获取端口形态列表失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年10月9日
    作    者   : 周明发 00145324
    修改内容   : 新生成函数

*****************************************************************************/
unsigned int BSP_USB_GetAvailabePortType(unsigned char *pucPortType, unsigned int *pulPortNum, unsigned int ulPortMax)
{
    return 0;
}

/*****************************************************************************
 函 数 名  : BSP_USB_PortTypeQuery
 功能描述  : 查询当前的设备枚举的端口形态值
 输入参数  : 无
 输出参数  : stDynamicPidType  端口形态
 返 回 值  : unsigned int 0-查询成功 其它-查询失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年10月9日
    作    者   : 周明发 00145324
    修改内容   : 新生成函数

*****************************************************************************/
unsigned int BSP_USB_PortTypeQuery(DRV_DYNAMIC_PID_TYPE_STRU *pstDynamicPidType)
{
    return 0;
}

/*****************************************************************************
 函 数 名  : l2_notify_register
 功能描述  : L2状态进入退出通知回调函数注册接口
 输入参数  : FUNC_USB_LP_NOTIFY *pUSBLPFunc回调函数指针
 输出参数  : 无
 返 回 值  : 0:    注册成功
           其他：注册失败
*****************************************************************************/
int l2_notify_register(FUNC_USB_LP_NOTIFY pUSBLPFunc)
{
    return ERROR;
}
/*****************************************************************************
 函 数 名  : BSP_USB_RegUdiEnableCB
 功能描述  : 协议栈通知USB上层应用打开UDI设备端口
 输入参数  : USB_UDI_ENABLE_CB_T pFunc  : USB使能回调函数指针
 输出参数  : 无
 返 回 值  : unsigned int: 0表示成功 1表示失败,与VOS定义的返回值类型一致
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年9月15日
    作    者   : 夏青 00195127
    修改内容   : 自V3R2移植函数

*****************************************************************************/
extern unsigned int BSP_USB_RegUdiEnableCB(USB_UDI_ENABLE_CB_T pFunc);
unsigned int mdrv_usb_reg_enablecb(USB_UDI_ENABLE_CB_T pFunc)
{
    return BSP_USB_RegUdiEnableCB(pFunc);
}
/*****************************************************************************
 函 数 名  : BSP_USB_RegUdiDisableCB
 功能描述  : 协议栈通知USB上层应用关闭UDI设备端口
 输入参数  : USB_UDI_DISABLE_CB_T pFunc  : USB使能回调函数指针
 输出参数  : 无
 返 回 值  : unsigned int: 0表示成功 1表示失败,与VOS定义的返回值类型一致
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年9月15日
    作    者   : 夏青 00195127
    修改内容   : 自V3R2移植函数

*****************************************************************************/
extern unsigned int BSP_USB_RegUdiDisableCB(USB_UDI_DISABLE_CB_T pFunc);
unsigned int mdrv_usb_reg_disablecb(USB_UDI_DISABLE_CB_T pFunc)
{
    return BSP_USB_RegUdiDisableCB(pFunc);
}


EXPORT_SYMBOL(BSP_USB_GetDiagModeValue);
EXPORT_SYMBOL(BSP_USB_GetU2diagDefaultValue);
EXPORT_SYMBOL(BSP_USB_SetPid);
EXPORT_SYMBOL(BSP_USB_GetPortMode);
EXPORT_SYMBOL(BSP_USB_GetLinuxSysType);
EXPORT_SYMBOL(BSP_USB_NASSwitchGatewayRegFunc);
EXPORT_SYMBOL(BSP_USB_PortTypeValidCheck);
EXPORT_SYMBOL(BSP_USB_GetAvailabePortType);
EXPORT_SYMBOL(BSP_USB_PortTypeQuery);

/*提供给OAM的接口*/
EXPORT_SYMBOL(l2_notify_register);

/*提供给TTF的接口*/
EXPORT_SYMBOL(USB_ETH_DrvSetRxFlowCtrl);
EXPORT_SYMBOL(USB_ETH_DrvClearRxFlowCtrl);

/*move from drv_usb_if.c end*/

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

