/*
 *
 * Copyright (C), 2001-2021, Huawei Tech. Co., Ltd.
 *
 * File Name    : hwifi_roam_main.h
 * Version       : Initial Draft
 * Author        : k53369
 * Created       : 2012/8/27
 * Last Modified :
 * Description   : hwifi_roam_main.c header file
 * Function List :
 * History       :
 * 1.Date    : 2013/1/9
      Author      : lkf74588
      Modification: Created file
 *
 */


#ifndef __HWIFI_ROAM_MAIN_H__
#define __HWIFI_ROAM_MAIN_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#ifdef __ROAM__

/*
 * 1 Other Header File Including
 */
#include "common.h"
#include "hwifi_roam_fsm.h"
#include "hwifi_roam_alg.h"

#include <linux/wait.h>
#include <linux/list.h>
#include <linux/skbuff.h>
#include <linux/spinlock.h>
#include <linux/spinlock_types.h>

/*
 * 2 Macro Definition
 */


#define ROAM_SINGLE_USER_FOREIGN_CHANNEL_DEWELL_TIME    20
#define ROAM_SINGLE_USER_HOME_CHANNEL_DEWELL_TIME       20
/* DTS2014070308446 HI1101 bug fix 2014-7-4 begin */
#define ROAM_CONCURRENT_USER_NUMBER                     10
/* DTS2014070308446 HI1101 bug fix 2014-7-4 end */

/* DTS2014070308446 HI1101 bug fix 2014-7-4 begin */
#define ROAM_TRIGGER_RSSI_THRESHOLD    -70
#define ROAM_TRIGGER_COUNT_THRESHOLD   5

#define ROAM_PINGPONG_EXPIRE_TIME               5
#define ROAM_PINGPONG_RSSI_THRESHOLD    -74
#define ROAM_BLACKLIST_EXPIRE_TIME              10
#define ROAM_DOWN_ROUTE_LEARNING_PACKET_NUMBER   3

/* DTS2015030605737 Hi1101 bug fix d00223710 20150311 begin */
#define ROAM_TRIGGER_RSSI_DUE_TO_TX_FAILED -65   /* 因报文发送失败率过高触发漫游时的 RSSI门限 */
#define ROAM_SCAN_INTERVAL_DUE_TO_TX_FAILED 15   /* 因报文发送失败率过高触发漫游时的 漫游扫描间隔 */
#define ROAM_TX_FAILED_SCALE_THRESHOLD 25        /* 因报文发送失败率过高触发漫游时的 发送失败率门限 */
#define ROAM_TX_PACKET_NUM_THRESHOLD   10        /* 因报文发送失败率过高触发漫游时的 发送报文总数门限 */
#define ROAM_TX_RATE_THRESHOLD         6         /* 因报文发送失败率过高触发漫游时的 发送报文速率上限 */
/* DTS2015030605737 Hi1101 bug fix d00223710 20150311 end */

/* device弱信号下最长认证时间为180*3=540毫秒,关联时间为500毫秒，总时间为1040ms */
#define ROAM_ROAMING_TIMEOUT_MS         400    /* 漫游关联超时时间 调整为400毫秒，额外2次超时机会 */
#define ROAM_ORIGIN_TIMEOUT_MS          1000

/* ROAM_SCANNING_PROBE_REQ_COUNT 保持为1，HOST下发1次命令，device修改为每20毫秒发送1个probe request报文，下发3次，总时间60毫秒 */
#define ROAM_SCANNING_PROBE_REQ_COUNT   1
#define ROAMING_MAX_TIMEOUT_CNT         2
#define ROAM_SCAN_MAX_MISS_COUNT        5     /* 漫游扫描没有扫描到相同ssid和加密方式的AP的次数 */

/* DTS2014073003055  HI1101 bug fix 20140806 begin */
#define ROAM_CONNECT_FAILED_COUNT_LIMIT 2     /* 漫游关联连续失败的次数 */
/* DTS2014073003055  HI1101 bug fix 20140806 end */


