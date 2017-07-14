/*
 *  linux/drivers/mmc/core/mmc_ops.h
 *
 *  Copyright 2006-2007 Pierre Ossman
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 */

#include <linux/slab.h>
#include <linux/export.h>
#include <linux/types.h>
#include <linux/scatterlist.h>

#include <linux/mmc/host.h>
#include <linux/mmc/card.h>
#include <linux/mmc/mmc.h>
#ifdef CONFIG_MMC_PASSWORDS
#include "lock.h"
#endif
#include "core.h"
#include "mmc_ops.h"
/* BEGIN PN:DTS2014081103718 , Modified by d00168349, 2014/08/11 */
#ifdef CONFIG_HUAWEI_SDCARD_DSM
#include <linux/mmc/dsm_sdcard.h>
#endif
#ifdef CONFIG_HUAWEI_EMMC_DSM
#include <linux/mmc/dsm_emmc.h>
#endif
/* END PN:DTS2014081103718 , Modified by d00168349, 2014/08/11 */
#define MMC_OPS_TIMEOUT_MS	(10 * 60 * 1000) /* 10 minute timeout */
/* BEGIN PN:DTS2016061204868, Modified by d00168349, 2016/06/13 */
#define SD_OPS_TIMEOUT_MS	(30 * 1000) /* 30 second timeout */
/* END PN:DTS2016061204868, Modified by d00168349, 2016/06/13 */

static int _mmc_select_card(struct mmc_host *host, struct mmc_card *card)
{
	int err;
	struct mmc_command cmd = {0};
/* BEGIN PN:DTS2014081103718 , Modified by d00168349, 2014/08/11 */
#ifdef CONFIG_HUAWEI_SDCARD_DSM
	char *log_buff;
	int   buff_len;
#endif
/* END PN:DTS2014081103718 , Modified by d00168349, 2014/08/11 */
	BUG_ON(!host);

	cmd.opcode = MMC_SELECT_CARD;

	if (card) {
		cmd.arg = card->rca << 16;
		cmd.flags = MMC_RSP_R1 | MMC_CMD_AC;
	} else {
		cmd.arg = 0;
		cmd.flags = MMC_RSP_NONE | MMC_CMD_AC;
	}
	/*we must ensure that the total lossing time in sd suspend is less then
	12s,so we just retry once instead of four for damaged sd cards*/

	err = mmc_wait_for_cmd(host, &cmd, 1);
/* BEGIN PN:DTS2014081103718 , Modified by d00168349, 2014/08/11 */
#ifdef CONFIG_HUAWEI_SDCARD_DSM
	
	if(!strcmp(mmc_hostname(host), "mmc1"))
	{
		 dsm_sdcard_cmd_logs[DSM_SDCARD_CMD7].value = cmd.resp[0];
	}
	
	if (err)
	{
		if(-ENOMEDIUM != err && -ETIMEDOUT != err
		&& !strcmp(mmc_hostname(host), "mmc1") && !dsm_client_ocuppy(sdcard_dclient))
		{	
			log_buff = dsm_sdcard_get_log(DSM_SDCARD_CMD7,err);	
			buff_len = strlen(log_buff);
			dsm_client_copy(sdcard_dclient,log_buff,buff_len + 1);
			dsm_client_notify(sdcard_dclient, DSM_SDCARD_CMD7_RESP_ERR);

		}
	
		return err;
	}
#else
	if (err)
		return err;
#endif
/* END PN:DTS2014081103718 , Modified by d00168349, 2014/08/11 */

	return 0;
}

int mmc_select_card(struct mmc_card *card)
{
	BUG_ON(!card);

	return _mmc_select_card(card->host, card);
}

int mmc_deselect_cards(struct mmc_host *host)
{
	return _mmc_select_card(host, NULL);
}

