/**********************************************************
 * Filename:	hw_typec_platform.h
 *
 * Discription: Huawei type-c device public head file for
 *              exteral modules
 *
 * Copyright: (C) 2015 huawei.
 *
 * Author: w00270068
 *
**********************************************************/

#ifndef __HW_TYPEC_PLATFORM_H__
#define __HW_TYPEC_PLATFORM_H__

/* detect type-c protocol current for external modules */
int typec_detect_input_current(void);

/* detect type-c inserted plug orientation for external modules */
int typec_detect_cc_orientation(void);

#endif
