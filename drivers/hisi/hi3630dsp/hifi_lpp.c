/******************************************************************************

			  版权所有 (C), 2001-2011, 华为技术有限公司

******************************************************************************
文 件 名   : hifi_lpp.c
版 本 号   : 初稿
作	  者   : 夏青 00195127
生成日期   : 2012年8月2日
最近修改   :
功能描述   :hifi设备驱动,用于hifi low-power play
函数列表   :
		  hifi_misc_async_write
		  hifi_misc_exit
		  hifi_misc_handle_mail
		  hifi_misc_init
		  hifi_misc_ioctl
		  hifi_misc_open
		  hifi_misc_probe
		  hifi_misc_proc_init
		  hifi_misc_proc_read
		  hifi_misc_receive_task
		  hifi_misc_release
		  hifi_misc_remove
		  hifi_misc_sync_write
修改历史   :
1.日	期	 : 2012年7月26日
作	  者   : 夏青 00195127
修改内容   : 创建文件

******************************************************************************/

/*****************************************************************************
1 头文件包含
*****************************************************************************/
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/device.h>
#include <linux/mutex.h>
#include <linux/proc_fs.h>
#include <linux/kthread.h>
#include <linux/semaphore.h>
#include <linux/miscdevice.h>
#include <linux/platform_device.h>
#include <linux/uaccess.h>
#include <linux/slab.h>
#include <linux/gfp.h>
#include <linux/workqueue.h>
#include <linux/wakelock.h>
#include <linux/errno.h>
#include <linux/of_address.h>
#include <linux/mm.h>
#include <linux/io.h>
#include <linux/rtc.h>
#include <linux/time.h>
#include <linux/delay.h>
#include <linux/timer.h>
#include <linux/syscalls.h>
#include <linux/slab.h>
#include <linux/uaccess.h>
#include <linux/unistd.h>
#include <linux/completion.h>
#include <linux/suspend.h>
#include <linux/reboot.h>

#include <asm/memory.h>
#include <asm/types.h>
#include <asm/io.h>

#include <drv_mailbox_cfg.h>

#include "drv_mailbox_msg.h"
#include "bsp_drv_ipc.h"
#include "hifi_lpp.h"
#include "audio_hifi.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#define DTS_COMP_HIFIDSP_NAME "hisilicon,k3hifidsp"
#define HIFI_REV_PROC	"hifi_proc"

#define FILE_NAME_DUMP_MUSIC_DATA "/data/kernel.mp3"

#define HIFI_LOG_PATH_PARENT "/data/hisi_logs/"
#define HIFI_LOG_PATH "/data/hisi_logs/hifi_log/"
#define FILE_NAME_DUMP_DSP_LOG		 HIFI_LOG_PATH"hifi.log"
#define FILE_NAME_DUMP_DSP_BIN		 HIFI_LOG_PATH"hifi.bin"
#define FILE_NAME_DUMP_DSP_PANIC_LOG HIFI_LOG_PATH"hifi_panic.log"
#define FILE_NAME_DUMP_DSP_PANIC_BIN HIFI_LOG_PATH"hifi_panic.bin"

//#define CHECK_HIFI_MEM

extern void hifi_load_all_function(void);
extern void hifi_load_tcm_function(void);
extern void hifi_set_misc_config(void);
extern void hifi_set_ocd_config(void);
extern void hifi_set_sec_config(void);

/*****************************************************************************
2 全局变量定义
*****************************************************************************/
static DEFINE_SEMAPHORE(g_misc_sem);

#define HI_DECLARE_SEMAPHORE(name) \
	struct semaphore name = __SEMAPHORE_INITIALIZER(name, 0)
HI_DECLARE_SEMAPHORE(k3log_dsp_sema);
EXPORT_SYMBOL(k3log_dsp_sema);

LIST_HEAD(recv_sync_work_queue_head);
LIST_HEAD(recv_proc_work_queue_head);

struct hifi_misc_priv {
	spinlock_t	recv_sync_lock;
	spinlock_t	recv_proc_lock;

	struct completion completion;
	wait_queue_head_t proc_waitq;/* proc读同步信号量 */

	int			wait_flag;
	unsigned int	sn;

	struct wake_lock hifi_misc_wakelock;

	unsigned char*	hifi_priv_base_virt;
	unsigned char*	hifi_priv_base_phy;
    struct device   *dev;

#if 1 /*debug*/
	unsigned int	debug_level;
	unsigned int	dsp_debug_level;
	unsigned int*	dsp_time_stamp;
	unsigned int*	dsp_panic_mark;
	unsigned int*	dsp_exception_no;
	unsigned int*	dsp_log_cur_addr;
	char*			dsp_log_addr;
	char*			dsp_bin_addr;
	struct task_struct* kdumpdsp_task;
	struct semaphore	dsp_dump_sema;
	bool			first_dump_log;
	bool			force_dump_log;
	unsigned int	pre_exception_no;
	unsigned int	pre_dump_timestamp;
	bool			dsp_loaded;
	unsigned int	dsp_loaded_sign;
#endif
};
struct hifi_misc_priv g_misc_data;

static struct notifier_block hifi_sr_nb;
static struct notifier_block hifi_reboot_nb;
atomic_t volatile hifi_in_suspend = ATOMIC_INIT(0);
atomic_t volatile hifi_in_saving = ATOMIC_INIT(0);


#define UNCONFIRM_ADDR (0)
static struct hifi_dsp_dump_info g_dsp_dump_info[4] = {
	{DSP_NORMAL, DUMP_DSP_LOG, FILE_NAME_DUMP_DSP_LOG, UNCONFIRM_ADDR, (DRV_DSP_UART_TO_MEM_SIZE-DRV_DSP_UART_TO_MEM_RESERVE_SIZE)},
	{DSP_NORMAL, DUMP_DSP_BIN, FILE_NAME_DUMP_DSP_BIN, UNCONFIRM_ADDR, HIFI_RUN_SIZE},
	{DSP_PANIC,  DUMP_DSP_LOG, FILE_NAME_DUMP_DSP_PANIC_LOG, UNCONFIRM_ADDR, (DRV_DSP_UART_TO_MEM_SIZE-DRV_DSP_UART_TO_MEM_RESERVE_SIZE)},
	{DSP_PANIC,  DUMP_DSP_BIN, FILE_NAME_DUMP_DSP_PANIC_BIN, UNCONFIRM_ADDR, HIFI_RUN_SIZE},
};

void sochifi_watchdog_send_event(void)
{
    hifi_dump_panic_log();
    logi("soc hifi watchdog coming, now reset mediaserver\n");
    char *envp[2] = {"hifi_watchdog", NULL};
    kobject_uevent_env(&g_misc_data.dev->kobj, KOBJ_CHANGE, envp);
}

static int hifi_create_dir(char *path)
{
	int fd = -1;

	fd = sys_access(path, 0);
	if (0 != fd) {
		logi("need create dir %s.\n", path);
		fd	= sys_mkdir(path, 0755);
		if (fd < 0) {
			loge("create dir %s fail, ret: %d.\n", path, fd);
			return fd;
		}
		logi("create dir %s successed, fd: %d.\n", path, fd);
	}

	return 0;
}

static long hifi_get_dmesg(unsigned long arg)
{
	int ret = OK;
	struct misc_io_dump_buf_param dump_info;

	unsigned int len = (unsigned int)(*g_misc_data.dsp_log_cur_addr) - (DRV_DSP_UART_TO_MEM + DRV_DSP_UART_TO_MEM_RESERVE_SIZE);

	if (len > (DRV_DSP_UART_TO_MEM_SIZE - DRV_DSP_UART_TO_MEM_RESERVE_SIZE))
	{
		loge("len is larger: %d.\n", len);
		return 0;
	}

	if (copy_from_user(&dump_info, (void*)arg, sizeof(struct misc_io_dump_buf_param))) {
		loge("copy_from_user fail.\n");
		return 0;
	}

	g_misc_data.dsp_log_addr = (char*)ioremap(DRV_DSP_UART_TO_MEM, DRV_DSP_UART_TO_MEM_SIZE);
	if (NULL == g_misc_data.dsp_log_addr) {
		loge("dsp log ioremap Error!\n");
		return 0;
	}

	g_dsp_dump_info[0].data_addr = g_misc_data.dsp_log_addr + DRV_DSP_UART_TO_MEM_RESERVE_SIZE;

	logi("get msg: len:%d from:%p to:%p\n", len, g_dsp_dump_info[0].data_addr, dump_info.user_buf_l);

	ret = copy_to_user(dump_info.user_buf_l, g_dsp_dump_info[0].data_addr, len);
	if (OK != ret) {
		loge("copy_to_user fail, ret is %d\n", ret);
		len -= ret;
	}

	if (0 == dump_info.buf_size)
	{
		*g_misc_data.dsp_log_cur_addr = DRV_DSP_UART_TO_MEM + DRV_DSP_UART_TO_MEM_RESERVE_SIZE;
		memset(g_dsp_dump_info[0].data_addr, 0, g_dsp_dump_info[0].data_len);
	}

	if(g_misc_data.dsp_log_addr) {
		iounmap(g_misc_data.dsp_log_addr);
		g_misc_data.dsp_log_addr = NULL;
	}
	return (long)len;
}

