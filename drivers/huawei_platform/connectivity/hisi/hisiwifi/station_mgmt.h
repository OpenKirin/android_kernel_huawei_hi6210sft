/*
 *
 * Copyright (C), 2001-2021, Huawei Tech. Co., Ltd.
 *
 * File Name    : station_mgmt.h
 * Version       : Initial Draft
 * Author        : lkf74588
 * Created       : 2012/9/22
 * Last Modified :
 * Description   : station_mgmt.c header file
 * Function List :
 * History       :
 * 1.Date    : 2012/9/22
      Author      : lkf74588
      Modification: Created file
 *
 */

#ifndef __STATION_MGMT_H__
#define __STATION_MGMT_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*
 * 1 Other Header File Including
 */
#include "common.h"


/*
 * 2 Macro Definition
 */


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


/*
 * 8 UNION Type Definition
 */


/*
 * 9 OTHERS Definition
 */


/*
 * 10 Function Declare
 */
struct sta_mgmt_struct;
struct conn_sta_info;

extern int32 station_mgmt_init(struct sta_mgmt_struct *sta_mgmt);
extern void removeall_conn_sta(struct sta_mgmt_struct *sta_mgmt);
extern void remove_conn_sta(struct sta_mgmt_struct *sta_mgmt, struct conn_sta_info *sta);
extern struct conn_sta_info* add_conn_sta(struct sta_mgmt_struct *sta_mgmt,  int32 aid, uint8* mac);
extern struct conn_sta_info* find_by_aid(struct sta_mgmt_struct *sta_mgmt, int32 aid);
extern struct conn_sta_info* find_by_mac(struct sta_mgmt_struct *sta_mgmt, const uint8* mac);


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of station_mgmt.h */
