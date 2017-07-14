/*
 *
 * Copyright (C), 2001-2021, Huawei Tech. Co., Ltd.
 *
 * File Name    :  hwifi_init.h
 * Version       : Initial Draft
 * Author        : zhanglu  00217036
 * Created       : 2014/4/30
 * Last Modified :
 * Description   : hwifi_init.c header file
 * Function List :
 * History       :
 * 1.Date    : 2014/4/30
      Author      : zhanglu 00217036
      Modification: Created file
 *
 */

#ifndef __HWIFI_INIT_H__
#define __HWIFI_INIT_H__

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

 /*
 * 3 Enum Type Definition
 */


/*
 * 4 Global Variable Declaring
 */
extern uint8            g_ba_max_tx;
extern uint8            g_ba_max_rx;
extern uint8            g_ba_max_retry;


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
extern int32 hwifi_init_hw_params(struct cfg_struct *cfg);


#ifdef __cplusplus
    #if __cplusplus
         }
    #endif
#endif

#endif /* end of hwifi_init.h */