static void hifi_dump_dsp(DUMP_DSP_INDEX index)
{
	int ret = 0;

	mm_segment_t fs;
	struct file *fp = NULL;
	int file_flag = O_RDWR;
	struct kstat file_stat;
	int write_size = 0;
	unsigned int err_no = 0xFFFFFFFF;

	char tmp_buf[64] = {0};
	unsigned long tmp_len = 0;
	struct rtc_time cur_tm;
	struct timespec now;

	char* file_name		= g_dsp_dump_info[index].file_name;
	char* data_addr		= NULL;
	unsigned int data_len = g_dsp_dump_info[index].data_len;

	char* is_panic		= "i'm panic.\n\n";
	char* is_exception	= "i'm exception.\n\n";
	char* not_panic		= "i'm ok.\n\n";

	if (down_interruptible(&g_misc_data.dsp_dump_sema) < 0) {
		loge("acquire the semaphore error!\n");
		return;
	}

	IN_FUNCTION;

	while (1) {
		if (atomic_read(&hifi_in_suspend))
			msleep(100);
		else {
			atomic_set(&hifi_in_saving, 1);
			break;
		}
	}

	g_misc_data.dsp_log_addr = (char*)ioremap(DRV_DSP_UART_TO_MEM, DRV_DSP_UART_TO_MEM_SIZE);
	if (NULL == g_misc_data.dsp_log_addr) {
		loge("dsp log ioremap Error!\n");
		return;
	}

	g_dsp_dump_info[NORMAL_LOG].data_addr = g_misc_data.dsp_log_addr + DRV_DSP_UART_TO_MEM_RESERVE_SIZE;
	g_dsp_dump_info[PANIC_LOG].data_addr  = g_misc_data.dsp_log_addr + DRV_DSP_UART_TO_MEM_RESERVE_SIZE;

	data_addr = g_dsp_dump_info[index].data_addr;

	fs = get_fs();
	set_fs(KERNEL_DS);

	ret = hifi_create_dir(HIFI_LOG_PATH_PARENT);
	if (0 != ret) {
		goto END;
	}

	ret = hifi_create_dir(HIFI_LOG_PATH);
	if (0 != ret) {
		goto END;
	}

	ret = vfs_stat(file_name, &file_stat);
	if (ret < 0) {
		logi("there isn't a dsp log file, and need to create.\n");
		file_flag |= O_CREAT;
	}

	fp = filp_open(file_name, file_flag, 0755);
	if (IS_ERR(fp)) {
		loge("open file fail: %s, 0x%x.\n", file_name, (unsigned int)fp);
		fp = NULL;
		goto END;
	}

	/*write from file start*/
	vfs_llseek(fp, 0, SEEK_SET);

	/*write file head*/
	if (DUMP_DSP_LOG == g_dsp_dump_info[index].dump_type) {
		/*write dump log time*/
		now = current_kernel_time();
		rtc_time_to_tm(now.tv_sec, &cur_tm);
		memset(tmp_buf, 0, 64);
		tmp_len = sprintf(tmp_buf, "%04d-%02d-%02d %02d:%02d:%02d.\n",
								cur_tm.tm_year+1900, cur_tm.tm_mon+1,
								cur_tm.tm_mday, cur_tm.tm_hour,
								cur_tm.tm_min, cur_tm.tm_sec);
		vfs_write(fp, tmp_buf, tmp_len, &fp->f_pos);

		/*write exception no*/
		memset(tmp_buf, 0, 64);
		err_no = (unsigned int)(*(g_misc_data.dsp_exception_no));
		if (err_no != 0xFFFFFFFF) {
			tmp_len = sprintf(tmp_buf, "the exception no: %u.\n", err_no);
		} else {
			tmp_len = sprintf(tmp_buf, "%s", "hifi is fine, just dump log.\n");
		}
		vfs_write(fp, tmp_buf, tmp_len, &fp->f_pos);

		/*write error type*/
		if (0xdeadbeaf == *g_misc_data.dsp_panic_mark) {
			vfs_write(fp, is_panic, strlen(is_panic), &fp->f_pos);
		} else if(0xbeafdead == *g_misc_data.dsp_panic_mark){
			vfs_write(fp, is_exception, strlen(is_exception), &fp->f_pos);
		} else {
			vfs_write(fp, not_panic, strlen(not_panic), &fp->f_pos);
		}
	}

	/*write dsp info*/
	if((write_size = vfs_write(fp, data_addr, data_len, &fp->f_pos)) < 0) {
		loge("write file fail.\n");
	}

	logi("write file size: %d.\n", write_size);

END:
	if (fp) {
		filp_close(fp, 0);
	}
	set_fs(fs);

	if (NULL != g_misc_data.dsp_log_addr) {
		iounmap(g_misc_data.dsp_log_addr);
		g_misc_data.dsp_log_addr = NULL;
	}

	atomic_set(&hifi_in_saving, 0);

	up(&g_misc_data.dsp_dump_sema);
	OUT_FUNCTION;

	return;
}

static int hifi_dump_dsp_thread(void *p)
{
#define HIFI_TIME_STAMP_1S	  32768
#define HIFI_DUMPLOG_TIMESPAN (10 * HIFI_TIME_STAMP_1S)

	unsigned int exception_no = 0;
	unsigned int time_now = 0;
	unsigned int time_diff = 0;

	IN_FUNCTION;

	while (!kthread_should_stop()) {
		if (down_interruptible(&k3log_dsp_sema) != 0) {
			loge("hifi_dump_dsp_thread wake up err\n");
		}

		time_now = (unsigned int)readl(g_misc_data.dsp_time_stamp);
		time_diff = time_now - g_misc_data.pre_dump_timestamp;
		g_misc_data.pre_dump_timestamp = time_now;
		exception_no = g_misc_data.dsp_exception_no;
		logi("errno:%x pre_errno:%x is_first:%d is_force:%d time_diff:%d ms\n", exception_no, g_misc_data.pre_exception_no, g_misc_data.first_dump_log, g_misc_data.force_dump_log, (time_diff * 1000) / HIFI_TIME_STAMP_1S);

		if (exception_no < 40 && (exception_no != g_misc_data.pre_exception_no || time_diff > HIFI_DUMPLOG_TIMESPAN)) {
			hifi_dump_dsp(PANIC_LOG);
			hifi_dump_dsp(PANIC_BIN);
			g_misc_data.pre_exception_no = exception_no;
		} else if (g_misc_data.first_dump_log || g_misc_data.force_dump_log || time_diff > HIFI_DUMPLOG_TIMESPAN){
			hifi_dump_dsp(NORMAL_LOG);
			hifi_dump_dsp(NORMAL_BIN);
			g_misc_data.first_dump_log = false;
		}
		g_misc_data.force_dump_log = false;
	}

	OUT_FUNCTION;
	return 0;
}

static void hifi_misc_msg_info(unsigned short _msg_id)
{
	HIFI_MSG_ID msg_id =  (HIFI_MSG_ID)_msg_id;

	switch(msg_id) {
		case ID_AP_AUDIO_PLAY_START_REQ:
			logi("MSG: ID_AP_AUDIO_PLAY_START_REQ\n");
			break;
		case ID_AUDIO_AP_PLAY_START_CNF:
			logi("MSG: ID_AUDIO_AP_PLAY_START_CNF\n");
			break;
		case ID_AP_AUDIO_PLAY_PAUSE_REQ:
			logi("MSG: ID_AP_AUDIO_PLAY_PAUSE_REQ\n");
			break;
		case ID_AUDIO_AP_PLAY_PAUSE_CNF:
			logi("MSG: ID_AUDIO_AP_PLAY_PAUSE_CNF\n");
			break;
		case ID_AUDIO_AP_PLAY_DONE_IND:
			logi("MSG: ID_AUDIO_AP_PLAY_DONE_IND\n");
			break;
		case ID_AP_AUDIO_PLAY_UPDATE_BUF_CMD:
			logi("MSG: ID_AP_AUDIO_PLAY_UPDATE_BUF_CMD\n");
			break;
		case ID_AP_AUDIO_PLAY_WAKEUPTHREAD_REQ:
			logi("MSG: ID_AP_AUDIO_PLAY_WAKEUPTHREAD_REQ\n");
			break;
		case ID_AP_AUDIO_PLAY_QUERY_TIME_REQ:
			logd("MSG: ID_AP_AUDIO_PLAY_QUERY_TIME_REQ\n");
			break;
		case ID_AUDIO_AP_PLAY_QUERY_TIME_CNF:
			logd("MSG: ID_AUDIO_AP_PLAY_QUERY_TIME_CNF\n");
			break;
		case ID_AP_AUDIO_PLAY_QUERY_STATUS_REQ:
			logd("MSG: ID_AP_AUDIO_PLAY_QUERY_STATUS_REQ\n");
			break;
		case ID_AUDIO_AP_PLAY_QUERY_STATUS_CNF:
			logd("MSG: ID_AUDIO_AP_PLAY_QUERY_STATUS_CNF\n");
			break;
		case ID_AP_AUDIO_PLAY_SEEK_REQ:
			logi("MSG: ID_AP_AUDIO_PLAY_SEEK_REQ\n");
			break;
		case ID_AUDIO_AP_PLAY_SEEK_CNF:
			logi("MSG: ID_AUDIO_AP_PLAY_SEEK_CNF\n");
			break;
		case ID_AP_AUDIO_PLAY_SET_VOL_CMD:
			logi("MSG: ID_AP_AUDIO_PLAY_SET_VOL_CMD\n");
			break;
		case ID_AP_HIFI_ENHANCE_START_REQ:
			logi("MSG: ID_AP_HIFI_ENHANCE_START_REQ\n");
			break;
		case ID_HIFI_AP_ENHANCE_START_CNF:
			logi("MSG: ID_HIFI_AP_ENHANCE_START_CNF\n");
			break;
		case ID_AP_HIFI_ENHANCE_STOP_REQ:
			logi("MSG: ID_AP_HIFI_ENHANCE_STOP_REQ\n");
			break;
		case ID_HIFI_AP_ENHANCE_STOP_CNF:
			logi("MSG: ID_HIFI_AP_ENHANCE_STOP_CNF\n");
			break;
		case ID_AP_HIFI_ENHANCE_SET_DEVICE_REQ:
			logi("MSG: ID_AP_HIFI_ENHANCE_SET_DEVICE_REQ\n");
			break;
		case ID_HIFI_AP_ENHANCE_SET_DEVICE_CNF:
			logi("MSG: ID_HIFI_AP_ENHANCE_SET_DEVICE_CNF\n");
			break;
		case ID_AP_AUDIO_ENHANCE_SET_DEVICE_IND:
			logi("MSG: ID_AP_AUDIO_ENHANCE_SET_DEVICE_IND\n");
			break;
		case ID_AP_AUDIO_MLIB_SET_PARA_IND:
			logi("MSG: ID_AP_AUDIO_MLIB_SET_PARA_IND\n");
			break;
		case ID_AP_HIFI_VOICE_RECORD_START_CMD:
			logi("MSG: ID_AP_HIFI_VOICE_RECORD_START_CMD\n");
			break;
		case ID_AP_HIFI_VOICE_RECORD_STOP_CMD:
			logi("MSG: ID_AP_HIFI_VOICE_RECORD_STOP_CMD\n");
			break;
		case ID_AP_VOICEPP_START_REQ:
			logi("MSG: ID_AP_VOICEPP_START_REQ \n");
			break;
		case ID_VOICEPP_AP_START_CNF:
			logi("MSG: ID_VOICEPP_AP_START_CNF \n");
			break;
		case ID_AP_VOICEPP_STOP_REQ:
			logi("MSG: ID_AP_VOICEPP_STOP_REQ \n");
			break;
		case ID_VOICEPP_AP_STOP_CNF:
			logi("MSG: ID_VOICEPP_AP_STOP_CNF \n");
			break;
		case ID_AP_VOICEPP_SET_DEVICE_REQ:
			logi("MSG: ID_AP_VOICEPP_SET_DEVICE_REQ \n");
			break;
		case ID_VOICEPP_AP_SET_DEVICE_CNF:
			logi("MSG: ID_VOICEPP_AP_SET_DEVICE_CNF \n");
			break;
		case ID_AP_VOICEPP_SET_WB_REQ:
			logi("MSG: ID_AP_VOICEPP_SET_WB_REQ \n");
			break;
		case ID_VOICEPP_AP_SET_WB_CNF:
			logi("MSG: ID_VOICEPP_AP_SET_WB_CNF \n");
			break;
		case ID_AP_AUDIO_SET_DTS_ENABLE_CMD:
			logi("MSG: ID_AP_AUDIO_SET_DTS_ENABLE_CMD\n");
			break;
		case ID_AP_AUDIO_SET_DTS_DEV_CMD:
			logi("MSG: ID_AP_AUDIO_SET_DTS_DEV_CMD\n");
			break;
		case ID_AP_AUDIO_SET_DTS_GEQ_CMD:
			logi("MSG: ID_AP_AUDIO_SET_DTS_GEQ_CMD\n");
			break;
		case ID_AP_AUDIO_SET_DTS_GEQ_ENABLE_CMD:
			logi("MSG: ID_AP_AUDIO_SET_DTS_GEQ_ENABLE_CMD\n");
			break;
		default:
			logw("MSG: Not defined msg id: 0x%x\n", msg_id);
			break;
	}
	return;
}

