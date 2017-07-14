/*****************************************************************************************
* Filename:	hisi_tsi.h
*
* Discription:  hisi tsi headfile.
* Copyright: 	(C) 2015 huawei.
*
* revision history:
* 2015-5-23 s00136931 -v1.0
*
******************************************************************************************/
#ifndef _TSI_H_
#define _TSI_H_
#include <linux/debugfs.h>
#include <linux/kernel.h>
#include <linux/interrupt.h>
#include "soc_ts_interface.h"
#include "tsif_api.h"

#ifndef BIT
#define BIT(x)      (1 << (x))
#endif


#define tsi_info(fmt,args...) do { printk(KERN_INFO    "[hisi_tsi:info]" fmt, ## args); } while (0)
#define tsi_warn(fmt,args...) do { printk(KERN_WARNING "[hisi_tsi:warn]" fmt, ## args); } while (0)
#define tsi_err(fmt,args...)  do { printk(KERN_ERR     "[hisi_tsi:err]" fmt, ## args); } while (0)
#define tsi_dbg(fmt,args...)  //do { printk(KERN_ERR     "[hisi_tsi:dbg]" fmt, ## args); } while (0)


/*
 * Hisi TSI register offsets
 */
#define TSI_DMX_INF(base)						SOC_TS_DMX_INF_ADDR(base)//(0x000)
#define TSI_COUNT_TSP(base)						SOC_TS_COUNT_TSP_ADDR(base)//(0x004)
#define TSI_COUNT_TSP_CTRL(base)			    SOC_TS_COUNT_TSP_CTRL_ADDR(base)//(0x008)
#define TSI_COUNT_ETSP(base)					SOC_TS_COUNT_ETSP_ADDR(base) //(0x00C)
#define TSI_COUNT_ETSP_CTRL(base)				SOC_TS_COUNT_ETSP_CTRL_ADDR(base)//(0x010)
#define TSI_AFIFO_WFULL_ERR(base)			    SOC_TS_AFIFO_WFULL_ERR_ADDR(base)//(0x014)
#define TSI_AFIFO_WFULL_STATUS(base)		    SOC_TS_AFIFO_WFULL_STATUS_ADDR(base)//(0x018)
#define TSI_SYNC_CHECK_FLAG(base)			    SOC_TS_SYNC_CHECK_FLAG_ADDR(base)//(0x034)
#define TSI_SYNC_LEN(base)						SOC_TS_SYNC_LEN_ADDR(base)//(0x064)
#define TSI_SYNC_CLR_TH(base)					SOC_TS_SYNC_CLR_TH_ADDR(base) //(0x068)
#define TSI_INTR_RAW(base)						SOC_TS_INTR_RAW_ADDR(base) //(0x100)
#define TSI_INTR_MASK(base)						SOC_TS_INTR_MASK_ADDR(base) //(0x104)
#define TSI_INTR_STAT(base)						SOC_TS_INTR_STATUS_ADDR(base)//(0x108)
#define TSI_INTR_CLR(base)						SOC_TS_INTR_CLR_ADDR(base) //(0x10C)
#define TSI_CLK_INV_SEL(base)					SOC_TS_CLK_INV_SEL_ADDR(base) //(0x110)
#define TSI_DATA_MV_CTRL(base)					SOC_TS_DATA_MV_CTRL_ADDR(base) //(0x114)
#define TSI_MEM_THRESHOLD(base)					SOC_TS_MEM_THRESHOLD_ADDR(base)//(0x118)
#define TSI_MEM_COUNT(base)						SOC_TS_MEM_COUNT_ADDR(base) //(0x11C)
#define TSI_LAST_INVALID_COUNT(base)			SOC_TS_LAST_INVALID_COUNT_ADDR(base) //(0x120)
#define TSI_CLK_GT_TIMEOUT_VALUE(base)			SOC_TS_CLK_GT_TIMEOUT_VALUE_ADDR(base)//(0x124)
#define TSI_LAST_REQ_CTRL(base)					SOC_TS_LAST_REQ_CTRL_ADDR(base) //(0x128)
#define TSI_LAST_INVALID_DATA(base)				SOC_TS_LAST_INVALID_DATA_ADDR(base)  //(0x12C)
#define TSI_MEM_DISABLE(base)				    SOC_TS_MEM_DISABLE_ADDR(base) //(0x130)

#define TSI_MEM_FIFO(base)					    (base + 0x200)


/*TSI_DATA_MV_CTRL reg*/
#define TS_DATA_WITH_SYNC_ERR      BIT(0)
#define TS_DATA_MV_BY_DMA          BIT(1)

/*TSI_MEM_THRESHOLD reg*/
#define TS_MEM_THRESHOLD_VALUE     16
#define TS_CPU_MEM_THRESHOLD_VALUE 188

/*TSI_LAST_REQ_CTRL reg*/
#define TS_REQ_REG_PORT_VALUE_SHIFT  (SOC_TS_LAST_REQ_CTRL_req_ref_port_value_START)
#define TS_REQ_REG_PORT_VALUE        (0x80 << TS_REQ_REG_PORT_VALUE_SHIFT)
#define TS_REG_REG_PORT_CLOSE         BIT(28)

/*TSI_LAST_INVALID_DATA reg*/
#define TS_LAST_INVALID_DATA_SHIFT   (SOC_TS_LAST_INVALID_DATA_ts_last_invalid_data_START)
#define TS_LAST_INVALID_DATA_VALUE   (0xff << TS_LAST_INVALID_DATA_SHIFT)

/*TSI_COUNT_TSP_CTRL reg*/
#define TS_COUNT_TSP_CTRL_ENABLE    BIT(0)
#define TS_COUNT_TSP_CTRL_RST       0
#define TS_COUNT_TSP_CTRL_DISABLE   BIT(1)

