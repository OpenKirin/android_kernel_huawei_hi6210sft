/******************************************************************************

                  版权所有 (C), 2001-2013, 华为技术有限公司

 ******************************************************************************
  文 件 名   : bsp_nve.c
  版 本 号   : 初稿
  作    者   : 袁勤顺 y00167654
  生成日期   : 2013年6月27日
  最近修改   :
  功能描述   : bsp nve interface
  函数列表   :
              BSP_NVE_DirectAccess
  修改历史   :
  1.日    期   : 2013年6月27日
    作    者   : 袁勤顺 00167654
    修改内容   : 创建文件

******************************************************************************/

/*****************************************************************************
  1 头文件包含
  *****************************************************************************/
#include <linux/module.h>
#include <linux/mtd/hisi_nve_interface.h>
#include <linux/kernel.h>
#include "BSP.h"

/*****************************************************************************
  2 全局变量定义
*****************************************************************************/

/*****************************************************************************
  3 函数实现
*****************************************************************************/

/*****************************************************************************
 函 数 名  : DRV_NVE_ACCESS
 功能描述  : 访问NVE
 输入参数  : NVE
 输出参数  : 无
 返 回 值  : BSP_OK / BSP_ERROR
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年6月27日
    作    者   : 袁勤顺 00167654
    修改内容   : 新生成函数

*****************************************************************************/
BSP_S32 DRV_NVE_ACCESS(NVE_INFO_S *nve)
{
#ifdef CONFIG_HISI_NVE
    int ret;
    struct hisi_nve_info_user  info;

    if (!nve) {
    	printk(KERN_ERR "BSP_NVE_DirectAccess input is null!");
    	return BSP_ERROR;
    }

    info.nv_operation = nve->nv_operation;
    info.nv_number = nve->nv_number;
    info.valid_size = nve->valid_size;
    memcpy(info.nv_name,nve->nv_name,BSP_NVE_NAME_LENGTH);

    /*write operation*/
    if (!nve->nv_operation)
        memcpy(info.nv_data,nve->nv_data,nve->valid_size);

    ret = hisi_nve_direct_access((struct hisi_nve_info_user *)&info);

    if (!ret) {
    	/*read operation*/
        if (nve->nv_operation)
            memcpy(nve->nv_data,info.nv_data,nve->valid_size);

        return BSP_OK;
    }
    else
        return BSP_ERROR;
#else
    return BSP_ERROR;
#endif
}

EXPORT_SYMBOL(DRV_NVE_ACCESS);