void hifi_write_file_from_memory_regions(char *filename, u32 addr, unsigned int size)
{
	mm_segment_t fs;
	struct file *fp = NULL;
	int file_flag = O_WRONLY | O_CREAT;
	int write_size = 0;
	/* must have the following 2 statement */
	fs = get_fs();
	set_fs(KERNEL_DS);

	fp = filp_open(filename, file_flag, 0777);
	if (IS_ERR(fp)) {
		loge("open file error!\n");
		return;
	}
	logd("size	parameter = %d!\n", size);
	if((write_size = vfs_write(fp, (char *)addr, size, &fp->f_pos)) < 0) {
		loge("read file error!\n");
	}

	logd("write file size = %d \n", write_size);

	/* must have the following 1 statement */
	set_fs(fs);
	filp_close(fp, 0);
}

/*****************************************************************************
 函 数 名  : hifi_misc_async_write
 功能描述  : Hifi MISC 设备异步发送接口，将异步消息发给Hifi，非阻塞接口
 输入参数  :
			 unsigned char *arg  :需要下发的数据buff指针
			 unsigned int len	 :下发的数据长度
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史	   :
  1.日	  期   : 2012年8月1日
	作	  者   : 夏青 00195127
	修改内容   : 新生成函数

*****************************************************************************/
static int hifi_misc_async_write(unsigned char *arg, unsigned int len)
{
	int ret = OK;

	IN_FUNCTION;

	if (NULL == arg) {
		loge("input arg is NULL\n");
		ret = ERROR;
		goto END;
	}

	/*调用核间通信接口发送数据*/
	ret = mailbox_send_msg(MAILBOX_MAILCODE_ACPU_TO_HIFI_MISC, arg, len);
	if (OK != ret) {
		loge("msg send to hifi fail,ret is %d\n", ret);
		ret = ERROR;
		goto END;
	}

END:
	OUT_FUNCTION;
	return ret;
}

/*****************************************************************************
 函 数 名  : hifi_misc_sync_write
 功能描述  : Hifi MISC 设备同步发送接口，将同步消息发给Hifi，阻塞接口
 输入参数  :
			 unsigned char	*buff  :需要下发的数据buff指针
			 unsigned int len	  :下发的数据长度
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史	   :
  1.日	  期   : 2012年8月1日
	作	  者   : 夏青 00195127
	修改内容   : 新生成函数

*****************************************************************************/
static int hifi_misc_sync_write(unsigned char  *buff, unsigned int len)
{
	int ret = OK;

	IN_FUNCTION;

	if (NULL == buff) {
		loge("input arg is NULL\n");
		ret = ERROR;
		goto END;
	}

	INIT_COMPLETION(g_misc_data.completion);

	/*调用核间通信接口发送数据，得到返回值ret*/
	ret = mailbox_send_msg(MAILBOX_MAILCODE_ACPU_TO_HIFI_MISC, buff, len);
	if (OK != ret) {
		loge("msg send to hifi fail,ret is %d\n", ret);
		ret = ERROR;
		goto END;
	}

	ret = wait_for_completion_timeout(&g_misc_data.completion, msecs_to_jiffies(2000));
	g_misc_data.sn++;
	if (unlikely(g_misc_data.sn & 0x10000000)){
		g_misc_data.sn = 0;
	}

	if (!ret) {
		loge("wait completion timeout!\n");
		up(&k3log_dsp_sema);
		ret = ERROR;
		goto END;
	} else {
		ret = OK;
	}

END:
	OUT_FUNCTION;
	return ret;
}

/*****************************************************************************
 函 数 名  : hifi_misc_handle_mail
 功能描述  : Hifi MISC 设备双核通信接收中断处理函数
			约定收到HIIF邮箱消息的首4个字节是MSGID
 输入参数  : void *usr_para			: 注册时传递的参数
			 void *mail_handle			: 邮箱数据参数
			 unsigned int mail_len		: 邮箱数据长度
 输出参数  : 无
 返 回 值  : void
 调用函数  :
 被调函数  :

 修改历史	   :
  1.日	  期   : 2012年8月1日
	作	  者   : 夏青 00195127
	修改内容   : 新生成函数

*****************************************************************************/
static void hifi_misc_handle_mail(void *usr_para, void *mail_handle, unsigned int mail_len)
{
	unsigned long ret_mail			= 0;
	struct recv_request *recv = NULL;
	HIFI_CHN_CMD *cmd_para = NULL;

	IN_FUNCTION;

	if (NULL == mail_handle) {
		loge("mail_handle is NULL\n");
		goto END;
	}

	if (mail_len <= SIZE_CMD_ID) {
		loge("mail_len is less than SIZE_CMD_ID(%d)\n", mail_len);
		goto END;
	}

	recv = (struct recv_request *)kmalloc(sizeof(struct recv_request), GFP_ATOMIC);
	if (NULL == recv)
	{
		loge("recv kmalloc failed\n");
		goto ERR;
	}
	memset(recv, 0, sizeof(struct recv_request));

	/* 设定SIZE */
	recv->rev_msg.mail_buff_len = mail_len;
	/* 分配总的空间 */
	recv->rev_msg.mail_buff = (unsigned char *)kmalloc(SIZE_LIMIT_PARAM, GFP_ATOMIC);
	if (NULL == recv->rev_msg.mail_buff)
	{
		loge("recv->rev_msg.mail_buff kmalloc failed\n");
		goto ERR;
	}
	memset(recv->rev_msg.mail_buff, 0, SIZE_LIMIT_PARAM);

	/* 将剩余内容copy透传到buff中 */
	ret_mail = mailbox_read_msg_data(mail_handle, (unsigned char*)recv->rev_msg.mail_buff, (unsigned long *)&recv->rev_msg.mail_buff_len);
	if ((ret_mail != MAILBOX_OK) || (recv->rev_msg.mail_buff_len <= 0)) {
		loge("Empty point or data length error! ret=0x%x, mail_size: %d\n", (unsigned int)ret_mail, recv->rev_msg.mail_buff_len);
		goto ERR;
	}

	logd("ret_mail=%ld, mail_buff_len=%d, msgID=0x%x\n", ret_mail, recv->rev_msg.mail_buff_len,
		 *((unsigned int *)(recv->rev_msg.mail_buff + mail_len - SIZE_CMD_ID)));

	if (recv->rev_msg.mail_buff_len > mail_len) {
		loge("ReadMailData mail_size(%d) > mail_len(%d)\n", recv->rev_msg.mail_buff_len, mail_len);
		goto ERR;
	}

	/* 约定，前4个字节是cmd_id */
	cmd_para   = (HIFI_CHN_CMD *)(recv->rev_msg.mail_buff + mail_len - SIZE_CMD_ID);
	/* 赋予不同的接收指针，由接收者释放分配空间 */
	if (HIFI_CHN_SYNC_CMD == cmd_para->cmd_type) {
		if (g_misc_data.sn == cmd_para->sn) {
			spin_lock_bh(&g_misc_data.recv_sync_lock);
			list_add_tail(&recv->recv_node, &recv_sync_work_queue_head);
			spin_unlock_bh(&g_misc_data.recv_sync_lock);
			complete(&g_misc_data.completion);
		} else {
			loge("g_misc_data.sn !== cmd_para->sn: %d, %d.\n", g_misc_data.sn, cmd_para->sn);
		}
		goto END;
	} else if ((HIFI_CHN_READNOTICE_CMD == cmd_para->cmd_type) && (ACPU_TO_HIFI_ASYNC_CMD == cmd_para->sn)) {
		if (HIFI_CHN_READNOTICE_CMD == cmd_para->cmd_type) {
			wake_lock_timeout(&g_misc_data.hifi_misc_wakelock, 5*HZ);
		}

		spin_lock_bh(&g_misc_data.recv_proc_lock);
		list_add_tail(&recv->recv_node, &recv_proc_work_queue_head);
		g_misc_data.wait_flag++;
		spin_unlock_bh(&g_misc_data.recv_proc_lock);
		wake_up(&g_misc_data.proc_waitq);
		goto END;
	} else {
		loge("unknown msg comed from hifi \n");
	}

ERR:
	if (recv) {
		if (recv->rev_msg.mail_buff) {
			kfree(recv->rev_msg.mail_buff);
		}
		kfree(recv);
	}

END:
	OUT_FUNCTION;
	return;
}

