/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : pwrctrl_power_state_manager.c
  版 本 号   : 初稿
  作    者   : 何俊寅 h00260295
  生成日期   : 2014年9月9日
  最近修改   :
  功能描述   : 低功耗底层睡眠状态管理
  函数列表   :


  修改历史   :
  1.日    期   : 2014年9月9日
    作    者   : 何俊寅 h00260295
    修改内容   : 创建文件

******************************************************************************/

/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#include <linux/pwrctrl_power_state_manager.h>
#include <linux/hisi/pm/pwrctrl_multi_memcfg.h>





unsigned int  *g_pwrctrl_sleep_state_votemap=NULL ;
#if 0
PWRCTRL_POWER_STAT_QOS_ID g_pwrctrl_power_stat_qos_id;
#endif
static DEFINE_SPINLOCK(power_stat_qos_lock);




/*****************************************************************************
 函 数 名  : pwrctrl_request_power_state
 功能描述  : 低功耗电源状态请求
 输入参数  : 
 				s32_t module_id  module id;
 				s32_t state   请求的电源状态
 输出参数  : 
 				req_id req id
 返 回 值  : 
 		RET_OK         成功
              RET_ERR        失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年9月9日
    作    者   : 何俊寅 h00260295
    修改内容   : 新生成函数

*****************************************************************************/
s32_t  pwrctrl_request_power_state( s32_t module_id, s32_t state, s32_t *req_id)
{
	unsigned long flag = 0;
	if((module_id >= PWRCTRL_SLEEP_CLIENT_BUTT) || (module_id < 0) || (state >= PWRCTRL_SYS_STAT_BUTT)	\
		|| (state < 0) || (NULL == req_id))
	{
		return RET_ERR_PARAM_INVALID;
	}
	spin_lock_irqsave(&power_stat_qos_lock,flag);
	if((*(g_pwrctrl_sleep_state_votemap+state) & (0x1 << module_id)))
	{
		spin_unlock_irqrestore(&power_stat_qos_lock, flag);
		return RET_OK;
	}
	*(g_pwrctrl_sleep_state_votemap+state) |= (0x1 << module_id);
	*req_id = ((PWRCTRL_STATE_MAGIC << PWRCTRL_MAGIC_OFFSET) | ((state & 0xFF) << PWRCTRL_STATE_OFFSET)	\
		|((module_id & 0xFFFF) << PWRCTRL_MODULE_ID_OFFSET));
	spin_unlock_irqrestore(&power_stat_qos_lock, flag);
	return RET_OK;

	
}

/*****************************************************************************
 函 数 名  : pwrctrl_release_power_state
 功能描述  : 低功耗电源状态释放
 输入参数  :
 				s32_t req_id  使用pwrctrl_request_power_state接口获得的ID;
 输出参数  : 无
 返 回 值  :
 		RET_OK         成功
              其他        失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年9月9日
    作    者   : 何俊寅 h00260295
    修改内容   : 新生成函数

*****************************************************************************/
s32_t  pwrctrl_release_power_state( s32_t req_id)

{
	s32_t magic;
	s32_t module_id;
	s32_t state;
	unsigned long flag = 0;

	magic = (req_id >> PWRCTRL_MAGIC_OFFSET) & 0xFF;
	state = (req_id >> PWRCTRL_STATE_OFFSET) & 0xFF;
	module_id = (req_id >> PWRCTRL_MODULE_ID_OFFSET) & 0xFFFF;

	if((module_id >= PWRCTRL_SLEEP_CLIENT_BUTT) || (module_id < 0) || (state >= PWRCTRL_SYS_STAT_BUTT)	\
		|| (state < 0) || (PWRCTRL_STATE_MAGIC != magic))
	{
		return RET_ERR_PARAM_INVALID;
	}

	spin_lock_irqsave(&power_stat_qos_lock,flag);
	if(!(*(g_pwrctrl_sleep_state_votemap+state)&(0x1 << module_id)))
	{
		spin_unlock_irqrestore(&power_stat_qos_lock, flag);
		return RET_OK;
	}
	*(g_pwrctrl_sleep_state_votemap+state) &= (~(0x1 << module_id) );

	spin_unlock_irqrestore(&power_stat_qos_lock, flag);
	return RET_OK;
}
/*****************************************************************************
 函 数 名  : pwrctrl_power_state_manager_exit
 功能描述  : 低功耗电源状态管理初始化
 输入参数  :
 			      无
 输出参数  : 无
 返 回 值  :
 		RET_OK         成功
              其他         失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年2月17日
    作    者   : 何俊寅 h00260295
    修改内容   : 新生成函数

*****************************************************************************/


static void  pwrctrl_power_state_manager_exit(void)
{
    printk(KERN_ERR "pwrctrl_power_state_manager_exit\n");

    if (g_pwrctrl_sleep_state_votemap){
        iounmap(g_pwrctrl_sleep_state_votemap);
    }
        return;
}


/*****************************************************************************
 函 数 名  : get_power_stat_qos_value
 功能描述  : 低功耗电源状态获取投票状态
 输入参数  :
 				s32_t state 
 输出参数  : 无
 返 回 值  :
				无
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年9月9日
    作    者   : 何俊寅 h00260295
    修改内容   : 新生成函数

*****************************************************************************/

void get_power_stat_qos_value(s32_t state)
{
	unsigned int qos_value=0;
	qos_value=*(g_pwrctrl_sleep_state_votemap+state);
	printk(KERN_ERR "get_power_stat_qos_value:stat %d is 0x%x\n",state,qos_value);
}

/*****************************************************************************
 函 数 名  : pwrctrl_power_state_manager_init
 功能描述  : 低功耗电源状态管理初始化
 输入参数  :
 			      无
 输出参数  : 无
 返 回 值  :
 		RET_OK         成功
              其他         失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年2月17日
    作    者   : 何俊寅 h00260295
    修改内容   : 新生成函数

*****************************************************************************/
s32_t   pwrctrl_power_state_manager_init(void)
{
	g_pwrctrl_sleep_state_votemap = (unsigned int*)ioremap(ACPU_POWER_STATE_QOS_ADDR,ACPU_POWER_STATE_QOS_SIZE);
	memset(g_pwrctrl_sleep_state_votemap,0,ACPU_POWER_STATE_QOS_SIZE);
	if(NULL == g_pwrctrl_sleep_state_votemap )
	{
		return -ENOMEM;
	}
	printk(KERN_ERR "pwrctrl_power_state_manager_init!\n");

	return RET_OK;
}





subsys_initcall(pwrctrl_power_state_manager_init);


MODULE_LICENSE("GPL");


