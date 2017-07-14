/*
 * FileName:
 * Author:         v00297436 
 * Description:
 * Version:
 * Function List:
 */

#ifndef _MEM_H_
#define _MEM_H_

#include "teek_ns_client.h"

int tc_mem_init(void);
void tc_mem_destroy(void);

TC_NS_Shared_MEM *tc_mem_allocate(TC_NS_DEV_File *dev, size_t len);
int tc_mem_free(TC_NS_Shared_MEM *shared_mem);


static inline void get_sharemem_struct(struct tag_TC_NS_Shared_MEM *sharemem)
{
	if (sharemem)
		atomic_inc(&sharemem->usage);
}

static inline void put_sharemem_struct(struct tag_TC_NS_Shared_MEM *sharemem)
{
	if (sharemem) {
		if (atomic_dec_and_test(&sharemem->usage))
			tc_mem_free(sharemem);
	}
}

#endif