/*****************************************************************************
 函 数 名  : hifi_dsp_get_input_param
 功能描述  : 获取用户空间入参，并转换为内核空间入参
 输入参数  : usr_para_size，用户空间入参SIZE
			usr_para_addr，用户空间入参地址
 输出参数  : krn_para_size，转换后的内核空间入参SIZE
			krn_para_addr，转换后的内核空间入参地址
 返 回 值  : OK / ERROR
 调用函数  :
 被调函数  :

 修改历史	   :
  1.日	  期   : 2012年3月26日
	作	  者   : s00212991
	修改内容   : 新生成函数

*****************************************************************************/
static int hifi_dsp_get_input_param(unsigned int usr_para_size, void *usr_para_addr,
									unsigned int *krn_para_size, void **krn_para_addr)
{
	void *para_in = NULL;
	unsigned int para_size_in = 0;

	IN_FUNCTION;

	/*获取arg入参*/
	para_size_in = usr_para_size + SIZE_CMD_ID;

	/* 限制分配空间 */
	if (para_size_in > SIZE_LIMIT_PARAM) {
		loge("para_size_in exceed LIMIT(%d/%d)\n", para_size_in, SIZE_LIMIT_PARAM);
		goto ERR;
	}

	para_in = kzalloc(para_size_in, GFP_KERNEL);
	if (NULL == para_in) {
		loge("kzalloc fail\n");
		goto ERR;
	}

	if (NULL != usr_para_addr) {
		if (copy_from_user(para_in , usr_para_addr, usr_para_size)) {
			loge("copy_from_user fail\n");
			goto ERR;
		}
	} else {
		loge("usr_para_addr is null no user data\n");
		goto ERR;
	}

	/* 设置出参 */
	*krn_para_size = para_size_in;
	*krn_para_addr = para_in;

	hifi_misc_msg_info(*(unsigned short*)para_in);

	OUT_FUNCTION;
	return OK;

ERR:
	if (para_in != NULL) {
		kfree(para_in);
		para_in = NULL;
	}

	OUT_FUNCTION;
	return ERROR;
}

/*****************************************************************************
 函 数 名  : hifi_dsp_get_input_param_free
 功能描述  : 释放分配的内核空间
 输入参数  : krn_para_addr，待释放的内核空间地址
 输出参数  : 无
 返 回 值  : OK / ERROR
 调用函数  :
 被调函数  :

 修改历史	   :
  1.日	  期   : 2012年3月26日
	作	  者   : s00212991
	修改内容   : 新生成函数

*****************************************************************************/
static void hifi_dsp_get_input_param_free(void **krn_para_addr)
{
	IN_FUNCTION;

	if (*krn_para_addr != NULL) {
		kfree(*krn_para_addr);
		*krn_para_addr = NULL;
	} else {
		loge("krn_para_addr to free is NULL\n");
	}

	OUT_FUNCTION;
	return;
}

/*****************************************************************************
 函 数 名  : hifi_dsp_get_output_param
 功能描述  : 内核空间出参转换为用户空间出参
 输入参数  : krn_para_size，转换后的内核空间出参SIZE
			krn_para_addr，转换后的内核空间出参地址
 输出参数  : usr_para_size，用户空间出参SIZE
			usr_para_addr，用户空间出参地址
 返 回 值  : OK / ERROR
 调用函数  :
 被调函数  :

 修改历史	   :
  1.日	  期   : 2012年3月26日
	作	  者   : s00212991
	修改内容   : 新生成函数

*****************************************************************************/
static int hifi_dsp_get_output_param(unsigned int krn_para_size, void *krn_para_addr,
									 unsigned int *usr_para_size, void *usr_para_addr)
{
	int ret			= OK;
	void *para_to = NULL;
	unsigned int para_n = 0;

	IN_FUNCTION;

	/* 入参判定 */
	if (NULL == krn_para_addr) {
		loge("krn_para_addr is NULL\n");
		ret = -EINVAL;
		goto END;
	}

	/* 入参判定 */
	if ((NULL == usr_para_addr) || (NULL == usr_para_size)) {
		loge("usr_size_p=0x%x, usr_addr=0x%x\n", (unsigned int)usr_para_size, (unsigned int)usr_para_addr);
		ret = -EINVAL;
		goto END;
	}

	para_to = usr_para_addr;
	para_n = krn_para_size;
	if (para_n > SIZE_LIMIT_PARAM) {
		loge("para_n exceed limit (%d / %d)\n", para_n, SIZE_LIMIT_PARAM);
		ret = -EINVAL;
		goto END;
	}

	if (para_n > *usr_para_size) {
		loge("para_n exceed usr_size(%d / %d)\n", para_n, *usr_para_size);
		ret = -EINVAL;
		goto END;
	}

	/* Copy data from kernel space to user space
		to, from, n */
	ret = copy_to_user(para_to, krn_para_addr, para_n);
	if (OK != ret) {
		loge("copy_to_user fail, ret is %d\n", ret);
		ret = ERROR;
		goto END;
	}

	*usr_para_size = para_n;
	hifi_misc_msg_info(*(unsigned short*)para_to);

END:
	OUT_FUNCTION;
	return ret;
}

/*****************************************************************************
 函 数 名  : hifi_dsp_async_cmd
 功能描述  : Hifi MISC IOCTL异步命令处理函数
 输入参数  : unsigned long arg : ioctl的入参
 输出参数  : 无
 返 回 值  : 成功:OK 失败:BUSY
 调用函数  :
 被调函数  :

 修改历史	   :
  1.日	  期   : 2013年3月18日
	作	  者   : 石旺来 00212991
	修改内容   : 新生成函数

*****************************************************************************/
static int hifi_dsp_async_cmd(unsigned long arg)
{
	int ret = OK;
	struct misc_io_async_param param;
	void *para_krn_in = NULL;
	unsigned int para_krn_size_in = 0;
	HIFI_CHN_CMD *cmd_para = NULL;

	IN_FUNCTION;

	if (copy_from_user(&param,(void*) arg, sizeof(struct misc_io_async_param))) {
		loge("copy_from_user fail.\n");
		ret = ERROR;
		goto END;
	}

	/*获取arg入参*/
	ret = hifi_dsp_get_input_param(param.para_size_in, param.para_in_l,
								   &para_krn_size_in, &para_krn_in);
	if (OK != ret) {
		loge("get ret=%d\n", ret);
		goto END;
	}
	/* add cmd id and sn  */
	cmd_para = (HIFI_CHN_CMD *)(para_krn_in+para_krn_size_in-SIZE_CMD_ID);
	cmd_para->cmd_type = HIFI_CHN_SYNC_CMD;
	cmd_para->sn = ACPU_TO_HIFI_ASYNC_CMD;

	/*邮箱发送至HIFI, 异步*/
	ret = hifi_misc_async_write(para_krn_in, para_krn_size_in);
	if (OK != ret) {
		loge("async_write ret=%d\n", ret);
		goto END;
	}

END:
	hifi_dsp_get_input_param_free(&para_krn_in);
	OUT_FUNCTION;
	return ret;
}

/*****************************************************************************
 函 数 名  : hifi_dsp_sync_cmd
 功能描述  : Hifi MISC IOCTL同步命令处理函数
 输入参数  : unsigned long arg : ioctl的入参
 输出参数  : 无
 返 回 值  : 成功:OK 失败:BUSY
 调用函数  :
 被调函数  :

 修改历史	   :
  1.日	  期   : 2013年3月18日
	作	  者   : 石旺来 00212991
	修改内容   : 新生成函数

*****************************************************************************/
static int hifi_dsp_sync_cmd(unsigned long arg)
{
	int ret = OK;
	struct misc_io_sync_param param;
	void *para_krn_in = NULL;
	unsigned int para_krn_size_in = 0;
	HIFI_CHN_CMD *cmd_para = NULL;
	struct recv_request *recv = NULL;

	IN_FUNCTION;

	if (copy_from_user(&param,(void*) arg, sizeof(struct misc_io_sync_param))) {
		loge("copy_from_user fail.\n");
		ret = ERROR;
		goto END;
	}
	logd("para_size_in=%d\n", param.para_size_in);

	/*获取arg入参*/
	ret = hifi_dsp_get_input_param(param.para_size_in, param.para_in_l,
						&para_krn_size_in, &para_krn_in);
	if (OK != ret) {
		loge("hifi_dsp_get_input_param fail: ret=%d.\n", ret);
		goto END;
	}

	/* add cmd id and sn  */
	cmd_para = (HIFI_CHN_CMD *)(para_krn_in+para_krn_size_in-SIZE_CMD_ID);
	cmd_para->cmd_type = HIFI_CHN_SYNC_CMD;

	cmd_para->sn = g_misc_data.sn;

	/*邮箱发送至HIFI, 同步*/
	ret = hifi_misc_sync_write(para_krn_in, para_krn_size_in);
	if (OK != ret) {
		loge("hifi_misc_sync_write ret=%d\n", ret);
		goto END;
	}

	/*将获得的rev_msg信息填充到出参arg*/
	spin_lock_bh(&g_misc_data.recv_sync_lock);

	if (!list_empty(&recv_sync_work_queue_head)) {
		recv = list_entry(recv_sync_work_queue_head.next, struct recv_request, recv_node);
		ret = hifi_dsp_get_output_param(recv->rev_msg.mail_buff_len- SIZE_CMD_ID, recv->rev_msg.mail_buff,
						&param.para_size_out, param.para_out_l);
		if (OK != ret) {
			loge("get_out ret=%d\n", ret);
		}

		list_del(&recv->recv_node);
		kfree(recv->rev_msg.mail_buff);
		kfree(recv);
		recv = NULL;
	}
	spin_unlock_bh(&g_misc_data.recv_sync_lock);

	if (copy_to_user((void*)arg, &param, sizeof(struct misc_io_sync_param))) {
		loge("copy_to_user fail.\n");
		ret = ERROR;
		goto END;
	}

END:
	/*释放krn入参*/
	hifi_dsp_get_input_param_free(&para_krn_in);

	OUT_FUNCTION;
	return ret;
}