/* DTS2014111406700 Hi110x bug fix d00223710 2014/11/17 begin */
/* 暗屏亮屏条件下,配置device上报漫游扫描触发的开关 */
#define ROAM_DEVICE_SCAN_TRIGGER_REPORT_DISABLE 10   // 10：是暗屏下发，表示不上报漫游扫描事件
#define ROAM_DEVICE_SCAN_TRIGGER_REPORT_ENABLE  20   // 20：表示亮屏下发，表示重新上报漫游扫描事件
/* DTS2014111406700 Hi110x bug fix d00223710 2014/11/17 end */


#define ROAM_RSSI_THRESHOLD_1 -80
#define ROAM_RSSI_THRESHOLD_2 -75
#define ROAM_RSSI_THRESHOLD_3 -70
/* DTS2014070308446 HI1101 bug fix 2014-7-4 end */

#define IS_ROAM_DISCONN(roam) (ROAM_FSM_STATE_DISCONN == (roam)->roam_fsm.state)
#define IS_ROAM_CONNECT(roam) (ROAM_FSM_STATE_CONNECT == (roam)->roam_fsm.state)

#define IN_ROAMING(roam) (!IS_ROAM_DISCONN(roam) && !IS_ROAM_CONNECT(roam))
/* DTS2014050806333 HI1101 bug fix 2014-6-13 begin */
#define IS_ROAMING_STATE(STATE) ((ROAM_FSM_STATE_SCANNING == (STATE)) \
                                  || (ROAM_FSM_STATE_ROAMING == (STATE)) \
                                  || (ROAM_FSM_STATE_ORIGIN == (STATE)))
/* DTS2014050806333 HI1101 bug fix 2014-6-13 end */

/*
 * 3 Enum Type Definition
 */



/*  */
typedef enum
{
    ROAM_PARAM_SINGLE_USER_FOREIGN_DEWELL_TIME_MS = 0,  /*  */
    ROAM_PARAM_SINGLE_USER_HOME_DEWELL_TIME_MS,
    ROAM_PARAM_CONCURRENT_USER_NUMBER,
    ROAM_PARAM_IS_ORTHOGONAL,
    ROAM_PARAM_BAND,
    ROAM_PARAM_BLOCK_ACK_THROUGHPUT_MBPS,
    ROAM_PARAM_FRAME_LENGTH_BYTE,
    ROAM_PARAM_TRIGGER_RSSI_THRESHOLD,
    ROAM_PARAM_TRIGGER_COUNT_THRESHOLD,
    ROAM_PARAM_PING_PONG_TIME_THRESHOLD,
    ROAM_PARAM_BLACK_LIST_INVALID_TIME,
    ROAM_PARAM_GARP_SENT_COUNT,
    ROAM_PARAM_SINGLE_USER_THROUGHPUT_THRESHOLD,

    ROAM_PARAM_BUTT
} roam_param_enum;

enum roam_param_cmd_enum
{
    ROAM_PARAM_CMD_COMMIT = 0x00,

    ROAM_PARAM_CMD_SET_ON = 0x01,
    ROAM_PARAM_CMD_SET_FOREIGN_DEWELL,
    ROAM_PARAM_CMD_SET_HOME_DEWELL,
    ROAM_PARAM_CMD_SET_CONCURRENT_USER,
    ROAM_PARAM_CMD_SET_IS_ORTHOGONAL,
    ROAM_PARAM_CMD_SET_BAND,
    ROAM_PARAM_CMD_SET_TRIGGER_RSSI_THRESHOLD,
    ROAM_PARAM_CMD_SET_TRIGGER_COUNT_THRESHOLD,
    ROAM_PARAM_CMD_SET_PINGPONG_TIME_THRESHOL,
/* DTS2014050806333 HI1101 bug fix 2014-6-13 begin */
    ROAM_PARAM_CMD_SET_PINGPONG_RSSI_THRESHOLD,
/* DTS2014050806333 HI1101 bug fix 2014-6-13 end */
    ROAM_PARAM_CMD_SET_BLACKLIST_INVALID_TIME,
    ROAM_PARAM_CMD_SET_GARP_SENT_COUNT,
    ROAM_PARAM_CMD_SET_SINGLEUSER_THROUGHPUT_THRESHOLD,

