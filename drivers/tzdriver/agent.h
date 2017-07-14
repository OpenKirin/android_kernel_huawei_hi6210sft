/*
 * FileName:
 * Author:         v00297436 
 * Description:
 * Version:
 * Function List:
 */

#ifndef _AGENT_H_
#define _AGENT_H__

#include "teek_ns_client.h"

int agent_init(void);

int TC_NS_register_agent(TC_NS_DEV_File* dev_file, unsigned int agent_id,
			 TC_NS_Shared_MEM* shared_mem);
int TC_NS_unregister_agent(unsigned long agent_id);
int TC_NS_unregister_agent_client(TC_NS_DEV_File* dev_file);

unsigned int TC_NS_incomplete_proceed(TC_NS_SMC_CMD *smc_cmd,
				      unsigned int agent_id,
				      uint8_t flags);
int TC_NS_wait_event(unsigned long agent_id);
int TC_NS_send_event_reponse(unsigned long agent_id);
void TC_NS_send_event_reponse_all(void);
int TC_NS_alloc_exception_mem(unsigned int agent_id);
int TC_NS_store_exception_info(void);

int is_agent_alive(unsigned int agent_id);

//for secure agent
struct __smc_event_data{
    unsigned int agent_id;
    int agent_alive;
    struct mutex work_lock;
    wait_queue_head_t wait_event_wq;
    int ret_flag;
    wait_queue_head_t send_response_wq;
    int send_flag;
    struct list_head head;
    TC_NS_DEV_File* owner;
    TC_NS_Shared_MEM* buffer;
};

#define AGENT_FS_ID 0x46536673      //FSfs
#define AGENT_MISC_ID 0x4d495343    //MISC
#define AGENT_RPMB_ID 0x4abe6198 //RPMB
struct __smc_event_data* find_event_control(unsigned long agent_id);
#endif //_AGENT_H_