/*****************************************************************************
 函 数 名  : hifi_dsp_get_phys_cmd
 功能描述  : Hifi MISC IOCTL获取物理地址
 输入参数  : unsigned long arg : ioctl的入参
 输出参数  : 无
 返 回 值  : 成功:OK 失败:BUSY
 调用函数  :
 被调函数  :

 修改历史	   :
  1.日	  期   : 2013年3月18日
	作	  者   : 石旺来 00212991
	修改内容   : 新生成函数

*****************************************************************************/
static int hifi_dsp_get_phys_cmd(unsigned long arg)
{
	int ret  =	OK;
	struct misc_io_get_phys_param param;

	IN_FUNCTION;

	if (copy_from_user(&param,(void*) arg, sizeof(struct misc_io_get_phys_param))) {
		loge("copy_from_user fail.\n");
		OUT_FUNCTION;
		return ERROR;
	}

	switch (param.flag)
	{
		case 0:
			param.phys_addr_l= (u32)g_misc_data.hifi_priv_base_phy;
			logd("param.phys_addr=0x%x\n", (unsigned int)param.phys_addr_l);
			break;

		default:
			ret = ERROR;
			loge("invalid flag=%d\n", param.flag);
			break;
	}

	if (copy_to_user((void*)arg, &param, sizeof(struct misc_io_get_phys_param))) {
		loge("copy_to_user fail.\n");
		ret = ERROR;
	}

	OUT_FUNCTION;
	return ret;
}

/*****************************************************************************
 函 数 名  : hifi_dsp_senddata_sync_cmd
 功能描述  : Hifi MISC IOCTL发送数据同步命令处理函数
 输入参数  : unsigned long arg : ioctl的入参
 输出参数  : 无
 返 回 值  : 成功:OK 失败:BUSY
 调用函数  :
 被调函数  :

 修改历史	   :
  1.日	  期   : 2013年3月18日
	作	  者   : 石旺来 00212991
	修改内容   : 新生成函数

*****************************************************************************/
static int hifi_dsp_senddata_sync_cmd(unsigned long arg)
{
	loge("this cmd is not supported by now \n");
	return ERROR;
}

/*****************************************************************************
 函 数 名  : hifi_dsp_test_cmd
 功能描述  : 测试函数
 输入参数  : unsigned long arg : ioctl的入参
 输出参数  : 无
 返 回 值  : 成功:OK 失败:BUSY
 调用函数  :
 被调函数  :

 修改历史	   :
  1.日	  期   : 2013年3月18日
	作	  者   : 石旺来 00212991
	修改内容   : 新生成函数

*****************************************************************************/
static int hifi_dsp_test_cmd(unsigned long arg)
{
	loge("this cmd is not supported by now \n");
	return ERROR;
}

/*****************************************************************************
 函 数 名  : hifi_dsp_wakeup_read_thread
 功能描述  : 唤醒read线程, 返回RESET消息
 输入参数  : unsigned long arg : ioctl的入参
 输出参数  : 无
 返 回 值  : 成功:OK 失败:BUSY
 调用函数  :
 被调函数  :

 修改历史	   :
  1.日	  期   : 2014年4月24日
	作	  者   : 张恩忠 00222844
	修改内容   : 新生成函数

*****************************************************************************/
static int hifi_dsp_wakeup_read_thread(unsigned long arg)
{
	int ret = OK;
	struct recv_request *recv = NULL;
	struct misc_recmsg_param *recmsg = NULL;
	unsigned int wake_cmd = (unsigned int)arg;

	recv = (struct recv_request *)kmalloc(sizeof(struct recv_request), GFP_ATOMIC);
	if (NULL == recv)
	{
		loge("recv kmalloc failed\n");
		return -ENOMEM;
	}
	memset(recv, 0, sizeof(struct recv_request));

	/* 分配总的空间 */
	recv->rev_msg.mail_buff = (unsigned char *)kmalloc(SIZE_LIMIT_PARAM, GFP_ATOMIC);
	if (NULL == recv->rev_msg.mail_buff)
	{
		kfree(recv);
		loge("recv->rev_msg.mail_buff kmalloc failed\n");
		return -ENOMEM;
	}
	memset(recv->rev_msg.mail_buff, 0, SIZE_LIMIT_PARAM);

	recmsg = (struct misc_recmsg_param *)recv->rev_msg.mail_buff;
	recmsg->msgID = ID_AUDIO_AP_PLAY_DONE_IND;
	recmsg->playStatus = (unsigned short)wake_cmd;

	/* 设定SIZE */
	recv->rev_msg.mail_buff_len = sizeof(struct misc_recmsg_param) + SIZE_CMD_ID;

	spin_lock_bh(&g_misc_data.recv_proc_lock);
	list_add_tail(&recv->recv_node, &recv_proc_work_queue_head);
	g_misc_data.wait_flag++;
	spin_unlock_bh(&g_misc_data.recv_proc_lock);

	wake_up(&g_misc_data.proc_waitq);

	return ret;
}

/*****************************************************************************
 函 数 名  : hifi_dsp_write_param
 功能描述  : 将用户态算法参数拷贝到HIFI中
 输入参数  : unsigned long arg : ioctl的入参
 输出参数  : 无
 返 回 值  : 成功:OK 失败:BUSY
 调用函数  :
 被调函数  :

 修改历史	   :
  1.日	  期   : 2013年10月24日
	作	  者   : 侯良军 00215385
	修改内容   : 新生成函数

*****************************************************************************/
int hifi_dsp_write_param(unsigned long arg)
{
	int ret = OK;
	phys_addr_t hifi_param_phy_addr = 0;
	void*		hifi_param_vir_addr = NULL;
	CARM_HIFI_DYN_ADDR_SHARE_STRU* hifi_addr = NULL;
	struct misc_io_sync_param para;

	IN_FUNCTION;

	if (copy_from_user(&para, (void*)arg, sizeof(struct misc_io_sync_param))) {
		loge("copy_from_user fail.\n");
		ret = ERROR;
		goto error1;
	}

	hifi_addr = (CARM_HIFI_DYN_ADDR_SHARE_STRU*)(g_misc_data.hifi_priv_base_virt + HIFI_OFFSET_RUN);
	hifi_param_phy_addr = (phys_addr_t)hifi_addr->uwReserved[0];
	logd("hifi_param_phy_addr = 0x%x\n", (unsigned int)hifi_param_phy_addr);
	if ((hifi_param_phy_addr < HIFI_RUN_LOCATION)
		|| (hifi_param_phy_addr > (HIFI_RUN_LOCATION + HIFI_RUN_SIZE - 1)))
	{
		loge("the addr of write param is invalid: 0x%x. \n", hifi_param_phy_addr);
		ret = INVAILD;
		goto error2;
	}

	hifi_param_vir_addr = (unsigned char*)ioremap(hifi_param_phy_addr, SIZE_PARAM_PRIV);
	if (NULL == hifi_param_vir_addr) {
		loge("hifi_param_vir_addr ioremap fail\n");
		ret = ERROR;
		goto error2;
	}
	logd("hifi_param_vir_addr = 0x%x\n", (unsigned int)hifi_param_vir_addr);

	logd("user addr = 0x%x, size = %d\n", para.para_in_l, para.para_size_in);
	ret = copy_from_user(hifi_param_vir_addr, (void __user *)para.para_in_l, para.para_size_in);
	if ( ret != 0) {
		loge("copy data to hifi error! ret = %d", ret);
	}

error2:
	if (hifi_param_vir_addr != NULL) {
		iounmap(hifi_param_vir_addr);
	}

	put_user(ret, (int __user*)para.para_out_l);

error1:
	OUT_FUNCTION;
	return ret;
}

/*device sys: /sys/devices/amba.0/e804e000.hifidsp*/
typedef struct {
	char level_char;
	unsigned int level_num;
}debug_level_com;
debug_level_com s_debug_level_com[4] = {{'d', 3},{'i', 2},{'w', 1},{'e', 0}};

static unsigned int hifi_get_debug_level_num(char level_char) {
	int i = 0;
	int len = sizeof(s_debug_level_com)/sizeof(s_debug_level_com[0]);

	for (i = 0; i < len; i++) {
		if(level_char == s_debug_level_com[i].level_char) {
			return s_debug_level_com[i].level_num;
		}
	}

	return 2; /*info*/
}

static char hifi_get_debug_level_char(char level_num) {
	int i = 0;
	int len = sizeof(s_debug_level_com)/sizeof(s_debug_level_com[0]);

	for (i = 0; i < len; i++) {
		if(level_num == s_debug_level_com[i].level_num) {
			return s_debug_level_com[i].level_char;
		}
	}

	return 'i'; /*info*/
}