    ROAM_PARAM_CMD_GET_ON = 0x81,
    ROAM_PARAM_CMD_GET_FOREIGN_DEWELL,
    ROAM_PARAM_CMD_GET_HOME_DEWELL,
    ROAM_PARAM_CMD_GET_CONCURRENT_USER,
    ROAM_PARAM_CMD_GET_IS_ORTHOGONAL,
    ROAM_PARAM_CMD_GET_BAND,
    ROAM_PARAM_CMD_GET_TRIGGER_RSSI_THRESHOLD,
    ROAM_PARAM_CMD_GET_TRIGGER_COUNT_THRESHOLD,
    ROAM_PARAM_CMD_GET_PINGPONG_TIME_THRESHOL,
/* DTS2014050806333 HI1101 bug fix 2014-6-13 begin */
    ROAM_PARAM_CMD_GET_PINGPONG_RSSI_THRESHOLD,
/* DTS2014050806333 HI1101 bug fix 2014-6-13 end */
    ROAM_PARAM_CMD_GET_BLACKLIST_INVALID_TIME,
    ROAM_PARAM_CMD_GET_GARP_SENT_COUNT,
    ROAM_PARAM_CMD_GET_SINGLEUSER_THROUGHPUT_THRESHOLD,
};

#define IS_GET_ROAM_CMD(cmd) ((cmd) > 0x80)



/*
 * 4 Global Variable Declaring
 */


/*
 * 5 Message Header Definition
 */


/*
 * 6 Message Definition
 */


/*
 * 7 STRUCT Type Definition
 */


struct cfg_struct;



struct roam_all_stru
{
    struct roam_fsm_stru   roam_fsm;

    roam_wlan_alg_param_t  alg_param;
    roam_ap_black_list_stru    black_list;
    roam_ext_ap_stru ext_ap;
    struct roam_scan_candidate_ap_list ap_list;

    int32 is_buffering;
    struct sk_buff_head         data_queue;
    struct workqueue_struct *wq;
    struct work_struct      work;

/* DTS2014050806333 HI1101 bug fix 2014-6-13 begin */
    /* android上层下发的背景扫描与漫游背景扫描必须互斥 */
    struct mutex roam_scan_lock;

#ifdef WLAN_POWER_MANAGEMENT
    int32 power_manager_flag;
#endif

/* DTS2014050806333 HI1101 bug fix 2014-6-13 end */
};

#define roam_to_cfg(r) container_of((r), struct cfg_struct, roam)


/*
 * 8 UNION Type Definition
 */


/*
 * 9 OTHERS Definition
 */


/*
 * 10 Function Declare
 */


/* sending msg to device */
extern void roam_set_params(struct roam_all_stru* roam);
extern void roam_go_home_channel(struct roam_all_stru* roam, int band, int channel);
extern void roam_go_foreign_channel(struct roam_all_stru* roam, int band, int channel);
extern void roam_send_probe_req(struct roam_all_stru* roam);
extern int32 roam_try_roaming(struct roam_all_stru* roam, struct roam_candidate_ap_stru *candidate);
extern int32 roam_roaming_timeout(struct roam_all_stru* roam, uint8 *bssid);

/* data buffering mgmt */
extern void roam_send_garp(struct roam_all_stru* roam);
extern void roam_start_buffering(struct roam_all_stru* roam);
extern void roam_stop_buffering(struct roam_all_stru* roam);
extern void roam_send_buffering(struct roam_all_stru* roam);
extern void roam_clean_buffering(struct roam_all_stru* roam);

/* scanning mgmt */
extern int32 roam_need_scan(struct roam_all_stru* roam);
extern void roam_update_scan_channels(struct roam_all_stru* roam);

/* init and exit */
int hwifi_roam_main_init(struct roam_all_stru* roam);
void hwifi_roam_main_exit(struct roam_all_stru* roam);

#endif /* __ROAM__ */

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of hwifi_roam_main.h */
