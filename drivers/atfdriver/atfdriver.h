/*
 * atfdriver.h
 *
 *  Created on: 2014-8-25
 *      Author: l00265041
 */

#ifndef ATFDRIVER_H_
#define ATFDRIVER_H_

#include <linux/init.h>

noinline int atfd_hisi_fn_smc(u64 function_id, u64 arg0, u64 arg1,  u64 arg2);
#endif /* ATFDRIVER_H_ */
