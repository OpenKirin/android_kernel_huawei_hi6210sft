/*
 *
 * Copyright (C), 2001-2021, Huawei Tech. Co., Ltd.
 *
 * File Name    : hwifi_dev_err.h
 * Version       : Initial Draft
 * Author        : xudayong
 * Created       : 2013/9/17
 * Last Modified :
 * Description   : hwifi_dev_err.c header file
 * Function List :
 * History       :
 * 1.Date    : 2013/9/17
      Author      : xudayong
      Modification: Created file
 *
 */

#ifndef __HWIFI_DEV_ERR_H__
#define __HWIFI_DEV_ERR_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*
 * 1 Other Header File Including
 */


/*
 * 2 Macro Definition
 */
#include <linux/netlink.h>
/*defined in include\uapi\linux\netlink.h 
  must sync with ap_error.h in wpa_supplicant*/
#define NETLINK_DEV_ERROR   (NETLINK_HISI_WIFI_MSG) 
#define DATA_BUF_LEN        64

#define HWIFI_STA_MODE             0
#define HWIFI_P2P_MODE             1
#define HWIFI_AP_MODE              2
/* DTS2014072800265 HI1101 bug fix 20140805 d00223710 begin */
#define HWIFI_REDUCE_BT_PRI        3    /* reduce bt priority */
/* DTS2014072800265 HI1101 bug fix 20140805 d00223710 end */

/*
 * 3 Enum Type Definition
 */


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
struct dev_excp_globals
{
    struct sock                            *nlsk;
    unsigned char                           mode;
    uint8                                  *data;
    uint32                                  usepid;
};

struct dev_netlink_msg_hdr_stru
{
    uint32       cmd;
    uint32       len;
};

/*
 * 8 UNION Type Definition
 */


/*
 * 9 OTHERS Definition
 */


/*
 * 10 Function Declare
 */
int32 init_dev_excp_handler(struct hcc_handler *hcc);
void  deinit_dev_excp_handler(struct hcc_handler *hcc);
int hwifi_exception_submit(struct hcc_handler *hcc);
int32  hwifi_exception_enable_set(struct hcc_handler *hcc, int32 enable);
void hwifi_powerpin_state_save(int* flag);
void hwifi_powerpin_state_restore(int flag);
int32 hwifi_exception_force_submit(struct hcc_handler *hcc, char* type);
/* DTS2014072800265 HI1101 bug fix 20140805 d00223710 begin */
void hwifi_reduce_bt_priority(void);
/* DTS2014072800265 HI1101 bug fix 20140805 d00223710 end */
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of hwifi_dev_err.h */