int mmc_card_sleepawake(struct mmc_host *host, int sleep)
{
	struct mmc_command cmd = {0};
	struct mmc_card *card = host->card;
	int err;

	if (sleep)
		mmc_deselect_cards(host);

	cmd.opcode = MMC_SLEEP_AWAKE;
	cmd.arg = card->rca << 16;
	if (sleep)
		cmd.arg |= 1 << 15;

	cmd.flags = MMC_RSP_R1B | MMC_CMD_AC;
	err = mmc_wait_for_cmd(host, &cmd, 0);
	if (err)
		return err;

	/*
	 * If the host does not wait while the card signals busy, then we will
	 * will have to wait the sleep/awake timeout.  Note, we cannot use the
	 * SEND_STATUS command to poll the status because that command (and most
	 * others) is invalid while the card sleeps.
	 */
	if (!(host->caps & MMC_CAP_WAIT_WHILE_BUSY))
		mmc_delay(DIV_ROUND_UP(card->ext_csd.sa_timeout, 10000));

	if (!sleep)
		err = mmc_select_card(card);

	return err;
}

int mmc_go_idle(struct mmc_host *host)
{
	int err;
	struct mmc_command cmd = {0};

	/*
	 * Non-SPI hosts need to prevent chipselect going active during
	 * GO_IDLE; that would put chips into SPI mode.  Remind them of
	 * that in case of hardware that won't pull up DAT3/nCS otherwise.
	 *
	 * SPI hosts ignore ios.chip_select; it's managed according to
	 * rules that must accommodate non-MMC slaves which this layer
	 * won't even know about.
	 */
	if (!mmc_host_is_spi(host)) {
		mmc_set_chip_select(host, MMC_CS_HIGH);
		mmc_delay(1);
	}

	cmd.opcode = MMC_GO_IDLE_STATE;
	cmd.arg = 0;
	cmd.flags = MMC_RSP_SPI_R1 | MMC_RSP_NONE | MMC_CMD_BC;

	err = mmc_wait_for_cmd(host, &cmd, 0);

	mmc_delay(1);

	if (!mmc_host_is_spi(host)) {
		mmc_set_chip_select(host, MMC_CS_DONTCARE);
		mmc_delay(1);
	}

	host->use_spi_crc = 0;

	return err;
}

int mmc_send_op_cond(struct mmc_host *host, u32 ocr, u32 *rocr)
{
	struct mmc_command cmd = {0};
	int i, err = 0;

	BUG_ON(!host);

	cmd.opcode = MMC_SEND_OP_COND;
	cmd.arg = mmc_host_is_spi(host) ? 0 : ocr;
	cmd.flags = MMC_RSP_SPI_R1 | MMC_RSP_R3 | MMC_CMD_BCR;

	for (i = 100; i; i--) {
		err = mmc_wait_for_cmd(host, &cmd, 0);
		if (err)
			break;

		/* if we're just probing, do a single pass */
		if (ocr == 0)
			break;

		/* otherwise wait until reset completes */
		if (mmc_host_is_spi(host)) {
			if (!(cmd.resp[0] & R1_SPI_IDLE))
				break;
		} else {
			if (cmd.resp[0] & MMC_CARD_BUSY)
				break;
		}

		err = -ETIMEDOUT;

		mmc_delay(10);
	}

	if (rocr && !mmc_host_is_spi(host))
		*rocr = cmd.resp[0];

	return err;
}

