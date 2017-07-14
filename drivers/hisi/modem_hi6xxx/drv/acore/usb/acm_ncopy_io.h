/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : acm_ncopy_io.h
  版 本 号   : 初稿
  作    者   : 周明发 00145324
  生成日期   : 2013年4月15日
  最近修改   :
  功能描述   : bsp_udi_adp.c 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2013年4月15日
    作    者   : 周明发 00145324
    修改内容   : 创建文件

******************************************************************************/

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include <linux/tty.h>
#include <linux/interrupt.h>
#include <linux/spinlock.h>

#ifndef __ACM_NCOPY_IO_H__
#define __ACM_NCOPY_IO_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif



/*****************************************************************************
  2 宏定义
*****************************************************************************/
#define ACM_NCOPY_TX_ALLOCATED   64     /* USB requests number */
#define ACM_NCOPY_TX_MAX_SIZE    65535  /* max size of tx buf */

#define NCPY_OK                  0
#define NCPY_ERROR               (-1)

#ifdef _DRV_LLT_
#define STATIC
#else
#define STATIC                   static
#endif

/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 消息头定义
*****************************************************************************/


/*****************************************************************************
  5 消息定义
*****************************************************************************/


/*****************************************************************************
  6 STRUCT定义
*****************************************************************************/
struct acm_ncopy_ctx {
    void                   *acm;        /* ACM context to this handle */
    struct tty_struct      *tty;        /* tty context to this handle */
    void                   *port;       /* port context to this handle */
    spinlock_t             tx_lock;     /* spinlock to protect the context */
    struct list_head       tx_list;     /* list for requests sending */
    struct list_head       free_list;   /* list for requests free */
    struct tasklet_struct  tx_task;     /* task for transferring */
    int                    allocated;   /* requests number allocated */
    int                    available;   /* This handle is available */
    unsigned int           tx_got;      /* packets number got from app */
    unsigned int           tx_discard;  /* packets number discarded by drv */
    unsigned int           tx_queued;   /* packets number queued in the list */
    unsigned int           tx_sending;  /* packets number in fifo */
    unsigned int           tx_sent;     /* packets number sent to PC */
    unsigned int           tx_fail;     /* packets sent but fail */
    unsigned int           tx_cb;       /* tx_cb called */
};

/*****************************************************************************
  7 UNION定义
*****************************************************************************/


/*****************************************************************************
  8 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  9 全局变量声明
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
int acm_ncopy_init(void *acm_dev);
int acm_ncopy_uninit(void *acm_dev);
int acm_ncopy_start_tx(void *acm_dev, char *pVirAddr, char *pPhyAddr, unsigned int size);
void *acm_ncopy_port_ready(void *tty);

int v2p_mmu_get_ttbr0(void);
int v2p_mmu_get_ttbr1(void);
int v2p_mmu_get_ttbcr(void);
int v2p_get_pa(int va, int *pa);


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of acm_ncopy_io.h */