static void hifi_set_dsp_debug_level(unsigned int level) {
	*(unsigned int*)(g_misc_data.hifi_priv_base_virt + (DRV_DSP_UART_LOG_LEVEL - HIFI_BASE_ADDR)) = level;
}

static void hifi_kill_dsp(void) {
	*(unsigned int*)(g_misc_data.hifi_priv_base_virt + (DRV_DSP_KILLME_ADDR - HIFI_BASE_ADDR)) = DRV_DSP_KILLME_VALUE;
}

static ssize_t hifi_debug_level_show(struct device *dev,
									  struct device_attribute *attr, char *buf)
{

	return snprintf(buf, PAGE_SIZE, "debug level: %c\n", hifi_get_debug_level_char(g_misc_data.debug_level));
}

static ssize_t hifi_debug_level_store(struct device *dev,
										struct device_attribute *attr,
										const char *buf, size_t size)
{
	if ((!*buf) || (!strchr("diwe", *buf))) {
		loge("Input param buf is error(valid: d,i,w,e): %s. \n", buf);
		return -EINVAL;
	}

	if (*(buf + 1) && (strcmp(buf + 1, "\n"))) {
		loge("Input param buf is error, last char is not \\n . \n");
		return -EINVAL;
	}

	g_misc_data.debug_level = hifi_get_debug_level_num(*buf);

	return size;
}

static ssize_t hifi_dsp_debug_level_show(struct device *dev,
									  struct device_attribute *attr, char *buf)
{
	return snprintf(buf, PAGE_SIZE, "dsp debug level: %c\n", hifi_get_debug_level_char(g_misc_data.dsp_debug_level));
}

static ssize_t hifi_dsp_debug_level_store(struct device *dev,
										struct device_attribute *attr,
										const char *buf, size_t size)
{
	if ((!*buf) || (strchr("k", *buf))) {
		loge("go to kill hifi. \n");
		hifi_kill_dsp();
		return -EINVAL;
	}

	if ((!*buf) || (!strchr("diwe", *buf))) {
		loge("Input param buf is error(valid: d,i,w,e): %s. \n", buf);
		return -EINVAL;
	}

	if (*(buf + 1) && (strcmp(buf + 1, "\n"))) {
		loge("Input param buf is error, last char is not \\n . \n");
		return -EINVAL;
	}

	g_misc_data.dsp_debug_level = hifi_get_debug_level_num(*buf);
	hifi_set_dsp_debug_level(g_misc_data.dsp_debug_level);

	return size;
}

static ssize_t hifi_dsp_dump_log_show(struct device *dev,
									  struct device_attribute *attr, char *buf)
{
	g_misc_data.force_dump_log = true;
	up(&k3log_dsp_sema);
	return 0;
}

#define S_SYSFS_W (S_IWUSR|S_IWGRP)
/* sysfs attribute */
static DEVICE_ATTR(debuglevel, S_IRUGO | S_SYSFS_W, hifi_debug_level_show, hifi_debug_level_store);
static DEVICE_ATTR(dspdebuglevel, S_IRUGO | S_SYSFS_W, hifi_dsp_debug_level_show, hifi_dsp_debug_level_store);
static DEVICE_ATTR(dspdumplog, S_IRUGO, hifi_dsp_dump_log_show, NULL);

/******************************************************************************
* Function:	 hifi_create_device_file
* Description:	 create sysfs attribute file for device.
* Data Accessed:
* Data Updated:
* Input:		 dev: device attr: device attribute descriptor.
* Output:
* Return:
* Others:
*******************************************************************************/
static int hifi_create_device_file(struct device *dev,
		const struct device_attribute *attr)
{
	BUG_ON(NULL == dev);

	return sysfs_create_file(&dev->kobj, &attr->attr);
}

/******************************************************************************
* Function:	 hifi_remove_device_file
* Description:	 remove sysfs attribute file.
* Data Accessed:
* Data Updated:
* Input:		 dev: device  attr: device attribute descriptor
* Output:
* Return:
* Others:
*******************************************************************************/
static void hifi_remove_device_file(struct device *dev,
		const struct device_attribute *attr)
{
	BUG_ON(NULL == dev);

	sysfs_remove_file(&dev->kobj, &attr->attr);

	return;
}

/******************************************************************************
* Function:	  hifi_create_sysfs
* Description:	  create files of sysfs
* Data Accessed:
* Data Updated:
* Input:		  platform device
* Output:
* Return:
* Others:
*******************************************************************************/
static void hifi_create_sysfs(struct platform_device *dev)
{
	BUG_ON(NULL == dev);

	IN_FUNCTION;

	if (hifi_create_device_file(&dev->dev, &dev_attr_debuglevel)) {
		logi("failed to create debug level file --debuglevel \n");
	}

	if (hifi_create_device_file(&dev->dev, &dev_attr_dspdebuglevel)) {
		logi("failed to create dsp debug level file --dspdebuglevel \n");
	}

	if (hifi_create_device_file(&dev->dev, &dev_attr_dspdumplog)) {
		logi("failed to create dump dsp log file --dspdumplog \n");
	}

	OUT_FUNCTION;

	return;
}

/******************************************************************************
* Function:	  hifi_remove_sysfs
* Description:	  remove files of sysfs
* Data Accessed:
* Data Updated:
* Input:		  platform device
* Output:
* Return:
* Others:
*******************************************************************************/
static void hifi_remove_sysfs(struct platform_device *dev)
{
	BUG_ON(NULL == dev);

	IN_FUNCTION;

	hifi_remove_device_file(&dev->dev, &dev_attr_debuglevel);

	OUT_FUNCTION;

	return;
}

/*****************************************************************************
 函 数 名  : hifi_misc_open
 功能描述  : Hifi MISC 设备打开操作
 输入参数  : struct inode *finode  :设备节点信息
			 struct file *fd	:对应设备fd
 输出参数  : 无
 返 回 值  : 成功:OK 失败:BUSY
 调用函数  :
 被调函数  :

 修改历史	   :
  1.日	  期   : 2012年8月1日
	作	  者   : 夏青 00195127
	修改内容   : 新生成函数

*****************************************************************************/
static int hifi_misc_open(struct inode *finode, struct file *fd)
{
	return OK;
}

/*****************************************************************************
 函 数 名  : hifi_misc_release
 功能描述  : Hifi MISC 设备不再使用时释放函数
 输入参数  : struct inode *finode  :设备节点信息
			 struct file *fd	:对应设备fd
 输出参数  : 无
 返 回 值  : OK
 调用函数  :
 被调函数  :

 修改历史	   :
  1.日	  期   : 2012年8月1日
	作	  者   : 夏青 00195127
	修改内容   : 新生成函数

*****************************************************************************/
static int hifi_misc_release(struct inode *finode, struct file *fd)
{
	return OK;
}

/*****************************************************************************
 函 数 名  : hifi_misc_ioctl
 功能描述  : Hifi MISC 设备提供给上层与设备交互的控制通道接口
 输入参数  : struct file *fd  :对应fd
			 unsigned int cmd	:cmd类型
			 unsigned long arg	:上层传下来的buff地址
 输出参数  : 无
 返 回 值  : 成功:OK 失败:ERROR
 调用函数  :
 被调函数  :

 修改历史	   :
  1.日	  期   : 2012年8月1日
	作	  者   : 夏青 00195127
	修改内容   : 新生成函数

*****************************************************************************/
static long hifi_misc_ioctl(struct file *fd,
							unsigned int cmd,
							unsigned long arg)
{
	int ret = OK;

	IN_FUNCTION;

	if (!(void __user *)arg) {
		loge("Input buff is NULL\n");
		OUT_FUNCTION;
		return (long)ERROR;
	}

	if (!g_misc_data.dsp_loaded) {
		loge("hifi isn't loaded, errno: 0x%x .\n" , g_misc_data.dsp_loaded_sign);
		return (long)ERROR;
	}

#ifdef CHECK_HIFI_MEM
	OUT_FUNCTION;
	return OK;
#endif

	/*cmd命令处理*/
	switch(cmd) {
		case HIFI_MISC_IOCTL_ASYNCMSG/*异步命令*/:
			logd("ioctl: HIFI_MISC_IOCTL_ASYNCMSG\n");
			ret = hifi_dsp_async_cmd(arg);
			break;

		case HIFI_MISC_IOCTL_SYNCMSG/*同步命令*/:
			logd("ioctl: HIFI_MISC_IOCTL_SYNCMSG\n");
			ret = down_interruptible(&g_misc_sem);
			if (ret != 0)
			{
				loge("SYNCMSG wake up by other irq err:%d\n",ret);
				goto out;
			}
			ret = hifi_dsp_sync_cmd(arg);
			up(&g_misc_sem);
			break;

		case HIFI_MISC_IOCTL_SENDDATA_SYNC/*发送接收数据*/:
			logd("ioctl: HIFI_MISC_IOCTL_SENDDATA_SYNC\n");
			ret = down_interruptible(&g_misc_sem);
			if (ret != 0)
			{
				loge("SENDDATA_SYNC wake up by other irq err:%d\n",ret);
				goto out;
			}
			ret = hifi_dsp_senddata_sync_cmd(arg); /*not used by now*/
			up(&g_misc_sem);
			break;

		case HIFI_MISC_IOCTL_GET_PHYS/*获取*/:
			logd("ioctl: HIFI_MISC_IOCTL_GET_PHYS\n");
			ret = hifi_dsp_get_phys_cmd(arg);
			break;

		case HIFI_MISC_IOCTL_TEST/*测试接口*/:
			logd("ioctl: HIFI_MISC_IOCTL_TEST\n");
			ret = hifi_dsp_test_cmd(arg);
			break;

		case HIFI_MISC_IOCTL_WRITE_PARAMS : /* write algo param to hifi*/
			ret = hifi_dsp_write_param(arg);
			break;

		case HIFI_MISC_IOCTL_DUMP_MP3_DATA:/*DUMP MP3源数据*/
			{
				unsigned char* hifi_mp3_data_virt = (unsigned char*)ioremap(HIFI_MUSIC_DATA_LOCATION, HIFI_MUSIC_DATA_SIZE);
				if (NULL == hifi_mp3_data_virt) {
					loge("hifi mp3 data ioremap Error!\n");
					ret = (long)ERROR;
					break;
				}
				logd("ioctl: HIFI_MISC_IOCTL_DUMP_MP3_DATA\n");
				hifi_write_file_from_memory_regions(FILE_NAME_DUMP_MUSIC_DATA,
					((u32)(hifi_mp3_data_virt) + HIFI_OFFSET_MUSIC_DATA),
					arg);
				iounmap(hifi_mp3_data_virt);
				break;
			}
		case HIFI_MISC_IOCTL_DUMP_HIFI:
			logi("ioctl: HIFI_MISC_IOCTL_DUMP_HIFI\n");
			ret = hifi_get_dmesg(arg);
			break;

		case HIFI_MISC_IOCTL_WAKEUP_THREAD:
			logi("ioctl: HIFI_MISC_IOCTL_WAKEUP_THREAD\n");
			ret = hifi_dsp_wakeup_read_thread(arg);
			break;

		default:
			/*打印无该CMD类型*/
			ret = (long)ERROR;
			loge("ioctl: Invalid CMD =0x%x\n", cmd);
			break;
	}
out:
	OUT_FUNCTION;
	return (long)ret;
}