int mmc_all_send_cid(struct mmc_host *host, u32 *cid)
{
	int err;
	struct mmc_command cmd = {0};
/* BEGIN PN:DTS2014081103718 , Modified by d00168349, 2014/08/11 */
#ifdef CONFIG_HUAWEI_SDCARD_DSM
	char *log_buff;
	int   buff_len;
#endif
/* END PN:DTS2014081103718 , Modified by d00168349, 2014/08/11 */
	BUG_ON(!host);
	BUG_ON(!cid);

	cmd.opcode = MMC_ALL_SEND_CID;
	cmd.arg = 0;
	cmd.flags = MMC_RSP_R2 | MMC_CMD_BCR;

	err = mmc_wait_for_cmd(host, &cmd, MMC_CMD_RETRIES);
/* BEGIN PN:DTS2014081103718 , Modified by d00168349, 2014/08/11 */
#ifdef CONFIG_HUAWEI_SDCARD_DSM
	if(!strcmp(mmc_hostname(host), "mmc1"))
	{
		 dsm_sdcard_cmd_logs[DSM_SDCARD_CMD2_R0].value = cmd.resp[0];
		 dsm_sdcard_cmd_logs[DSM_SDCARD_CMD2_R1].value = cmd.resp[1];
		 dsm_sdcard_cmd_logs[DSM_SDCARD_CMD2_R2].value = cmd.resp[2];
		 dsm_sdcard_cmd_logs[DSM_SDCARD_CMD2_R3].value = cmd.resp[3];
		 
	}

	if (err)
	{
		if(-ENOMEDIUM != err && -ETIMEDOUT != err
		&& !strcmp(mmc_hostname(host), "mmc1") && !dsm_client_ocuppy(sdcard_dclient))
		{
			log_buff = dsm_sdcard_get_log(DSM_SDCARD_CMD2_R3,err);
			buff_len = strlen(log_buff);
			dsm_client_copy(sdcard_dclient,log_buff,buff_len + 1);
			dsm_client_notify(sdcard_dclient, DSM_SDCARD_CMD2_RESP_ERR);
		}
        /* BEGIN PN:DTS2014112203072  , Modified by d00168349, 2014/11/22 */
		if(!strcmp(mmc_hostname(host),"mmc1"))
		{
		   printk(KERN_ERR "%s:send cmd2 fail,err=%d\n",mmc_hostname(host),err);
		}
        /* END PN:DTS2014112203072  , Modified by d00168349, 2014/11/22 */
		return err;
	}
#else
	if (err)
    /* BEGIN PN:DTS2014112203072  , Modified by d00168349, 2014/11/22 */
	{
	    if(!strcmp(mmc_hostname(host),"mmc1"))
		{
		   printk(KERN_ERR "%s:send cmd2 fail,err=%d\n",mmc_hostname(host),err);
		}
		return err;
	}
    /* END PN:DTS2014112203072  , Modified by d00168349, 2014/11/22 */
#endif
/* END PN:DTS2014081103718 , Modified by d00168349, 2014/08/11 */

	memcpy(cid, cmd.resp, sizeof(u32) * 4);

	return 0;
}

int mmc_set_relative_addr(struct mmc_card *card)
{
	int err;
	struct mmc_command cmd = {0};

	BUG_ON(!card);
	BUG_ON(!card->host);

	cmd.opcode = MMC_SET_RELATIVE_ADDR;
	cmd.arg = card->rca << 16;
	cmd.flags = MMC_RSP_R1 | MMC_CMD_AC;

	err = mmc_wait_for_cmd(card->host, &cmd, MMC_CMD_RETRIES);
	if (err)
		return err;

	return 0;
}

static int
mmc_send_cxd_native(struct mmc_host *host, u32 arg, u32 *cxd, int opcode)
{
	int err;
	struct mmc_command cmd = {0};

	BUG_ON(!host);
	BUG_ON(!cxd);

	cmd.opcode = opcode;
	cmd.arg = arg;
	cmd.flags = MMC_RSP_R2 | MMC_CMD_AC;

	err = mmc_wait_for_cmd(host, &cmd, MMC_CMD_RETRIES);
	if (err)
		return err;

	memcpy(cxd, cmd.resp, sizeof(u32) * 4);

	return 0;
}

/*
 * NOTE: void *buf, caller for the buf is required to use DMA-capable
 * buffer or on-stack buffer (with some overhead in callee).
 */