/*TSI_COUNT_ETSP_CTRL reg*/
#define TS_COUNT_ETSP_CTRL_ENABLE    BIT(0)
#define TS_COUNT_ETSP_CTRL_RST       0
#define TS_COUNT_ETSP_CTRL_DISABLE   BIT(1)

/*TSI_CLK_INV_SEL reg*/
#define TS_CLK_INV_SEL               BIT(0)             

/*TSI_CLK_GT_TIMEOUT_VALUE reg*/
#define TS_CLK_GT_TIMEOUT_VALUE_SHIFT (SOC_TS_CLK_GT_TIMEOUT_VALUE_ts_clk_gt_timeout_value_START)
#define TS_CLK_GT_TIMEOUT_VALUE       (0x40 << TS_CLK_GT_TIMEOUT_VALUE_SHIFT)

/*TSI_DMX_INF reg*/
#define DMX_INF_SW_PORT_OPEN          BIT(31)
#define TS_SW_BIT_SEL_CDATA0          BIT(30)
#define TS_SERIAL_IN                  BIT(29)
#define TS_SW_ERR_BYPASS              BIT(22)
#define TS_SW_SERIAL_SYNCBIT_MODE     BIT(18)
#define TS_SW_NOWORKING               BIT(28)
#define TS_SW_POL_ERR                 BIT(25)
#define TS_SW_SYNC_MODE               BIT(20)
#define TS_DMX_INF_SET               (TS_SW_BIT_SEL_CDATA0 | TS_SERIAL_IN | TS_SW_ERR_BYPASS | TS_SW_SERIAL_SYNCBIT_MODE | TS_SW_SYNC_MODE)

/* 
 * bits for HiTSIFV100 TSIF_INTR_STAT register
 * default: 0x00000000
 */
#define TSI_INTR_STAT_MEM_ERR			BIT(6)
#define TSI_INTR_STAT_NO_WR				BIT(5)
#define TSI_INTR_STAT_CLOSE_CNT			BIT(4)
#define TSI_INTR_STAT_OVERFLOW			BIT(3)
#define TSI_INTR_STAT_RD_INTR			BIT(2)
#define TSI_INTR_STAT_SYNC_OFF			BIT(1)
#define TSI_INTR_STAT_SYNC_ON			BIT(0)


#define TSIF_SCHEDULE_CAPACITY 2
#define TSIF_SCHEDULE_ATTEMPT 2




struct tsif_plat_data {
	bool (*dma_filter)(struct dma_chan *chan, void *filter_param);
	void *dma_rx_param;
	void (*init) (void);
	void (*exit) (void);

};

struct tsif_dma_carrier {
	void *dst_addr;
	struct scatterlist sg;
};

struct tsif_device; 
struct tsif_xfer {
	struct tsif_dma_carrier carrier;
	struct  tsif_device *tsif_device;
	int busy;
	int wi;   /**< set devices's write index after xfer */
};

struct tsif_device {
	struct list_head devlist;
	struct platform_device *pdev;
	unsigned long mapbase; 
	void __iomem *base;
	unsigned int irq;
	struct clk *clk;

	enum tsif_state state;
	struct wake_lock wake_lock;

	/* debugfs */
	struct dentry *dent_tsif;
	struct dentry *debugfs_tsif_reg[32];//[ARRAY_SIZE(debugfs_tsif_regs)];
	struct dentry *debugfs_action;
	struct dentry *debugfs_dma;
	struct dentry *debugfs_databuf;
	struct debugfs_blob_wrapper blob_wrapper_databuf;
	/* DMA related */
	struct dma_chan *dma_chan;
	void *data_buffer;
	u32 pkts_per_chunk;
	u32 chunks_per_buf;
	int ri;
	int wi;
	int dmwi;  /**< DataMover write index */
	struct tsif_xfer xfer;
	struct tasklet_struct dma_refill;
    int lli_num;
    int action_on;
	/* statistics */
	u32 stat_mem_err;
	u32 stat_no_wr;
	u32 stat_close_cnt;
	u32 stat_overflow;
	u32 stat_rx;
	u32 stat_lost_sync;
	u32 stat_build_sync;

	u32 rx_chunks;
	u32 stat_soft_drop;
	/* client */
	void *client_data;
	void (*client_notify)(void *client_data);
};

/*
 * Data buffering parameters
 *
 * Data stored in cyclic buffer;
 *
 * Data organized in chunks of packets.
 * One chunk processed at a time by the data mover
 *
 */

/*TSIF_PKTS_IN_CHUNK_DEFAULT* TSIF_PKT_SIZE  must is even*DMA_MAX_SIZE*/
#define TSIF_PKTS_IN_CHUNK_DEFAULT  (32*8)  /**< packets in one DM chunk */
#define TSIF_CHUNKS_IN_BUF_DEFAULT  (16)
#define TSIF_PKTS_IN_CHUNK        (tsif_device->pkts_per_chunk)
#define TSIF_CHUNKS_IN_BUF        (tsif_device->chunks_per_buf)
#define TSIF_PKTS_IN_BUF          (TSIF_PKTS_IN_CHUNK * TSIF_CHUNKS_IN_BUF)
#define TSIF_BUF_SIZE             (TSIF_PKTS_IN_BUF * TSIF_PKT_SIZE)
#define TSIF_CHUNK_SIZE           (TSIF_PKTS_IN_CHUNK * TSIF_PKT_SIZE)
#define TSIF_MAX_ID               1
#define TSIF_DMA_LLI_NUM_IN_CHUNK (TSIF_CHUNK_SIZE/0x1980) /* n*DMA_MAX_SIZE */

#define TSIF_SCHEDULE_ATTEMPT 2


#endif /* _TSI_H_ */