static int hifi_misc_mmap(struct file *file, struct vm_area_struct *vma)
{
	int ret = OK;
	unsigned long phys_page_addr = 0;
	unsigned long size = 0;


	IN_FUNCTION;

	phys_page_addr = (u32)g_misc_data.hifi_priv_base_phy >> PAGE_SHIFT;
	size = ((unsigned long)vma->vm_end - (unsigned long)vma->vm_start);
	logd("vma=0x%x\n", (unsigned int)vma);
	logd("size=0x%x, vma->vm_start=0x%x, end=0x%x\n", ((unsigned int)vma->vm_end - (unsigned int)vma->vm_start),
		 (unsigned int)vma->vm_start, (unsigned int)vma->vm_end);
	logd("phys_page_addr=0x%x\n", (unsigned int)phys_page_addr);

	vma->vm_page_prot = PAGE_SHARED;
	vma->vm_page_prot = pgprot_noncached(vma->vm_page_prot);

	if(size > HIFI_MUSIC_DATA_SIZE) {
		size = HIFI_MUSIC_DATA_SIZE;
	}

	ret = remap_pfn_range(vma,
						  vma->vm_start,
						  phys_page_addr,
						  size,
						  vma->vm_page_prot);
	if(ret != 0) {
		loge("remap_pfn_range ret=%d\n", ret);
		ret = ERROR;
	}

	OUT_FUNCTION;
	return ret;
}

/*****************************************************************************
 函 数 名  : hifi_misc_proc_read
 功能描述  : 用于将Hifi MISC 设备接收Hifi的消息/数据通过文件的方式递交给用户
			 态
 输入参数  : char *pg	:系统自动填充的用以填充数据的buff，为系统申请的一页
			 char**start  :指示读文件的起始位置，page的偏移量
			 off_t off	  :读文件时page的偏移，当*start存在时，
						   off会被系统忽略而认为*start就是off
			 int count	  :表示读多少字节
			 int *eof	  :读动作是否停止下发标志
			 void *data   :保留为驱动内部使用
 输出参数  : 无
 返 回 值  : 尚未读取部分的长度,如果长度大于4K则返回ERROR
 调用函数  :
 被调函数  :

 修改历史	   :
  1.日	  期   : 2012年8月1日
	作	  者   : 夏青 00195127
	修改内容   : 新生成函数

*****************************************************************************/
static ssize_t hifi_misc_proc_read(struct file *file, char __user *buf,
								   size_t count, loff_t *ppos)
{
	int len = 0, ret = OK;
	struct recv_request *recv = NULL;
	struct misc_recmsg_param *recmsg = NULL;

	IN_FUNCTION;

	if (!g_misc_data.dsp_loaded) {
		loge("hifi isn't loaded, errno: 0x%x .\n" , g_misc_data.dsp_loaded_sign);
		return 0;
	}

	/*等待读信号量*/
	logi("go to wait_event_interruptible.\n");
	ret = wait_event_interruptible(g_misc_data.proc_waitq, g_misc_data.wait_flag!=0);
	if (ret) {
		loge("wait event interruptible fail, 0x%x.\n", ret);
		OUT_FUNCTION;
		return -EBUSY;
	}

	logi("wait_event_interruptible success.\n");

	spin_lock_bh(&g_misc_data.recv_proc_lock);

	if (likely(g_misc_data.wait_flag > 0)) {
		g_misc_data.wait_flag--;
	}

	if (!list_empty(&recv_proc_work_queue_head)) {
		logi("queue is not null.\n");
		recv = list_entry(recv_proc_work_queue_head.next, struct recv_request, recv_node);
		if (recv) {
			len = recv->rev_msg.mail_buff_len;

			if (unlikely(len >= PAGE_MAX_SIZE)) {
				loge("buff size is invalid: %d(>= 4K or <=8)\n", len);
				ret = (int)ERROR;
			} else {
				recmsg = (struct misc_recmsg_param*)recv->rev_msg.mail_buff;
				logi("msgid: 0x%x, play status(0 - done normal, 1 - done complete, 2 -- done abnormal, 3 -- reset): %d.\n", recmsg->msgID, recmsg->playStatus);
				/*将数据写到page中*/
				logi("go to copy_to_user.\n");
				len = copy_to_user(buf, recv->rev_msg.mail_buff, (recv->rev_msg.mail_buff_len - SIZE_CMD_ID));
				logi("copy_to_user success.\n");
				ret = len;
			}

			list_del(&recv->recv_node);
			kfree(recv->rev_msg.mail_buff);
			kfree(recv);
			recv = NULL;
		} else {
			loge("recv is null.\n");
		}
	} else {
		loge("queue is null.\n");
	}

	spin_unlock_bh(&g_misc_data.recv_proc_lock);

	OUT_FUNCTION;
	return ret;
}

static const struct file_operations hifi_misc_fops = {
	.owner			= THIS_MODULE,
	.open			= hifi_misc_open,
	.release		= hifi_misc_release,
	.unlocked_ioctl = hifi_misc_ioctl,
	.mmap			= hifi_misc_mmap,
};

static struct miscdevice hifi_misc_device = {
	.minor	= MISC_DYNAMIC_MINOR,
	.name	= "hifi_misc",
	.fops	= &hifi_misc_fops,
};

static const struct file_operations hifi_proc_fops = {
	.owner = THIS_MODULE,
	.read = hifi_misc_proc_read,
};

static void hifi_misc_proc_init( void )
{
	struct proc_dir_entry * entry ;
	struct proc_dir_entry * hifi_misc_dir;

	hifi_misc_dir = proc_mkdir("hifidsp", NULL);
	if (hifi_misc_dir == NULL) {
		loge("Unable to create /proc/hifidsp directory.\n");
		return ;
	}

	/* Creating read/write "status" entry */
	entry = proc_create("hifi", S_IRUSR|S_IRGRP|S_IROTH, hifi_misc_dir, &hifi_proc_fops);
	if (entry == NULL) {
		remove_proc_entry("dsp", 0);
		loge("Unable to create /proc/hifidsp/hifi entry.\n");
		return ;
	}
}


#ifdef CONFIG_PM
static int hifi_sr_event(struct notifier_block *this,
		unsigned long event, void *ptr) {
	switch (event) {
	case PM_POST_HIBERNATION:
	case PM_POST_SUSPEND:
		logi("resume +\n");
		atomic_set(&hifi_in_suspend, 0);
		logi("resume -\n");
		break;

	case PM_HIBERNATION_PREPARE:
	case PM_SUSPEND_PREPARE:
		logi("suspend +\n");
		atomic_set(&hifi_in_suspend, 1);
		while (1) {
			if (atomic_read(&hifi_in_saving))
				msleep(100);
			else
				break;
		}
		logi("suspend -\n");
		break;
	default:
		return NOTIFY_DONE;
	}
	return NOTIFY_OK;
}
#endif /* CONFIG_PM */

static int hifi_reboot_notifier(struct notifier_block *nb,
		unsigned long foo, void *bar)
{
	logi("reboot +\n");
	atomic_set(&hifi_in_suspend, 1);
	while (1) {
		if (atomic_read(&hifi_in_saving))
			msleep(100);
		else
			break;
	}
	logi("reboot -\n");

	return 0;
}

static bool hifi_check_img_loaded(void)
{
	bool dsp_loaded = false;

	unsigned int* img_loaded = (unsigned int*)ioremap(DRV_DSP_LOADED_INDICATE, 0x4);
	if (NULL == img_loaded) {
		loge("remap hifi img loaded fail.\n");
		g_misc_data.dsp_loaded_sign = 0xffffffff;
		return false;
	}
	g_misc_data.dsp_loaded_sign = *img_loaded;

	if (0xA5A55A5A == g_misc_data.dsp_loaded_sign) {
		loge("hifi img is not be loaded.\n");
	} else if (g_misc_data.dsp_loaded_sign > 0) {
		loge("hifi img is loaded fail: 0x%x.\n", g_misc_data.dsp_loaded_sign);
	} else {
		logi("hifi img be loaded.\n");
		dsp_loaded = true;
	}

	iounmap(img_loaded);

	return dsp_loaded;
}

bool hifi_is_loaded(void)
{
    return g_misc_data.dsp_loaded;
}
EXPORT_SYMBOL(hifi_is_loaded);