static int
mmc_send_cxd_data(struct mmc_card *card, struct mmc_host *host,
		u32 opcode, void *buf, unsigned len)
{
	struct mmc_request mrq = {NULL};
	struct mmc_command cmd = {0};
	struct mmc_data data = {0};
	struct scatterlist sg;
	void *data_buf;
	int is_on_stack;

	is_on_stack = object_is_on_stack(buf);
	if (is_on_stack) {
		/*
		 * dma onto stack is unsafe/nonportable, but callers to this
		 * routine normally provide temporary on-stack buffers ...
		 */
		data_buf = kmalloc(len, GFP_KERNEL);
		if (!data_buf)
			return -ENOMEM;
	} else
		data_buf = buf;

	mrq.cmd = &cmd;
	mrq.data = &data;

	cmd.opcode = opcode;
	cmd.arg = 0;

	/* NOTE HACK:  the MMC_RSP_SPI_R1 is always correct here, but we
	 * rely on callers to never use this with "native" calls for reading
	 * CSD or CID.  Native versions of those commands use the R2 type,
	 * not R1 plus a data block.
	 */
	cmd.flags = MMC_RSP_SPI_R1 | MMC_RSP_R1 | MMC_CMD_ADTC;

	data.blksz = len;
	data.blocks = 1;
	data.flags = MMC_DATA_READ;
	data.sg = &sg;
	data.sg_len = 1;

	sg_init_one(&sg, data_buf, len);

	if (opcode == MMC_SEND_CSD || opcode == MMC_SEND_CID) {
		/*
		 * The spec states that CSR and CID accesses have a timeout
		 * of 64 clock cycles.
		 */
		data.timeout_ns = 0;
		data.timeout_clks = 64;
	} else
		mmc_set_data_timeout(&data, card);

	mmc_wait_for_req(host, &mrq);

	if (is_on_stack) {
		memcpy(buf, data_buf, len);
		kfree(data_buf);
	}

/* BEGIN PN:DTS2014081103718 , Modified by d00168349, 2014/08/11 */
#ifdef CONFIG_HUAWEI_EMMC_DSM
	if(cmd.error || data.error)
		if(!strcmp(mmc_hostname(host), "mmc0")){
			DSM_EMMC_LOG(card, DSM_EMMC_SEND_CXD_ERR,
				"opcode:%d failed, cmd.error:%d, data.error:%d\n",
				opcode, cmd.error, data.error);
		}
#endif
/* END PN:DTS2014081103718 , Modified by d00168349, 2014/08/11 */
	if (cmd.error)
		return cmd.error;
	if (data.error)
		return data.error;

	return 0;
}

int mmc_send_csd(struct mmc_card *card, u32 *csd)
{
	int ret, i;
	u32 *csd_tmp;

	if (!mmc_host_is_spi(card->host))
		return mmc_send_cxd_native(card->host, card->rca << 16,
				csd, MMC_SEND_CSD);

	csd_tmp = kmalloc(16, GFP_KERNEL);

	if (!csd_tmp)
		return -ENOMEM;

	ret = mmc_send_cxd_data(card, card->host, MMC_SEND_CSD, csd_tmp, 16);
	if (ret)
		goto err;

	for (i = 0;i < 4;i++)
		csd[i] = be32_to_cpu(csd_tmp[i]);

err:
	kfree(csd_tmp);
	return ret;
}

int mmc_send_cid(struct mmc_host *host, u32 *cid)
{
	int ret, i;
	u32 *cid_tmp;

	if (!mmc_host_is_spi(host)) {
		if (!host->card)
			return -EINVAL;
		return mmc_send_cxd_native(host, host->card->rca << 16,
				cid, MMC_SEND_CID);
	}

	cid_tmp = kmalloc(16, GFP_KERNEL);

	if (!cid_tmp)
		return -ENOMEM;

	ret = mmc_send_cxd_data(NULL, host, MMC_SEND_CID, cid_tmp, 16);
	if (ret)
		goto err;

	for (i = 0;i < 4;i++)
		cid[i] = be32_to_cpu(cid_tmp[i]);

err:
	kfree(cid_tmp);
	return ret;
}

int mmc_send_ext_csd(struct mmc_card *card, u8 *ext_csd)
{
	return mmc_send_cxd_data(card, card->host, MMC_SEND_EXT_CSD,
			ext_csd, 512);
}
EXPORT_SYMBOL_GPL(mmc_send_ext_csd);

int mmc_spi_read_ocr(struct mmc_host *host, int highcap, u32 *ocrp)
{
	struct mmc_command cmd = {0};
	int err;

	cmd.opcode = MMC_SPI_READ_OCR;
	cmd.arg = highcap ? (1 << 30) : 0;
	cmd.flags = MMC_RSP_SPI_R3;

	err = mmc_wait_for_cmd(host, &cmd, 0);

	*ocrp = cmd.resp[1];
	return err;
}

int mmc_spi_set_crc(struct mmc_host *host, int use_crc)
{
	struct mmc_command cmd = {0};
	int err;

	cmd.opcode = MMC_SPI_CRC_ON_OFF;
	cmd.flags = MMC_RSP_SPI_R1;
	cmd.arg = use_crc;

	err = mmc_wait_for_cmd(host, &cmd, 0);
	if (!err)
		host->use_spi_crc = use_crc;
	return err;
}

