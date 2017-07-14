/*
 * hifi om.
 *
 * Copyright (c) 2013 Hisilicon Technologies CO., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/kernel.h>
#include <linux/proc_fs.h>
#include <linux/kthread.h>
#include <linux/semaphore.h>
#include <linux/platform_device.h>
#include <linux/rtc.h>
#include <linux/syscalls.h>
#include <linux/vmalloc.h>

#include <asm/memory.h>
#include <asm/types.h>
#include <asm/io.h>

#include <linux/time.h>
#include <linux/timex.h>
#include <linux/rtc.h>

#ifdef PLATFORM_HI6XXX
#include <linux/hisi/util.h>
#endif

#include "audio_hifi.h"
#include "hifi_lpp.h"
#include "hifi_om.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#define HI_DECLARE_SEMAPHORE(name) \
	struct semaphore name = __SEMAPHORE_INITIALIZER(name, 0)
HI_DECLARE_SEMAPHORE(hifi_log_sema);

struct hifi_om_s g_om_data;

static struct proc_dir_entry *hifi_debug_dir = NULL;
#ifdef PLATFORM_HI6XXX
extern unsigned int himntn_hifi_resetlog;
#endif
#define MAX_LEVEL_STR_LEN 32

#ifdef PLATFORM_HI3XXX
#ifdef CONFIG_HISI_RDR
#include <linux/huawei/rdr.h>
#endif
extern u32 rdr_nv_get_value(enum rdr_nv_e nv_option);
#define UNCONFIRM_ADDR (0)
static struct hifi_dsp_dump_info s_dsp_dump_info[] = {
	{DSP_NORMAL, DUMP_DSP_LOG, FILE_NAME_DUMP_DSP_LOG, UNCONFIRM_ADDR, (DRV_DSP_UART_TO_MEM_SIZE-DRV_DSP_UART_TO_MEM_RESERVE_SIZE)},
	{DSP_NORMAL, DUMP_DSP_BIN, FILE_NAME_DUMP_DSP_BIN, UNCONFIRM_ADDR, HIFI_RUN_SIZE},
	{DSP_PANIC,  DUMP_DSP_LOG, FILE_NAME_DUMP_DSP_PANIC_LOG, UNCONFIRM_ADDR, (DRV_DSP_UART_TO_MEM_SIZE-DRV_DSP_UART_TO_MEM_RESERVE_SIZE)},
	{DSP_PANIC,  DUMP_DSP_BIN, FILE_NAME_DUMP_DSP_PANIC_BIN, UNCONFIRM_ADDR, HIFI_RUN_SIZE},
	{DSP_PANIC,  DUMP_DSP_BIN, FILE_NAME_DUMP_DSP_OCRAM_BIN, UNCONFIRM_ADDR, HIFI_IMAGE_OCRAMBAK_SIZE},
	{DSP_PANIC,  DUMP_DSP_BIN, FILE_NAME_DUMP_DSP_TCM_BIN,	 UNCONFIRM_ADDR, HIFI_IMAGE_TCMBAK_SIZE},
};

static void hifi_get_time_stamp(char *timestamp_buf, unsigned int len)
{
	struct timeval tv = {0};
	struct rtc_time tm = {0};

	BUG_ON(NULL == timestamp_buf);

	memset(&tv, 0, sizeof(struct timeval));
	memset(&tm, 0, sizeof(struct rtc_time));

	do_gettimeofday(&tv);
	tv.tv_sec -= sys_tz.tz_minuteswest * 60;
	rtc_time_to_tm(tv.tv_sec, &tm);

	snprintf(timestamp_buf, len, "%04d%02d%02d%02d%02d%02d",
		tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday,
		tm.tm_hour, tm.tm_min, tm.tm_sec);

	return;
}

static int hifi_create_dir(char *path)
{
	int fd = -1;

	fd = sys_access(path, 0);
	if (0 != fd) {
		logi("need create dir %s.\n", path);
		fd	= sys_mkdir(path, 0770);
		if (fd < 0) {
			loge("create dir %s fail, ret: %d.\n", path, fd);
			return fd;
		}
		logi("create dir %s successed, fd: %d.\n", path, fd);
	}

	return 0;
}

int hifi_get_dmesg(unsigned long arg)
{
	int ret = OK;
	struct misc_io_dump_buf_param dump_info;
	void * dump_info_user_buf = NULL;

	unsigned int len = (unsigned int)(*g_om_data.dsp_log_cur_addr) - (DRV_DSP_UART_TO_MEM + DRV_DSP_UART_TO_MEM_RESERVE_SIZE);

	if (len > (DRV_DSP_UART_TO_MEM_SIZE - DRV_DSP_UART_TO_MEM_RESERVE_SIZE))
	{
		loge("len is larger: %d.\n", len);
		return 0;
	}

	if (copy_from_user(&dump_info, (void*)arg, sizeof(struct misc_io_dump_buf_param))) {
		loge("copy_from_user fail.\n");
		return 0;
	}

	g_om_data.dsp_log_addr = (char*)ioremap_wc(DRV_DSP_UART_TO_MEM, DRV_DSP_UART_TO_MEM_SIZE);
	if (NULL == g_om_data.dsp_log_addr) {
		loge("dsp log ioremap_wc Error.\n");
		return 0;
	}

	s_dsp_dump_info[0].data_addr = g_om_data.dsp_log_addr + DRV_DSP_UART_TO_MEM_RESERVE_SIZE;

	dump_info_user_buf = INT_TO_ADDR(dump_info.user_buf_l, dump_info.user_buf_h);
	logi("get msg: len:%d from:%p to:%p.\n", len, s_dsp_dump_info[0].data_addr, dump_info_user_buf);

	ret = copy_to_user(dump_info_user_buf, s_dsp_dump_info[0].data_addr, len);
	if (OK != ret) {
		loge("copy_to_user fail, ret is %d.\n", ret);
		len -= ret;
	}

	if (0 == dump_info.buf_size)
	{
		*g_om_data.dsp_log_cur_addr = DRV_DSP_UART_TO_MEM + DRV_DSP_UART_TO_MEM_RESERVE_SIZE;
		memset(s_dsp_dump_info[0].data_addr, 0, s_dsp_dump_info[0].data_len);
	}

	if(g_om_data.dsp_log_addr) {
		iounmap(g_om_data.dsp_log_addr);
		g_om_data.dsp_log_addr = NULL;
	}
	return (int)len;
}

static void hifi_dump_dsp(DUMP_DSP_INDEX index)
{
	int ret = 0;

	mm_segment_t fs = 0;
	struct file *fp = NULL;
	int file_flag = O_RDWR;
	struct kstat file_stat;
	int write_size = 0;
	unsigned int err_no = 0xFFFFFFFF;

	char tmp_buf[64] = {0};
	unsigned long tmp_len = 0;
	struct rtc_time cur_tm;
	struct timespec now;

	char  path_name[HIFI_DUMP_FILE_NAME_MAX_LEN] = {0};
	char* file_name		= s_dsp_dump_info[index].file_name;
	char* data_addr		= NULL;
	unsigned int data_len = s_dsp_dump_info[index].data_len;

	char* is_panic		= "i'm panic.\n";
	char* is_exception	= "i'm exception.\n";
	char* not_panic		= "i'm ok.\n";

	if ((index != NORMAL_LOG) && (index != PANIC_LOG) && g_om_data.is_watchdog_coming) {
		logi("watchdog is coming,so don't dump %s\n", file_name);
		return;
	}

	memset(path_name, 0, HIFI_DUMP_FILE_NAME_MAX_LEN);

	if (rdr_nv_get_value(RDR_NV_HIFI) != 1) {
		loge("do not save hifi log in nv config \n");
		return;
	}

	if (down_interruptible(&g_om_data.dsp_dump_sema) < 0) {
		loge("acquire the semaphore error.\n");
		return;
	}

	IN_FUNCTION;

	hifi_get_log_signal();

	g_om_data.dsp_log_addr = (char*)ioremap_wc(DRV_DSP_UART_TO_MEM, DRV_DSP_UART_TO_MEM_SIZE);
	if (NULL == g_om_data.dsp_log_addr) {
		loge("dsp log ioremap_wc fail.\n");
		goto END;
	}

	s_dsp_dump_info[NORMAL_LOG].data_addr = g_om_data.dsp_log_addr + DRV_DSP_UART_TO_MEM_RESERVE_SIZE;
	s_dsp_dump_info[PANIC_LOG].data_addr  = g_om_data.dsp_log_addr + DRV_DSP_UART_TO_MEM_RESERVE_SIZE;

	if (index == OCRAM_BIN)
	{
		s_dsp_dump_info[index].data_addr = g_om_data.dsp_ocram_bin_addr;
	}
	if (index == TCM_BIN)
	{
		s_dsp_dump_info[index].data_addr = g_om_data.dsp_tcm_bin_addr;
	}

	if (NULL == s_dsp_dump_info[index].data_addr) {
		loge("dsp log ioremap_wc fail.\n");
		goto END;
	}

	data_addr = s_dsp_dump_info[index].data_addr;

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

	snprintf(path_name, HIFI_DUMP_FILE_NAME_MAX_LEN, "%s%s", HIFI_LOG_PATH, file_name);

	ret = vfs_stat(path_name, &file_stat);
	if (ret < 0) {
		logi("there isn't a dsp log file:%s, and need to create.\n", path_name);
		file_flag |= O_CREAT;
	}

	fp = filp_open(path_name, file_flag, 0660);
	if (IS_ERR(fp)) {
		loge("open file fail: %s.\n", path_name);
		fp = NULL;
		goto END;
	}

	/*write from file start*/
	vfs_llseek(fp, 0, SEEK_SET);

	/*write file head*/
	if (DUMP_DSP_LOG == s_dsp_dump_info[index].dump_type) {
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
		err_no = (unsigned int)(*(g_om_data.dsp_exception_no));
		if (err_no != 0xFFFFFFFF) {
			tmp_len = sprintf(tmp_buf, "the exception no: %u.\n", err_no);
		} else {
			tmp_len = sprintf(tmp_buf, "%s", "hifi is fine, just dump log.\n");
		}
		vfs_write(fp, tmp_buf, tmp_len, &fp->f_pos);

		/*write error type*/
		if (0xdeadbeaf == *g_om_data.dsp_panic_mark) {
			vfs_write(fp, is_panic, strlen(is_panic), &fp->f_pos);
		} else if(0xbeafdead == *g_om_data.dsp_panic_mark){
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

	if (NULL != g_om_data.dsp_log_addr) {
		iounmap(g_om_data.dsp_log_addr);
		g_om_data.dsp_log_addr = NULL;
	}

	if((index == OCRAM_BIN || index == TCM_BIN) && (NULL != s_dsp_dump_info[index].data_addr))
	{
		s_dsp_dump_info[index].data_addr = NULL;
	}

	hifi_release_log_signal();

	up(&g_om_data.dsp_dump_sema);
	OUT_FUNCTION;

	return;
}
#endif

#ifdef PLATFORM_HI6XXX
static int hifi_dsp_dump_hifi_cmd(unsigned long arg)
{
	if (1 == himntn_hifi_resetlog)
	{
		queue_work(g_om_data.hifi_mntn_wq, &(g_om_data.hifi_mntn_work.work_stru));
	} else {
		loge("hifi reset log isn't set, needn't to dump.\n");
	}

	return 0;
}

static void hifi_handle_mntn_work(struct work_struct *work)
{
	loge("audio dump.\n");
	mach_call_usermodeshell("/system/etc/log/audio_dump.sh" , 0);
	return;
}
#endif

typedef struct {
	char level_char;
	unsigned int level_num;
}debug_level_com;
static debug_level_com s_debug_level_com[4] = {{'d', 3},{'i', 2},{'w', 1},{'e', 0}};

static unsigned int hifi_get_debug_level_num(char level_char)
{
	int i = 0;
	int len = sizeof(s_debug_level_com)/sizeof(s_debug_level_com[0]);

	for (i = 0; i < len; i++) {
		if(level_char == s_debug_level_com[i].level_char) {
			return s_debug_level_com[i].level_num;
		}
	}

	return 2; /*info*/
}

static char hifi_get_debug_level_char(char level_num)
{
	int i = 0;
	int len = sizeof(s_debug_level_com)/sizeof(s_debug_level_com[0]);

	for (i = 0; i < len; i++) {
		if(level_num == s_debug_level_com[i].level_num) {
			return s_debug_level_com[i].level_char;
		}
	}

	return 'i'; /*info*/
}

#ifdef PLATFORM_HI3XXX
static void hifi_set_dsp_debug_level(unsigned int level)
{
	*(unsigned int*)g_om_data.dsp_debug_level_addr = level;
}
static void kill_hifi_dsp(void)
{
	int ret = OK;
	struct common_hifi_cmd cmd;
	memset(&cmd, 0, sizeof(cmd));
	if (hifi_is_loaded()) {
		cmd.msg_id = ID_AP_AUDIO_OM_HIFI_RESET_CMD;
		ret = hifi_misc_send_hifi_msg_async(&cmd);
		if (OK != ret) {
			loge("send OM_HIFI_RESET_CMD to hifi fail !\n");
			return;
		}
		logi("go to kill hifi!\n");
	}
	return;
}
#endif
static ssize_t hifi_debug_level_show(struct file *file, char __user *buf,
		size_t size, loff_t *data)
{
	char level_str[MAX_LEVEL_STR_LEN] = {0};

	if(NULL == buf) {
		loge("Input param buf is invalid\n");
		return -EINVAL;
	}

	if(g_om_data.dsp_hifidebug_show_tag){
		g_om_data.dsp_hifidebug_show_tag = false;
		return 0;
	}
	g_om_data.dsp_hifidebug_show_tag = true;

	snprintf(level_str, MAX_LEVEL_STR_LEN, "debug level: %c.\n", hifi_get_debug_level_char(g_om_data.debug_level));

	return simple_read_from_buffer(buf, size, data, level_str, strlen(level_str));
}

static ssize_t hifi_debug_level_store(struct file *file, const char __user *buf,
		size_t size, loff_t *data)
{
	ssize_t ret = 0;
	char level_str[MAX_LEVEL_STR_LEN] = {0};
	loff_t pos = 0;

	if (NULL == buf) {
		loge("Input param buf is invalid\n");
		return -EINVAL;
	}
	ret = simple_write_to_buffer(level_str, MAX_LEVEL_STR_LEN - 1 , &pos, buf, size);
	if (ret != size) {
		loge("Input param buf read error, return value: %zd\n", ret);
		return -EINVAL;
	}

	if (!strchr("diwe", level_str[0])) {
		loge("Input param buf is error(valid: d,i,w,e): %s.\n", level_str);
		return -EINVAL;
	}
	if (level_str[1] != '\n') {
		loge("Input param buf is error, last char is not \\n .\n");
		return -EINVAL;
	}

	g_om_data.debug_level = hifi_get_debug_level_num(level_str[0]);
	return size;
}
static const struct file_operations hifi_debug_proc_ops = {
	.owner = THIS_MODULE,
	.read  = hifi_debug_level_show,
	.write = hifi_debug_level_store,
};

#ifdef PLATFORM_HI3XXX
static ssize_t hifi_dsp_debug_level_show(struct file *file, char __user *buf,
				size_t size, loff_t *data)
{
	char level_str[MAX_LEVEL_STR_LEN] = {0};

	if (NULL == buf) {
		loge("Input param buf is invalid\n");
		return -EINVAL;
	}

	if (g_om_data.dsp_hifidebug_show_tag) {
		g_om_data.dsp_hifidebug_show_tag = false;
		return 0;
	}
	g_om_data.dsp_hifidebug_show_tag = true;

	snprintf(level_str, MAX_LEVEL_STR_LEN, "dsp debug level: %c.\n", hifi_get_debug_level_char(g_om_data.dsp_debug_level));

	return simple_read_from_buffer(buf, size, data, level_str, strlen(level_str));
}
static ssize_t hifi_dsp_debug_level_store(struct file *file, const char __user *buf,
		size_t size, loff_t *data)
{
	ssize_t ret = 0;
	char level_str[MAX_LEVEL_STR_LEN] = {0};
	loff_t pos = 0;

	if (NULL == buf) {
		loge("Input param buf is invalid\n");
		return -EINVAL;
	}

	ret = simple_write_to_buffer(level_str, MAX_LEVEL_STR_LEN - 1 , &pos, buf, size);
	if (ret != size) {
		loge("Input param buf read error, return value: %zd\n", ret);
		return -EINVAL;
	}

	if (!strchr("kdiwe", level_str[0])) {
		loge("Input param buf is error(valid: d,i,w,e): %s.\n", level_str);
		return -EINVAL;
	}
	if (level_str[1] != '\n') {
		loge("Input param buf is error, last char is not \\n .\n");
		return -EINVAL;
	}

	if (strchr("k", level_str[0])) {
		kill_hifi_dsp();
		return size;
	}

	g_om_data.dsp_debug_level = hifi_get_debug_level_num(level_str[0]);
	hifi_set_dsp_debug_level(g_om_data.dsp_debug_level);

	return size;
}
static const struct file_operations hifi_dspdebuglevel_proc_ops = {
	.owner = THIS_MODULE,
	.read  = hifi_dsp_debug_level_show,
	.write = hifi_dsp_debug_level_store,
};
#endif

static ssize_t hifi_dsp_dump_log_show(struct file *file, char __user *buf,
		size_t size, loff_t *data)
{
#ifdef PLATFORM_HI3XXX
	g_om_data.force_dump_log = true;
	up(&hifi_log_sema);
	return 0;
#endif
#ifdef PLATFORM_HI6XXX
	return (ssize_t)hifi_dsp_dump_hifi_cmd(0);
#endif
}
static const struct file_operations hifi_dspdumplog_proc_ops = {
	.owner = THIS_MODULE,
	.read  = hifi_dsp_dump_log_show,
};
static void create_hifidebug_proc_file(void)
{
	struct proc_dir_entry *ent_debuglevel;
	struct proc_dir_entry *ent_dspdumplog;
	struct proc_dir_entry *ent_dspdebuglevel;
	/* Creating read/write "status" entry */
	ent_debuglevel = proc_create(HIFIDEBUG_LEVEL_PROC_FILE, S_IRUGO | S_IWUSR|S_IWGRP,
			hifi_debug_dir, &hifi_debug_proc_ops);
	ent_dspdumplog = proc_create(HIFIDEBUG_DSPDUMPLOG_PROC_FILE,
			S_IRUGO,hifi_debug_dir,
			&hifi_dspdumplog_proc_ops);
	if ((ent_debuglevel == NULL) || (ent_dspdumplog == NULL)){
		remove_proc_entry("hifidebug", 0);
		loge("create proc file fail\n");
		return ;
	}
#ifdef PLATFORM_HI3XXX
	ent_dspdebuglevel = proc_create(HIFIDEGUB_DSPDEBUGLEVEL_PROC_FILE, S_IRUGO | S_IWUSR|S_IWGRP,
			hifi_debug_dir, &hifi_dspdebuglevel_proc_ops);
	if (ent_dspdebuglevel == NULL) {
		remove_proc_entry("hifidebug", 0);
		loge("create proc file fail\n");
	}
#endif

}
static void remove_hifidebug_proc_file(void)
{
	remove_proc_entry(HIFIDEBUG_LEVEL_PROC_FILE, hifi_debug_dir);
	remove_proc_entry(HIFIDEBUG_DSPDUMPLOG_PROC_FILE, hifi_debug_dir);
#ifdef PLATFORM_HI3XXX
	remove_proc_entry(HIFIDEGUB_DSPDEBUGLEVEL_PROC_FILE, hifi_debug_dir);
#endif
}

static void hifi_create_procfs(void)
{
#ifdef ENABLE_HIFI_DEBUG
	hifi_debug_dir = proc_mkdir(HIFIDEBUG_PATH, NULL);
	if (hifi_debug_dir == NULL) {
		loge("Unable to create /proc/hifidebug directory\n");
		return ;
	}
	create_hifidebug_proc_file();

	return ;
#endif
}

static void hifi_remove_procfs(void)
{
#ifdef ENABLE_HIFI_DEBUG
	remove_hifidebug_proc_file();
	remove_proc_entry("hifidebug", 0);
	return;
#endif
}

#ifdef PLATFORM_HI3XXX

static int hifi_request_ocram_tcm_source(void)
{
	int ret = OK;
	unsigned int* hifi_ocram_addr = NULL;
	unsigned int* hifi_tcm_addr = NULL;

	g_om_data.dsp_ocram_bin_addr = vmalloc((size_t)(HIFI_IMAGE_OCRAMBAK_SIZE));
	if (NULL == g_om_data.dsp_ocram_bin_addr) {
		loge("alloc dsp_ocram_bin_addr fail \n");
		ret = -ENOMEM;
		goto err_free;
	}

	g_om_data.dsp_tcm_bin_addr = vmalloc((size_t)(HIFI_IMAGE_TCMBAK_SIZE));
	if (NULL == g_om_data.dsp_tcm_bin_addr) {
		loge("alloc dsp_tcm_bin_addr fail \n");
		ret = -ENOMEM;
		goto err_free;
	}

	hifi_ocram_addr = (unsigned char*)ioremap_wc(HIFI_OCRAM_BASE_ADDR, HIFI_IMAGE_OCRAMBAK_SIZE);
	if (NULL == hifi_ocram_addr) {
		loge("remap ocram_addr fail \n");
		ret = -ENOMEM;
		goto err_free;
	}

	hifi_tcm_addr = (unsigned char*)ioremap_wc(HIFI_TCM_BASE_ADDR, HIFI_IMAGE_TCMBAK_SIZE);
	if (NULL == hifi_tcm_addr) {
		loge("remap ocram_addr fail \n");
		ret = -ENOMEM;
		goto err_free;
	}

	memcpy(g_om_data.dsp_ocram_bin_addr, hifi_ocram_addr, HIFI_IMAGE_OCRAMBAK_SIZE);
	memcpy(g_om_data.dsp_tcm_bin_addr, hifi_tcm_addr, HIFI_IMAGE_TCMBAK_SIZE);

	goto end;

err_free:
	if (g_om_data.dsp_ocram_bin_addr) {
		vfree(g_om_data.dsp_ocram_bin_addr);
		g_om_data.dsp_ocram_bin_addr = NULL;
	}

	if (g_om_data.dsp_tcm_bin_addr) {
		vfree(g_om_data.dsp_tcm_bin_addr);
		g_om_data.dsp_tcm_bin_addr = NULL;
	}

end:
	if (hifi_ocram_addr) {
		iounmap(hifi_ocram_addr);
		hifi_ocram_addr = NULL;
	}

	if (hifi_tcm_addr) {
		iounmap(hifi_tcm_addr);
		hifi_tcm_addr = NULL;
	}

	return ret;
}

static void hifi_release_ocram_tcm_source(void)
{
	if (g_om_data.dsp_ocram_bin_addr) {
		vfree(g_om_data.dsp_ocram_bin_addr);
		g_om_data.dsp_ocram_bin_addr = NULL;
	}

	if (g_om_data.dsp_tcm_bin_addr) {
		vfree(g_om_data.dsp_tcm_bin_addr);
		g_om_data.dsp_tcm_bin_addr = NULL;
	}
}

bool hifi_is_power_on(void)
{
	unsigned int* hifi_power_status_addr = NULL;
	bool ret = false;

	hifi_power_status_addr = (unsigned int*)ioremap_wc(DRV_DSP_POWER_STATUS_ADDR, 0x4);
	if (NULL == hifi_power_status_addr) {
		loge("ioremap_wc hifi_power_status_addr fail.\n");
		return false;
	}

	if(DRV_DSP_POWER_ON == readl(hifi_power_status_addr)) {
		ret = true;
	} else {
		ret = false;
	}
	iounmap(hifi_power_status_addr);
	hifi_power_status_addr = NULL;

	return ret;
}

static int hifi_dump_dsp_thread(void *p)
{
	#define HIFI_TIME_STAMP_1S	  32768
	#define HIFI_DUMPLOG_TIMESPAN (10 * HIFI_TIME_STAMP_1S)

	unsigned int exception_no = 0;
	unsigned int time_now = 0;
	unsigned int time_diff = 0;
	unsigned int* hifi_info_addr = NULL;
    unsigned int hifi_stack_addr = 0;
	int i;

	IN_FUNCTION;

	while (!kthread_should_stop()) {
		if (down_interruptible(&hifi_log_sema) != 0) {
			loge("hifi_dump_dsp_thread wake up err.\n");
		}
		time_now = (unsigned int)readl(g_om_data.dsp_time_stamp);
		time_diff = time_now - g_om_data.pre_dsp_dump_timestamp;
		g_om_data.pre_dsp_dump_timestamp = time_now;


		hifi_info_addr = (unsigned int*)ioremap_wc(DRV_DSP_STACK_TO_MEM, DRV_DSP_STACK_TO_MEM_SIZE);
		if (NULL == hifi_info_addr) {
			loge("dsp log ioremap_wc hifi_info_addr fail.\n");
			continue;
		}

		exception_no = *(unsigned int*)(hifi_info_addr + 3);
		hifi_stack_addr = *(unsigned int*)(hifi_info_addr + 4);
		logi("errno:%x pre_errno:%x is_first:%d is_force:%d time_diff:%d ms.\n", exception_no, g_om_data.pre_exception_no, g_om_data.first_dump_log, g_om_data.force_dump_log, (time_diff * 1000) / HIFI_TIME_STAMP_1S);

		hifi_get_time_stamp(g_om_data.cur_dump_time, HIFI_DUMP_FILE_NAME_MAX_LEN);

		if (exception_no < 40 && (exception_no != g_om_data.pre_exception_no)) {
			logi("panic addr:0x%x, cur_pc:0x%x, pre_pc:0x%x, cause:0x%x\n", *(unsigned int*)(hifi_info_addr), *(unsigned int*)(hifi_info_addr+1), *(unsigned int*)(hifi_info_addr+2), *(unsigned int*)(hifi_info_addr+3));
			for( i = 0; i < (DRV_DSP_STACK_TO_MEM_SIZE/2)/sizeof(int)/4; i+=4){
				logi("0x%x: 0x%08x 0x%08x 0x%08x 0x%08x\n", (hifi_stack_addr+i*4), *(hifi_info_addr+i),*(hifi_info_addr+1+i),*(hifi_info_addr+2+i),*(hifi_info_addr+i+3));
			}

			hifi_dump_dsp(PANIC_LOG);
			hifi_dump_dsp(PANIC_BIN);

			g_om_data.pre_exception_no = exception_no;
		} else if (g_om_data.first_dump_log
			|| g_om_data.force_dump_log
			|| time_diff > HIFI_DUMPLOG_TIMESPAN) {

			hifi_dump_dsp(NORMAL_LOG);
			if (DSP_LOG_BUF_FULL != g_om_data.dsp_error_type) {/*needn't dump bin when hifi log buffer full*/
				hifi_dump_dsp(NORMAL_BIN);
			}

			g_om_data.first_dump_log = false;
		}

		iounmap(hifi_info_addr);
		hifi_info_addr = NULL;

		if (hifi_is_power_on()
			&& (DSP_LOG_BUF_FULL != g_om_data.dsp_error_type)
			&& (!g_om_data.force_dump_log)) {
			logi("hifi is power on, now dump ocram and tcm \n");
			if (OK == hifi_request_ocram_tcm_source()) {
				logi("ocram and tcm have saved in buffer, now save file \n");
				hifi_dump_dsp(OCRAM_BIN);
				hifi_dump_dsp(TCM_BIN);
				hifi_release_ocram_tcm_source();
			}
		}

		g_om_data.force_dump_log = false;
	}
	OUT_FUNCTION;
	return 0;
}
#endif

void hifi_dump_panic_log(void)
{
#ifdef PLATFORM_HI3XXX
	if (!g_om_data.dsp_loaded) {
		loge("hifi isn't loaded, errno: 0x%x .\n" , g_om_data.dsp_loaded_sign);
		return;
	}
	up(&hifi_log_sema);
#endif
	return;
}

static bool hifi_check_img_loaded(void)
{
#ifdef PLATFORM_HI3XXX
	bool dsp_loaded = false;
	unsigned int* img_loaded = (unsigned int*)ioremap_wc(DRV_DSP_LOADED_INDICATE, 0x4);
	if (NULL == img_loaded) {
		loge("remap hifi img loaded fail.\n");
		g_om_data.dsp_loaded_sign = 0xffffffff;
		return false;
	}
	g_om_data.dsp_loaded_sign = *img_loaded;

	if (0xA5A55A5A == g_om_data.dsp_loaded_sign) {
		loge("hifi img is not be loaded.\n");
	} else if (g_om_data.dsp_loaded_sign > 0) {
		loge("hifi img is loaded fail: 0x%x.\n", g_om_data.dsp_loaded_sign);
	} else {
		logi("hifi img be loaded.\n");
		dsp_loaded = true;
	}

	iounmap(img_loaded);
	return dsp_loaded;
#endif
#ifdef PLATFORM_HI6XXX
	return true;
#endif
}

bool hifi_is_loaded(void)
{
	if(!g_om_data.dsp_loaded) {
		loge("hifi isn't load, errno is 0x%x.\n", g_om_data.dsp_loaded_sign);
	}
	return g_om_data.dsp_loaded;
}


int hifi_dsp_dump_hifi(unsigned long arg)
{
	g_om_data.dsp_error_type = (unsigned int)arg;
	return (int)hifi_dsp_dump_log_show(NULL, NULL, 0, NULL);
}

void hifi_om_init(struct platform_device *dev, unsigned char* hifi_priv_base_virt, unsigned char* hifi_priv_base_phy)
{
	BUG_ON(NULL == dev);

#ifdef PLATFORM_HI3XXX
	BUG_ON(NULL == hifi_priv_base_virt);
	BUG_ON(NULL == hifi_priv_base_phy);
#endif

	memset(&g_om_data, 0, sizeof(struct hifi_om_s));

	g_om_data.debug_level = 2; /*info level*/

#ifdef PLATFORM_HI3XXX
	/*DTS2014112202459 modify by z00196632 : set time stamp reg before use logx */
	g_om_data.dsp_time_stamp = (unsigned int*)ioremap_wc(SYS_TIME_STAMP_REG, 0x4);
	if (NULL == g_om_data.dsp_time_stamp) {
		printk("time stamp reg ioremap_wc Error.\n");//can't use logx
		return;
	}
#endif
	g_om_data.dsp_loaded = hifi_check_img_loaded();

	IN_FUNCTION;

#ifdef PLATFORM_HI3XXX
	g_om_data.dsp_debug_level = 2; /*info level*/
	g_om_data.first_dump_log = true;
	g_om_data.is_watchdog_coming = false;


	g_om_data.dsp_panic_mark = (unsigned int*)(hifi_priv_base_virt + (DRV_DSP_PANIC_MARK - HIFI_BASE_ADDR));
	g_om_data.dsp_bin_addr = (char*)(hifi_priv_base_virt + (HIFI_RUN_LOCATION - HIFI_BASE_ADDR));
	g_om_data.dsp_ocram_bin_addr = NULL;
	g_om_data.dsp_tcm_bin_addr = NULL;
	g_om_data.dsp_exception_no = (unsigned int*)(hifi_priv_base_virt + (DRV_DSP_EXCEPTION_NO - HIFI_BASE_ADDR));
	g_om_data.dsp_log_cur_addr = (unsigned int*)(hifi_priv_base_virt + (DRV_DSP_UART_TO_MEM_CUR_ADDR - HIFI_BASE_ADDR));
	g_om_data.dsp_log_addr = NULL;
	*g_om_data.dsp_log_cur_addr = DRV_DSP_UART_TO_MEM + DRV_DSP_UART_TO_MEM_RESERVE_SIZE;

	g_om_data.dsp_debug_level_addr = (unsigned int*)(hifi_priv_base_virt + (DRV_DSP_UART_LOG_LEVEL - HIFI_BASE_ADDR));
	g_om_data.dsp_debug_kill_addr = (unsigned int*)(hifi_priv_base_virt + (DRV_DSP_KILLME_ADDR - HIFI_BASE_ADDR));

	*(g_om_data.dsp_exception_no) = ~0;
	g_om_data.pre_exception_no = ~0;

	s_dsp_dump_info[NORMAL_BIN].data_addr = g_om_data.dsp_bin_addr;
	s_dsp_dump_info[PANIC_BIN].data_addr  = g_om_data.dsp_bin_addr;

	hifi_set_dsp_debug_level(g_om_data.dsp_debug_level);

	sema_init(&g_om_data.dsp_dump_sema, 1);

	g_om_data.kdumpdsp_task = kthread_create(hifi_dump_dsp_thread, 0, "dspdumplog");
	if (IS_ERR(g_om_data.kdumpdsp_task)) {
		loge("creat hifi dump log thread fail.\n");
	} else {
		wake_up_process(g_om_data.kdumpdsp_task);
	}
#endif

	g_om_data.dsp_hifidebug_show_tag = false;

	hifi_create_procfs();

#ifdef PLATFORM_HI6XXX
	g_om_data.hifi_mntn_wq = create_singlethread_workqueue("hifi_misc_mntn_workqueue");
	INIT_WORK(&(g_om_data.hifi_mntn_work.work_stru), hifi_handle_mntn_work);
#endif

	OUT_FUNCTION;
	return;
}

void hifi_om_deinit(struct platform_device *dev)
{
	IN_FUNCTION;

	BUG_ON(NULL == dev);

#ifdef PLATFORM_HI3XXX
	up(&g_om_data.dsp_dump_sema);
	kthread_stop(g_om_data.kdumpdsp_task);

	if (NULL != g_om_data.dsp_time_stamp) {
		iounmap(g_om_data.dsp_time_stamp);
		g_om_data.dsp_time_stamp = NULL;
	}

	if (NULL != g_om_data.dsp_log_addr) {
		iounmap(g_om_data.dsp_log_addr);
		g_om_data.dsp_log_addr = NULL;
	}
#endif

	hifi_remove_procfs();

	OUT_FUNCTION;

	return;
}

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