/*****************************************************************************
 函 数 名  : hifi_misc_probe
 功能描述  : Hifi MISC设备探测注册函数
 输入参数  : struct platform_device *pdev
 输出参数  : 无
 返 回 值  : 成功:OK 失败:ERROR
 调用函数  :
 被调函数  :

 修改历史	   :
  1.日	  期   : 2012年8月1日
	作	  者   : 夏青 00195127
	修改内容   : 新生成函数

*****************************************************************************/
static int hifi_misc_probe (struct platform_device *pdev)
{
	int ret = OK;

	struct temp_hifi_cmd tmp_msg;
	struct misc_io_async_param tmp_async_msg;

	IN_FUNCTION;

	memset(&g_misc_data, 0, sizeof(struct hifi_misc_priv));

	g_misc_data.first_dump_log = true;

	g_misc_data.debug_level = 2; /*info level*/
	g_misc_data.dsp_debug_level = 2; /*info level*/
    g_misc_data.dev = &pdev->dev;
	g_misc_data.dsp_time_stamp = (unsigned int*)ioremap(SYS_TIME_STAMP_REG, 0x4);
	if (NULL == g_misc_data.dsp_time_stamp) {
		printk("time stamp reg ioremap Error!\n");//can't use logx
		goto ERR;
	}

	logi("hifi pdev name[%s]\n", pdev->name);

#ifdef CONFIG_PM
	/* Register to get PM events */
	hifi_sr_nb.notifier_call = hifi_sr_event;
	hifi_sr_nb.priority = -1;
	if (register_pm_notifier(&hifi_sr_nb)) {
		printk(KERN_ERR "%s: Failed to register for PM events\n",
			__func__);
		ret = -1;
		goto ERR;
	}
#endif

	hifi_reboot_nb.notifier_call = hifi_reboot_notifier;
	hifi_reboot_nb.priority = -1;
	(void)register_reboot_notifier(&hifi_reboot_nb);

	ret = misc_register(&hifi_misc_device);
	if (OK != ret) {
		loge("hifi misc device register fail,ERROR is %d\n", ret);
		return ERROR;
	}

	hifi_misc_proc_init();

	g_misc_data.hifi_priv_base_virt = (unsigned char*)ioremap(HIFI_BASE_ADDR, (HIFI_SIZE - HIFI_IMAGE_SIZE));
	if (NULL == g_misc_data.hifi_priv_base_virt) {
		loge("hifi Addr ioremap Error!\n");
		goto ERR;
	}
	g_misc_data.hifi_priv_base_phy = (unsigned char*)HIFI_MUSIC_DATA_LOCATION;
	g_misc_data.dsp_panic_mark = (unsigned int*)(g_misc_data.hifi_priv_base_virt + (DRV_DSP_PANIC_MARK - HIFI_BASE_ADDR));

	g_misc_data.dsp_bin_addr = (char*)(g_misc_data.hifi_priv_base_virt + (HIFI_RUN_LOCATION - HIFI_BASE_ADDR));
	g_misc_data.dsp_exception_no = (unsigned int*)(g_misc_data.hifi_priv_base_virt + (DRV_DSP_EXCEPTION_NO - HIFI_BASE_ADDR));
	g_misc_data.dsp_log_cur_addr = (unsigned int*)(g_misc_data.hifi_priv_base_virt + (DRV_DSP_UART_TO_MEM_CUR_ADDR - HIFI_BASE_ADDR));;
	g_misc_data.dsp_log_addr = NULL;

	*(g_misc_data.dsp_exception_no) = ~0; /*清除hifi异常标志，也会将上一次的异常清除掉，但可以避免误报*/
	g_misc_data.pre_exception_no = ~0; /*初始化上次异常标志*/

	g_dsp_dump_info[NORMAL_BIN].data_addr = g_misc_data.dsp_bin_addr;
	g_dsp_dump_info[PANIC_BIN].data_addr  = g_misc_data.dsp_bin_addr;

	hifi_set_dsp_debug_level(g_misc_data.dsp_debug_level);

	/*初始化接受信号量*/
	spin_lock_init(&g_misc_data.recv_sync_lock);
	spin_lock_init(&g_misc_data.recv_proc_lock);

	/*初始化同步信号量*/
	init_completion(&g_misc_data.completion);
	sema_init(&g_misc_data.dsp_dump_sema, 1);

	/*初始化读文件信号量*/
	init_waitqueue_head(&g_misc_data.proc_waitq);
	g_misc_data.wait_flag = 0;
	g_misc_data.sn = 0;

	wake_lock_init(&g_misc_data.hifi_misc_wakelock,WAKE_LOCK_SUSPEND, "hifi_wakelock");

	hifi_create_sysfs(pdev);

	ret = DRV_IPCIntInit();
	if (OK != ret) {
		loge("hifi ipc init fail\n");
		goto ERR;
	}
	ret = (int)mailbox_init();
	if (OK != ret) {
		loge("hifi mailbox init fail\n");
		goto ERR;
	}

	/*注册双核通信处理函数*/
	ret = mailbox_reg_msg_cb(MAILBOX_MAILCODE_HIFI_TO_ACPU_MISC, (mb_msg_cb)hifi_misc_handle_mail, NULL);
	if (OK != ret) {
		loge("hifi mailbox handle func register fail\n");
		goto ERR;
	}

	tmp_msg.msgID = ID_AP_AUDIO_PLAY_WAKEUPTHREAD_REQ;
	tmp_msg.value = 1;
	tmp_async_msg.para_in_l = (void*)&tmp_msg;
	tmp_async_msg.para_size_in = sizeof(struct temp_hifi_cmd);

	g_misc_data.dsp_loaded = hifi_check_img_loaded();

	/*系统初始化时，需要先启动一次hifi，确保modem与hifi通讯正常*/
	if (g_misc_data.dsp_loaded) {
		ret = (int)mailbox_send_msg(MAILBOX_MAILCODE_ACPU_TO_HIFI_MISC, &tmp_async_msg, tmp_async_msg.para_size_in);
		if (OK != ret) {
			loge("msg send to hifi fail, ret is %d\n", ret);
			goto ERR;
		}
	} else {
		loge("hifi isn't loaded, errno: 0x%x .\n" , g_misc_data.dsp_loaded_sign);
	}

	g_misc_data.kdumpdsp_task = kthread_create(hifi_dump_dsp_thread, 0, "dspdumplog");
	if (IS_ERR(g_misc_data.kdumpdsp_task)) {
		loge("creat hifi dump log thread fail.\n");
		goto ERR;
	}
	wake_up_process(g_misc_data.kdumpdsp_task);

	OUT_FUNCTION;
	return OK;

ERR:
	if (NULL != g_misc_data.hifi_priv_base_virt) {
		iounmap(g_misc_data.hifi_priv_base_virt);
	}

	if (NULL != g_misc_data.dsp_time_stamp) {
		iounmap(g_misc_data.dsp_time_stamp);
	}

	hifi_remove_sysfs(pdev);
	(void)misc_deregister(&hifi_misc_device);

	OUT_FUNCTION;
	return ERROR;
}

/*****************************************************************************
 函 数 名  : hifi_misc_remove
 功能描述  : Hifi MISC 设备移除
 输入参数  : struct platform_device *pdev
 输出参数  : 无
 返 回 值  : OK
 调用函数  :
 被调函数  :

 修改历史	   :
  1.日	  期   : 2012年8月1日
	作	  者   : 夏青 00195127
	修改内容   : 新生成函数

*****************************************************************************/
static int hifi_misc_remove(struct platform_device *pdev)
{
	IN_FUNCTION;

	up(&g_misc_data.dsp_dump_sema);
	kthread_stop(g_misc_data.kdumpdsp_task);

	if (NULL != g_misc_data.hifi_priv_base_virt) {
		iounmap(g_misc_data.hifi_priv_base_virt);
	}

	if (NULL != g_misc_data.dsp_time_stamp) {
		iounmap(g_misc_data.dsp_time_stamp);
	}

	if (NULL != g_misc_data.dsp_log_addr) {
		iounmap(g_misc_data.dsp_log_addr);
	}

#ifdef CONFIG_PM
	/* Unregister for PM events */
	unregister_pm_notifier(&hifi_sr_nb);
#endif
	unregister_reboot_notifier(&hifi_reboot_nb);

	hifi_remove_sysfs(pdev);

	/* misc deregister*/
	(void)misc_deregister(&hifi_misc_device);

	OUT_FUNCTION;
	return OK;
}

static const struct of_device_id k3_hifidsp_match_table[] = {
	{
		.compatible = DTS_COMP_HIFIDSP_NAME,
		.data = NULL,
	},
	{}
};
MODULE_DEVICE_TABLE(of, k3_hifidsp_match_table);

static struct platform_driver hifi_misc_driver = {
	.driver =
	{
		.name  = "hifi_dsp_misc",
		.owner = THIS_MODULE,
		.of_match_table = of_match_ptr(k3_hifidsp_match_table),
	},
	.probe	= hifi_misc_probe,
	.remove = hifi_misc_remove,
};

void hifi_dump_panic_log(void)
{
	if (!g_misc_data.dsp_loaded) {
		loge("hifi isn't loaded, errno: 0x%x .\n" , g_misc_data.dsp_loaded_sign);
		return;
	}
	up(&k3log_dsp_sema);
}

int hifi_send_msg(unsigned long mailcode, void *data, unsigned long length)
{
	if (g_misc_data.dsp_loaded) {
		return (int)mailbox_send_msg(mailcode, data, length);
	}

	loge("hifi isn't loaded, errno: 0x%x .\n" , g_misc_data.dsp_loaded_sign);
	return -1;
}
EXPORT_SYMBOL(hifi_dump_panic_log);
EXPORT_SYMBOL(hifi_send_msg);

module_platform_driver(hifi_misc_driver);
MODULE_DESCRIPTION("hifi driver");
MODULE_LICENSE("GPL");

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