/**
 *	__mmc_switch - modify EXT_CSD register
 *	@card: the MMC card associated with the data transfer
 *	@set: cmd set values
 *	@index: EXT_CSD register index
 *	@value: value to program into EXT_CSD register
 *	@timeout_ms: timeout (ms) for operation performed by register write,
 *                   timeout of zero implies maximum possible timeout
 *	@use_busy_signal: use the busy signal as response type
 *
 *	Modifies the EXT_CSD register for selected card.
 */
int __mmc_switch(struct mmc_card *card, u8 set, u8 index, u8 value,
	       unsigned int timeout_ms, bool use_busy_signal)
{
	int err;
	struct mmc_command cmd = {0};
	unsigned long timeout;
	u32 status;

	BUG_ON(!card);
	BUG_ON(!card->host);

	cmd.opcode = MMC_SWITCH;
	cmd.arg = (MMC_SWITCH_MODE_WRITE_BYTE << 24) |
		  (index << 16) |
		  (value << 8) |
		  set;
	cmd.flags = MMC_CMD_AC;
	if (use_busy_signal)
		cmd.flags |= MMC_RSP_SPI_R1B | MMC_RSP_R1B;
	else
		cmd.flags |= MMC_RSP_SPI_R1 | MMC_RSP_R1;


	cmd.cmd_timeout_ms = timeout_ms;

	err = mmc_wait_for_cmd(card->host, &cmd, MMC_CMD_RETRIES);
	if (err)
		return err;

	/* No need to check card status in case of unblocking command */
	if (!use_busy_signal)
		return 0;

	/* Must check status to be sure of no errors */
	timeout = jiffies + msecs_to_jiffies(MMC_OPS_TIMEOUT_MS);
	do {
		err = mmc_send_status(card, &status);
		if (err)
			return err;
		if (card->host->caps & MMC_CAP_WAIT_WHILE_BUSY)
			break;
		if (mmc_host_is_spi(card->host))
			break;

		/* Timeout if the device never leaves the program state. */
		if (time_after(jiffies, timeout)) {
			pr_err("%s: Card stuck in programming state! %s\n",
				mmc_hostname(card->host), __func__);
			return -ETIMEDOUT;
		}
	} while (R1_CURRENT_STATE(status) == R1_STATE_PRG);

	if (mmc_host_is_spi(card->host)) {
		if (status & R1_SPI_ILLEGAL_COMMAND)
			return -EBADMSG;
	} else {
		if (status & 0xFDFFA000)
			pr_warning("%s: unexpected status %#x after "
			       "switch", mmc_hostname(card->host), status);
		if (status & R1_SWITCH_ERROR)
			return -EBADMSG;
	}

	return 0;
}
EXPORT_SYMBOL_GPL(__mmc_switch);

int mmc_switch(struct mmc_card *card, u8 set, u8 index, u8 value,
		unsigned int timeout_ms)
{
	return __mmc_switch(card, set, index, value, timeout_ms, true);
}
EXPORT_SYMBOL_GPL(mmc_switch);

int mmc_send_status(struct mmc_card *card, u32 *status)
{
	int err;
	struct mmc_command cmd = {0};

	BUG_ON(!card);
	BUG_ON(!card->host);

	cmd.opcode = MMC_SEND_STATUS;
	if (!mmc_host_is_spi(card->host))
		cmd.arg = card->rca << 16;
	cmd.flags = MMC_RSP_SPI_R2 | MMC_RSP_R1 | MMC_CMD_AC;

	err = mmc_wait_for_cmd(card->host, &cmd, MMC_CMD_RETRIES);
	if (err)
		return err;

	/* NOTE: callers are required to understand the difference
	 * between "native" and SPI format status words!
	 */
	if (status)
		*status = cmd.resp[0];

	return 0;
}

static int
mmc_send_bus_test(struct mmc_card *card, struct mmc_host *host, u8 opcode,
		  u8 len)
{
	struct mmc_request mrq = {NULL};
	struct mmc_command cmd = {0};
	struct mmc_data data = {0};
	struct scatterlist sg;
	u8 *data_buf;
	u8 *test_buf;
	int i, err;
	static u8 testdata_8bit[8] = { 0x55, 0xaa, 0, 0, 0, 0, 0, 0 };
	static u8 testdata_4bit[4] = { 0x5a, 0, 0, 0 };

	/* dma onto stack is unsafe/nonportable, but callers to this
	 * routine normally provide temporary on-stack buffers ...
	 */
	data_buf = kmalloc(len, GFP_KERNEL);
	if (!data_buf)
		return -ENOMEM;

	if (len == 8)
		test_buf = testdata_8bit;
	else if (len == 4)
		test_buf = testdata_4bit;
	else {
		pr_err("%s: Invalid bus_width %d\n",
		       mmc_hostname(host), len);
		kfree(data_buf);
		return -EINVAL;
	}

	if (opcode == MMC_BUS_TEST_W)
		memcpy(data_buf, test_buf, len);

	mrq.cmd = &cmd;
	mrq.data = &data;
	cmd.opcode = opcode;
	cmd.arg = 0;

	/* NOTE HACK:  the MMC_RSP_SPI_R1 is always correct here, but we
	 * rely on callers to never use this with "native" calls for reading
	 * CSD or CID.  Native versions of those commands use the R2 type,
	 * not R1 plus a data block.
	 */
	cmd.flags = MMC_RSP_SPI_R1 | MMC_RSP_R1 | MMC_CMD_ADTC;

	data.blksz = len;
	data.blocks = 1;
	if (opcode == MMC_BUS_TEST_R)
		data.flags = MMC_DATA_READ;
	else
		data.flags = MMC_DATA_WRITE;

	data.sg = &sg;
	data.sg_len = 1;
	sg_init_one(&sg, data_buf, len);
	mmc_wait_for_req(host, &mrq);
	err = 0;
	if (opcode == MMC_BUS_TEST_R) {
		for (i = 0; i < len / 4; i++)
			if ((test_buf[i] ^ data_buf[i]) != 0xff) {
				err = -EIO;
				break;
			}
	}
	kfree(data_buf);

	if (cmd.error)
		return cmd.error;
	if (data.error)
		return data.error;

	return err;
}

int mmc_bus_test(struct mmc_card *card, u8 bus_width)
{
	int err, width;

	if (bus_width == MMC_BUS_WIDTH_8)
		width = 8;
	else if (bus_width == MMC_BUS_WIDTH_4)
		width = 4;
	else if (bus_width == MMC_BUS_WIDTH_1)
		return 0; /* no need for test */
	else
		return -EINVAL;

	/*
	 * Ignore errors from BUS_TEST_W.  BUS_TEST_R will fail if there
	 * is a problem.  This improves chances that the test will work.
	 */
	mmc_send_bus_test(card, card->host, MMC_BUS_TEST_W, width);
	err = mmc_send_bus_test(card, card->host, MMC_BUS_TEST_R, width);
	return err;
}

int mmc_send_hpi_cmd(struct mmc_card *card, u32 *status)
{
	struct mmc_command cmd = {0};
	unsigned int opcode;
	int err;

	if (!card->ext_csd.hpi) {
		pr_warning("%s: Card didn't support HPI command\n",
			   mmc_hostname(card->host));
		return -EINVAL;
	}

	opcode = card->ext_csd.hpi_cmd;
	if (opcode == MMC_STOP_TRANSMISSION)
		cmd.flags = MMC_RSP_R1B | MMC_CMD_AC;
	else if (opcode == MMC_SEND_STATUS)
		cmd.flags = MMC_RSP_R1 | MMC_CMD_AC;

	cmd.opcode = opcode;
	cmd.arg = card->rca << 16 | 1;

	err = mmc_wait_for_cmd(card->host, &cmd, 0);
	if (err) {
		pr_warn("%s: error %d interrupting operation. "
			"HPI command response %#x\n", mmc_hostname(card->host),
			err, cmd.resp[0]);
		return err;
	}
	if (status)
		*status = cmd.resp[0];

	return 0;
}
#ifdef CONFIG_MMC_PASSWORDS

int sd_send_status(struct mmc_card *card)
{
	int err;
	u32 status;
/* BEGIN PN:DTS2016061204868, Modified by d00168349, 2016/06/13 */
	unsigned long wait_prg_timeout;
	wait_prg_timeout = jiffies + msecs_to_jiffies(SD_OPS_TIMEOUT_MS);
	do {
		err = mmc_send_status(card, &status);
		if (err)
		{
			return err;
		}
		if (card->host->caps & MMC_CAP_WAIT_WHILE_BUSY)
			break;
		if (mmc_host_is_spi(card->host))
			break;
		/* Timeout if the device never leaves the program state. */
		if (time_after(jiffies, wait_prg_timeout))
		{
			printk("[SDLOCK]%s: Card stuck in programming state!\n",__func__);
			return -ETIMEDOUT;
		}

	} while (R1_CURRENT_STATE(status) == R1_STATE_PRG);
/* END PN:DTS2016061204868, Modified by d00168349, 2016/06/13 */
	return err;
}

int sd_send_blocklen(struct mmc_card *card,unsigned int blocklen)
{
	int err;
	struct mmc_command cmd = {0};

	cmd.opcode = MMC_SET_BLOCKLEN;
	cmd.arg = blocklen;
	cmd.flags = MMC_RSP_R1 | MMC_CMD_AC;
	err = mmc_wait_for_cmd(card->host, &cmd, MMC_CMD_RETRIES);
	if (err)
	{
		printk("%s failed blocklen=%d \n",__func__,blocklen);
	}
	return err;
}

int sd_send_lock_unlock_cmd(struct mmc_card *card,u8* data_buf,int data_size,int max_buf_size)
{
	int err;
	struct mmc_request mrq = {0};
	struct mmc_command cmd = {0};
	struct mmc_data data = {0};
	struct scatterlist sg;

	cmd.opcode = MMC_LOCK_UNLOCK;
	cmd.arg = 0;
	cmd.flags = MMC_RSP_R1 | MMC_CMD_ADTC;

	data.blksz = data_size;
	data.blocks = 1;
	data.flags = MMC_DATA_WRITE;
	data.sg = &sg;
	data.sg_len = 1;
	mmc_set_data_timeout(&data, card);
	data.timeout_ns = (2*1000*1000*1000);

	mrq.cmd = &cmd;
	mrq.data = &data;

	sg_init_one(&sg, data_buf, max_buf_size);
	mmc_wait_for_req(card->host, &mrq);
	err = cmd.error;
	if (err)
	{
		printk("%s: lock unlock cmd error %d\n", __func__, cmd.error);
		return err;
	}

	err = data.error;
	if (err)
	{
		dev_err(mmc_dev(card->host), "%s: data error %d\n",	__func__, data.error); 
	}
	return err;
}

int sd_wait_lock_unlock_cmd(struct mmc_card *card,int mode)
{
	int err;
	struct mmc_command cmd = {0};
	unsigned long erase_timeout;
	unsigned long normal_timeout;


	cmd.opcode = MMC_SEND_STATUS;
	cmd.arg = card->rca << 16;
	cmd.flags = MMC_RSP_R1 | MMC_CMD_AC;

	/* set timeout for forced erase operation to 3 min. (see MMC spec) */
	erase_timeout = jiffies + 180 * HZ;
	normal_timeout = jiffies + 10 * HZ;
	if(mode & MMC_LOCK_MODE_ERASE) {
		do {
			/* we cannot use "retries" here because the
			 * R1_LOCK_UNLOCK_FAILED bit is cleared by subsequent reads to
			 * the status register, hiding the error condition */
			err = mmc_wait_for_cmd(card->host, &cmd, 0);
			if (err) {
				printk("[SDLOCK] %s mmc_wait_for_cmd err=%d resp[0] =%x \n",__func__,err,cmd.resp[0]);
				break;
			}

			/* the other modes don't need timeout checking */
			if (!(mode & MMC_LOCK_MODE_ERASE))
				continue;
			if (time_after(jiffies, erase_timeout)) {
				dev_dbg(&card->dev, "forced erase timed out\n");
				err = -ETIMEDOUT;
				break;
			}
		} while (!(cmd.resp[0] & R1_READY_FOR_DATA) || (cmd.resp[0] & R1_CARD_IS_LOCKED));
	} else {
		do {
			/* we cannot use "retries" here because the
			 * R1_LOCK_UNLOCK_FAILED bit is cleared by subsequent reads to
			 * the status register, hiding the error condition */
			err = mmc_wait_for_cmd(card->host, &cmd, 0);
			if (err) {
				printk("[SDLOCK] %s mmc_wait_for_cmd err=%d resp[0] =%x \n",__func__,err,cmd.resp[0]);
				break;
			}

			if (time_after(jiffies, normal_timeout)) {
				dev_dbg(&card->dev, "normal timed out\n");
				err = -ETIMEDOUT;
				printk("[SDLOCK] %s normal timed out err=%d resp[0] =%x \n",__func__,err,cmd.resp[0]);
				break;
			}
		} while (!(cmd.resp[0] & R1_READY_FOR_DATA));
	}

	printk("[SDLOCK] %s MMC_SEND_STATUS and cmd.resp[0] = 0x%x. \r\n",__func__, cmd.resp[0]);

	if (cmd.resp[0] & R1_LOCK_UNLOCK_FAILED) {
		printk("%s: LOCK_UNLOCK operation failed\n", __func__);
		err = -EIO;
        return err;
	}

	if (cmd.resp[0] & R1_CARD_IS_LOCKED)
	{
		printk("%s: R1_CARD_IS_LOCKED\n", __func__);
		mmc_card_set_locked(card);
	}
	else
	{
		printk("%s: R1_CARD_IS_UNLOCKED\n", __func__);
		card->state &= ~MMC_STATE_LOCKED;
	}

	return err;
}

int mmc_lock_unlock_by_buf(struct mmc_card *card, u8* key_buf,int key_len, int mode)
{

	int err, data_size;
	int max_buf_size ;
	u8 *data_buf;
	max_buf_size = 32;
	data_size = 1;
	//max password(16byte) max_key = max_password(old) + max_password(new) + 0xFF + 0xFF = 34
	if(key_len > 30)
	{
		return -EINVAL;
	}
	if (!(mode & MMC_LOCK_MODE_ERASE)) {
//		data_size =  key_len ;
		data_size = max_buf_size;
	}

	data_buf = kzalloc(max_buf_size, GFP_KERNEL);
	if (!data_buf)
	{
		printk("%s kzalloc failed\n",__func__);
		return -ENOMEM;
	}
	memset(data_buf, 0, max_buf_size);
	data_buf[0] |= mode;
	if (mode & MMC_LOCK_MODE_UNLOCK)
		data_buf[0] &= ~MMC_LOCK_MODE_UNLOCK;

	if (!(mode & MMC_LOCK_MODE_ERASE)) {
		data_buf[1] = key_len-2; //exclude end 2 chars (0xFF 0xFF)
		memcpy(data_buf + 2, key_buf, key_len);
	} else {
		data_buf[1] =0xff;
		data_buf[2] = 0xff;
	}

#ifdef CONFIG_MMC_BLOCK_DEFERRED_RESUME
	if (mmc_bus_needs_resume(card->host)) {
		mmc_resume_bus(card->host);
	}
#endif

	/*-----------Set mmc Status Command-----------------------------*/
	err = sd_send_status(card);
	if(err)
	{
		goto out;
	}
	printk("[SDLOCK] %s STATUS data_size=%d\r\n",__func__,data_size);

	/*------------Set Block Length Command--------------------------*/
	err = sd_send_blocklen(card,data_size);
	if(err)
	{
		goto out;
	}
	printk("[SDLOCK] %s MMC_SET_BLOCKLEN \r\n",__func__);

	/*-----------Set Lock/Unlock Command---------------------------*/
	err = sd_send_lock_unlock_cmd(card,data_buf,data_size,max_buf_size);
	if(err)
	{
		goto out;
	}
	printk("[SDLOCK] %s MMC_LOCK_UNLOCK \r\n",__func__);

	/*-------------Set mmc Status Command--------------------*/
	err = sd_wait_lock_unlock_cmd(card,mode);
	if(err) {
		mmc_set_blocklen(card, 512);
		goto out;
	}

	err = mmc_set_blocklen(card, 512);

out:
	kfree(data_buf);

	return err;
}

#endif /* CONFIG_MMC_PASSWORDS */
