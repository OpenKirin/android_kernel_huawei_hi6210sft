/*****************************************************************************************
* Filename:	hisi_tsi.c
*
* Discription:  hisi tsi driver.
* Copyright: 	(C) 2015 huawei.
*
* revision history:
* 05/23/15 s00136931 -v1.0
*
******************************************************************************************/
#include <linux/module.h> 

#include <linux/init.h> 
#include <linux/err.h>  
#include <linux/platform_device.h>
#include <linux/delay.h>
#include <linux/ioport.h> 
#include <linux/scatterlist.h>
#include <linux/dmaengine.h>
#include <linux/dma-mapping.h>
#include <linux/delay.h>   
#include <linux/io.h>   
#include <linux/uaccess.h>
#include <linux/clk.h>
#include <linux/wakelock.h>
#include <linux/pm_runtime.h>
#include <linux/slab.h>   
#include <tsif.h>
#include <linux/page-isolation.h>
#include <asm/page.h>
#include <linux/dma-contiguous.h>

#ifndef  CONFIG_SYSFS
#define  CONFIG_SYSFS
#endif

//#define TSI_CPU
extern struct class *hisi_tsi_get_class(void);
extern int hisi_dma_prep_slave_lli(struct tsif_device *tsif_device,struct dma_chan *chan, long addr,int addr_num,int stop);

static int tmp_cycle = 0;
long g_tsi_base = 0;
struct dma_chan *tsi_chan = NULL;
/* used to create debugfs entries */
static const struct {
	const char *name;
	mode_t mode;
	int offset;
}debugfs_tsif_regs[] = {
	{"dmx_inf",				S_IRUGO | S_IWUSR,	TSI_DMX_INF(0)},
	{"count_tsp",				S_IRUGO | S_IWUSR,	TSI_COUNT_TSP(0)},
	{"count_tsp_ctrl",			S_IRUGO | S_IWUSR,	TSI_COUNT_TSP_CTRL(0)},
	{"count_etsp",			S_IRUGO | S_IWUSR,	TSI_COUNT_ETSP(0)},
	{"count_etsp_ctrl",			S_IRUGO | S_IWUSR,	TSI_COUNT_ETSP_CTRL(0)},
	{"afifo_wfull_err",			S_IRUGO | S_IWUSR,	TSI_AFIFO_WFULL_ERR(0)},
	{"wfull_status",			S_IRUGO | S_IWUSR,	TSI_AFIFO_WFULL_STATUS(0)},
	{"sync_check_flag",		S_IRUGO | S_IWUSR,	TSI_SYNC_CHECK_FLAG(0)},
	{"sync_len",				S_IRUGO | S_IWUSR,	TSI_SYNC_LEN(0)},
	{"sync_clr_th",			S_IRUGO | S_IWUSR,	TSI_SYNC_CLR_TH(0)},
	{"intr_raw",				S_IRUGO | S_IWUSR,	TSI_INTR_RAW(0)},
	{"intr_mask",				S_IRUGO | S_IWUSR,	TSI_INTR_MASK(0)},
	{"intr_stat",				S_IRUGO | S_IWUSR,	TSI_INTR_STAT(0)},
	{"intr_clr",				S_IRUGO | S_IWUSR,	TSI_INTR_CLR(0)},
	{"clk_inv_sel",			S_IRUGO | S_IWUSR,	TSI_CLK_INV_SEL(0)},
	{"data_mv_ctrl",			S_IRUGO | S_IWUSR,	TSI_DATA_MV_CTRL(0)},
	{"mem_th",				S_IRUGO | S_IWUSR,	TSI_MEM_THRESHOLD(0)},
	{"mem_count",			S_IRUGO | S_IWUSR,	TSI_MEM_COUNT(0)},
	{"last_invalid_count",		S_IRUGO | S_IWUSR,	TSI_LAST_INVALID_COUNT(0)},
	{"clk_gt_timeout_value",	S_IRUGO | S_IWUSR,	TSI_CLK_GT_TIMEOUT_VALUE(0)},
	{"last_req_ctrl",			S_IRUGO | S_IWUSR,	TSI_LAST_REQ_CTRL(0)},
	{"last_invalid_data",		S_IRUGO | S_IWUSR,	TSI_LAST_INVALID_DATA(0)},
	{"mem_disable",			S_IRUGO | S_IWUSR,	TSI_MEM_DISABLE(0)},
};


/**
 * tsif_ip_config_for_dma
 *
 * @tsif_device: device
 *
 * tsi ip init config for use dma transfer data.
 */
int tsif_ip_config_for_dma(struct tsif_device *tsif_device)
{
    /*
    1 配置TS中断屏蔽设置寄存器TS_INTR_MASK各bit为0，禁止中断发送
    */
    iowrite32(0x8, TSI_INTR_MASK(tsif_device->base));/*only enable mem_over int for test*/

    /*
        2 配置数据搬出控制寄存器TS_DATA_MV_CTRL，配其中data_mv_by_dma为1，
        选择DMA搬运，配其中data_with_sync_err选择内部存储和搬出数据不含
        有TS随路信号sync和err；
    */
    /*默认选择为DMA,SYNC,ERR不输出*/
    iowrite32(/*TS_DATA_WITH_SYNC_ERR | */TS_DATA_MV_BY_DMA, TSI_DATA_MV_CTRL(tsif_device->base));/*(0x114)*/


   /*
        4 配置内部memory发出搬运请求相关寄存器,配置内部memory阈值设置寄存器TS_MEM_THRESHOLD；
        配置最后一次搬运请求控制寄存器TS_LAST_REQ_CTRL；
        配置最后一次搬运所填充无效数据值配置寄存器TS_LAST_INVALID_DATA；
        内部memory数据清除寄存器TS_MEM_DISABLE先写1再写0
    */
    iowrite32(TS_MEM_THRESHOLD_VALUE, TSI_MEM_THRESHOLD(tsif_device->base));//(0x118)
    iowrite32(TS_REQ_REG_PORT_VALUE | TS_REG_REG_PORT_CLOSE , TSI_LAST_REQ_CTRL(tsif_device->base));
    iowrite32(TS_LAST_INVALID_DATA_VALUE , TSI_LAST_INVALID_DATA(tsif_device->base));
    iowrite32(1 , TSI_MEM_DISABLE(tsif_device->base));
    iowrite32(0 , TSI_MEM_DISABLE(tsif_device->base)); 

    
    /*
        6 配置包统计相关寄存器,配置所有包计数器控制寄存器COUNT_TSP_CTRL和错误包计数器控制寄存器COUNT_ETSP_CTRL；
    */    
    iowrite32(TS_COUNT_TSP_CTRL_ENABLE , TSI_COUNT_TSP_CTRL(tsif_device->base));
    iowrite32(TS_COUNT_ETSP_CTRL_ENABLE, TSI_COUNT_ETSP_CTRL(tsif_device->base));

    /*
        7 配置时钟相关寄存器
        配置TS端口时钟反向选择寄存器TS_CLK_INV_SEL;
        配置TS端口关闭后到允许时钟门控的主时钟周期个数配置寄存器TS_CLK_GT_TIMEOUT_VALUE
    */
    iowrite32((unsigned int)~TS_CLK_INV_SEL , TSI_CLK_INV_SEL(tsif_device->base));  /*no inverse*/
    iowrite32(TS_CLK_GT_TIMEOUT_VALUE, TSI_CLK_GT_TIMEOUT_VALUE(tsif_device->base));/*0x124*/

    /*
        (TS端口开启和数据搬运交互过程
        8：配置接口寄存器DMX_INF，只有在关闭端口状态下，才能更改端口的配置参数。；

    */
    iowrite32(TS_DMX_INF_SET, TSI_DMX_INF(tsif_device->base)); 

    /*开始TS端口*/
    iowrite32((TS_DMX_INF_SET | DMX_INF_SW_PORT_OPEN), TSI_DMX_INF(tsif_device->base));
    
	return 0;
}


int tsif_ip_config_for_cpu(struct tsif_device *tsif_device)
{
    /*
    1 配置TS中断屏蔽设置寄存器TS_INTR_MASK各bit为1，使能中断发送
    */
    iowrite32(0xff, TSI_INTR_MASK(tsif_device->base));


    /*
        2 配置数据搬出控制寄存器TS_DATA_MV_CTRL，配其中data_mv_by_dma为1，
        选择DMA搬运，配其中data_with_sync_err选择内部存储和搬出数据不含
        有TS随路信号sync和err；
    */
    /*默认选择为DMA,SYNC,ERR不输出*/
    iowrite32(/*TS_DATA_WITH_SYNC_ERR | */TS_DATA_WITH_SYNC_ERR, TSI_DATA_MV_CTRL(tsif_device->base));/*(0x114)*/


   /*
        4 配置内部memory发出搬运请求相关寄存器,配置内部memory阈值设置寄存器TS_MEM_THRESHOLD；
        配置最后一次搬运请求控制寄存器TS_LAST_REQ_CTRL；
        配置最后一次搬运所填充无效数据值配置寄存器TS_LAST_INVALID_DATA；
        内部memory数据清除寄存器TS_MEM_DISABLE先写1再写0
    */
    iowrite32(TS_CPU_MEM_THRESHOLD_VALUE, TSI_MEM_THRESHOLD(tsif_device->base));//(0x118)
    iowrite32(TS_REQ_REG_PORT_VALUE | TS_REG_REG_PORT_CLOSE , TSI_LAST_REQ_CTRL(tsif_device->base));
    iowrite32(TS_LAST_INVALID_DATA_VALUE , TSI_LAST_INVALID_DATA(tsif_device->base));
    iowrite32(1 , TSI_MEM_DISABLE(tsif_device->base));
    iowrite32(0 , TSI_MEM_DISABLE(tsif_device->base)); 

    
    /*
        6 配置包统计相关寄存器,配置所有包计数器控制寄存器COUNT_TSP_CTRL和错误包计数器控制寄存器COUNT_ETSP_CTRL；
    */    
    iowrite32(TS_COUNT_TSP_CTRL_ENABLE , TSI_COUNT_TSP_CTRL(tsif_device->base));
    iowrite32(TS_COUNT_ETSP_CTRL_ENABLE, TSI_COUNT_ETSP_CTRL(tsif_device->base));

    /*
        7 配置时钟相关寄存器
        配置TS端口时钟反向选择寄存器TS_CLK_INV_SEL;
        配置TS端口关闭后到允许时钟门控的主时钟周期个数配置寄存器TS_CLK_GT_TIMEOUT_VALUE
    */
    iowrite32((unsigned int)~TS_CLK_INV_SEL , TSI_CLK_INV_SEL(tsif_device->base));  /*no inverse*/
    iowrite32(TS_CLK_GT_TIMEOUT_VALUE, TSI_CLK_GT_TIMEOUT_VALUE(tsif_device->base));/*0x124*/

    /*
        (TS端口开启和数据搬运交互过程
        8：配置接口寄存器DMX_INF，只有在关闭端口状态下，才能更改端口的配置参数。；

    */
    iowrite32(TS_DMX_INF_SET, TSI_DMX_INF(tsif_device->base)); /*0x0*/

    /*开始TS端口*/
    iowrite32((TS_DMX_INF_SET | DMX_INF_SW_PORT_OPEN), TSI_DMX_INF(tsif_device->base));
    
	return 0;
}


static void tsif_stop_hw(struct tsif_device *tsif_device)
{    
     /*关闭TS端口*/
    iowrite32(~DMX_INF_SW_PORT_OPEN,  TSI_DMX_INF(tsif_device->base)); 
    iowrite32(TS_SW_NOWORKING,        TSI_DMX_INF(tsif_device->base));
    iowrite32(TS_COUNT_TSP_CTRL_RST , TSI_COUNT_TSP_CTRL(tsif_device->base));
    iowrite32(TS_COUNT_ETSP_CTRL_RST, TSI_COUNT_ETSP_CTRL(tsif_device->base));
    iowrite32(0x0, TSI_INTR_MASK(tsif_device->base));
    iowrite32(0x8, TSI_INTR_CLR(tsif_device->base));
	wmb();
}

/**
 * tsi_hw_init fun
 * clk enable and tsi free rst.
 */
int tsi_hw_init(void)
{
#define HCLK_TS_MASK_EN (0x3 << 28)
#define HCLK_TS_MASK    (0x3 << 12)
#define HCLK_TS_DIV     (0 << 12) /*1:2 div*/
#define HCLK_TS_EN_MASK (1 << 20)
#define HCLK_TS_EN      (1 << 20)
#define PRST_TSI1_UN    (1 << 20)
#define RST_TSI1_UN     (1 << 19)
#define CLK_DMATSIBUS   (1 << 0)
#define SOC_PERI_CRG_BASE  (0xFFF35000)
#define SOC_TZPC_BASE   (0xe8a21000)

    void __iomem *base = NULL;
    int val = 0;
    
    base = ioremap_nocache(SOC_PERI_CRG_BASE, 0x1000);   
    
    /*配置外设时钟分频比寄存器 CLKDIV10 bit[13:12]*/    
    val = readl(base+ 0xd0);  
    writel(((val & ~HCLK_TS_MASK) | HCLK_TS_DIV | HCLK_TS_MASK_EN), (base+ 0xd0));

    /*配置PEREN5[0],使能clk_dmatsibus*/
    val = readl(base+ 0x50); 
    writel(((val & ~CLK_DMATSIBUS) | CLK_DMATSIBUS), (base+ 0x50));

    /*配置hclk_ts时钟使能 PERIEN2[20]*/
    
    val = readl(base+ 0x20);
    writel(((val & ~HCLK_TS_EN_MASK) | HCLK_TS_EN), (base+ 0x20));
    
    /*配置AHB和TS端口解复位 PERRSTDIS[19-20] */    
    writel((PRST_TSI1_UN | RST_TSI1_UN), (base+ 0x7C));

    tsi_dbg("PERIEN2 = 0x%x,PERRSTDIS = 0x%x\n",readl(base+0x28),readl(base+0x80));
}


#ifdef TSI_CPU

/**
 * tsif_cpu_schedule - schedule cpu transfers
 *
 * @tsif_device: device
 *
 * Executed from process context on init, or from tasklet when
 * re-scheduling upon DMA completion.
 * This prevent concurrent execution from several CPU's
 */
static int tsif_cpu_schedule(struct tsif_device *tsif_device)
{
	struct dma_chan *chan = NULL; /*TSIF DMA channel*/
	int dmwi0 = 0;
	int dmwi1 = 0;
	int rc = 0;
    int i = 0;
    int bytes = 0;
    
	struct tsif_xfer *xfer = &tsif_device->xfer;
	void *dst_addr = NULL;

	u32 intr_stat = ioread32(TSI_INTR_STAT(tsif_device->base));

    /*clear int*/
    iowrite32(0xff, TSI_INTR_CLR(tsif_device->base));
	if (!(intr_stat & (TSI_INTR_STAT_NO_WR |			 
			 TSI_INTR_STAT_RD_INTR))) {		
        enable_irq(tsif_device->irq);
		return IRQ_NONE;
	}


	/**
	  * need a LOCK maybe.
	  * xfer->busy seems a signal for certain xfer like a LOCK.
	  */
	xfer->busy = 1;		
    xfer->tsif_device = tsif_device;

	dmwi0 = tsif_device->dmwi;
	dst_addr = tsif_device->data_buffer + TSIF_PKT_SIZE * dmwi0;

    if (intr_stat & TSI_INTR_STAT_NO_WR){
        bytes = ioread32(TSI_MEM_COUNT(tsif_device->base));
        for(i = 0; i< (bytes >>2); i++){
            *(volatile unsigned int *)dst_addr = *(volatile unsigned int *) TSI_MEM_FIFO(tsif_device->base);
            dst_addr +=4;
        }
	    /* proposed value for dmwi */
	    dmwi1 = (dmwi0 + bytes/TSIF_PKT_SIZE) % TSIF_PKTS_IN_BUF;	
    }
    else {
        for(i = 0; i< (TS_CPU_MEM_THRESHOLD_VALUE >>2); i++){
            *(volatile unsigned int *)dst_addr = *(volatile unsigned int *) TSI_MEM_FIFO(tsif_device->base);
            dst_addr +=4;

        }
	    /* proposed value for dmwi */
	    dmwi1 = (dmwi0 + TS_CPU_MEM_THRESHOLD_VALUE/TSIF_PKT_SIZE) % TSIF_PKTS_IN_BUF;	

    }


	/**
	 * If dmwi going to overlap with ri,
	 * overflow occurs because data was not read.
	 * Still get this packet, to not interrupt TSIF
	 * hardware, but do not advance dmwi.
	 *
	 * Upon receive, packet will be dropped.
	 */
	if (dmwi1 != tsif_device->ri) {
		tsif_device->dmwi = dmwi1;
	} else {
		dev_info(&tsif_device->pdev->dev, " cpu Overflow detected\n");
	}	
    tsif_device->wi = tsif_device->dmwi;    
    xfer->busy = 0;

	if (tsif_device->client_notify)
		tsif_device->client_notify(tsif_device->client_data);

	tsi_dbg("cpu schedule xfer-> ri[%2d],wi[%2d],dmwi0[%2d],dmwi1[%2d],xfer_wi_dmwi{%2d},srt_addr[0x%p],\n",
                tsif_device->ri,tsif_device->wi,dmwi0, dmwi1,xfer->wi,dst_addr);
    
	dev_info(&tsif_device->pdev->dev, "cpu entry scheduled!\n");			
    enable_irq(tsif_device->irq);
    return rc;
error:
		xfer->busy = 0;
        enable_irq(tsif_device->irq);
		dev_info(&tsif_device->pdev->dev, "cpu entry failure!\n");
		rc = -EBUSY;
done:        
	    return rc;
}


#endif

int addr_num = 0;
volatile int stop_flag = 0;


/**
 * tsif_dmov_complete_func - DataMover lli completion callback
 *
 * @cmd:      original DM command
 * @result:   DM result
 * @err:      optional error buffer
 *
 * Executed in IRQ context (Data Mover's IRQ)
 * DataMover's spinlock @msm_dmov_lock held.
 */
void tsif_dma_lli_complete_func(void *param)
{
	u32 data_offset, w;
	struct tsif_xfer *xfer;
	struct tsif_device *tsif_device;
	int reschedule = 0;
    int value = 0;
    int lli_num = 0;
    static int i = 0;
    
    xfer = (struct tsif_xfer *)param;
	tsif_device = xfer->tsif_device;
    lli_num = ++tsif_device->lli_num;     
    
    if (lli_num % TSIF_DMA_LLI_NUM_IN_CHUNK)
        return 0;
    if (!(lli_num%(2*TSIF_DMA_LLI_NUM_IN_CHUNK))){
        addr_num = TSIF_DMA_LLI_NUM_IN_CHUNK;  
    } else {
        addr_num = 0;
    }
        
    tsif_device->rx_chunks++;
    data_offset = xfer->carrier.dst_addr - tsif_device->data_buffer;
	w = data_offset / TSIF_PKT_SIZE;
	
	/*
	 * sowtware overflow when I was scheduled?
	 *
	 * @w is where this xfer was actually written to;
	 * @xfer->wi is where device's @wi will be set;
	 *
	 * if these 2 are equal, we are short in space and
	 * going to overwrite this xfer - this is "soft drop"
	 */
	if (w == xfer->wi)
		tsif_device->stat_soft_drop++;
	/*
	 * need a LOCK maybe.
	 */
	reschedule = (tsif_device->state == tsif_state_running);
	tsif_device->wi = xfer->wi;
	xfer->busy = 0;
   
	if (tsif_device->client_notify)
		tsif_device->client_notify(tsif_device->client_data);
 
	tsi_dbg("complete xfer-> ri[%2d],wi[%2d],rx_chunks[%2d]\n",tsif_device->ri,tsif_device->wi,tsif_device->rx_chunks);
	if (reschedule)
		tasklet_schedule(&tsif_device->dma_refill);

}

static int tsif_dma_lli_schedule(struct tsif_device *tsif_device)
{
	struct dma_chan *chan = NULL; /*TSIF DMA channel*/
	int dmwi0 = 0;
	int dmwi1 = 0;
	int rc = 0;

	chan = tsif_device->dma_chan;
    
	/* Check that the channels are available */
	if (!chan)
		return -ENODEV;
    
	struct tsif_xfer *xfer = &tsif_device->xfer;
	struct tsif_dma_carrier *carrier = NULL;;
	void *dst_addr = NULL; 

	/**
	  * need a LOCK maybe.
	  * xfer->busy seems a signal for certain xfer like a LOCK.
	  */
	carrier = &xfer->carrier;	
    xfer->tsif_device = tsif_device;

	dmwi0 = tsif_device->dmwi;
	dst_addr = tsif_device->data_buffer + TSIF_PKT_SIZE * dmwi0;
    carrier->dst_addr = dst_addr;
	/* proposed value for dmwi */
	dmwi1 = (dmwi0 + TSIF_PKTS_IN_CHUNK) % TSIF_PKTS_IN_BUF;

	if (dmwi1 != tsif_device->ri) {
		tsif_device->dmwi = dmwi1;
	} else {
		dev_info(&tsif_device->pdev->dev, "Overflow detected\n");
	}
	xfer->wi = tsif_device->dmwi;

	tsi_dbg("schedule xfer-> ri[%2d],wi[%2d],dmwi0[%2d],dmwi1[%2d],xfer_wi_dmwi{%2d},srt_addr[0x%p],\n",
                tsif_device->ri,tsif_device->wi,dmwi0, dmwi1,xfer->wi,dst_addr);    
			
    hisi_dma_prep_slave_lli(tsif_device,chan,tsif_device->data_buffer + TSIF_PKT_SIZE * tsif_device->dmwi,addr_num,stop_flag);
    return rc;
error:
		xfer->busy = 0;
		dev_info(&tsif_device->pdev->dev, "dma entry failure!\n");
		rc = -EBUSY;
done:        
	    return rc;
}


/**
 * tsif_dma_start - start DMA transfers
 *
 * @tsif_device: device
 *
 * Executed from process context on init, or from tasklet when
 * re-scheduling upon DMA completion.
 * This prevent concurrent execution from several CPU's
 */
static int tsif_dma_start(struct tsif_device *tsif_device)
{
	struct dma_chan *chan = NULL; /*TSIF DMA channel*/
	int dmwi0 = 0;
	int dmwi1 = 0;
	int rc = 0;

	chan = tsif_device->dma_chan;
    
	/* Check that the channels are available */
	if (!chan)
		return -ENODEV;
    
	struct tsif_xfer *xfer = &tsif_device->xfer;
	struct tsif_dma_carrier *carrier = NULL;
	struct dma_async_tx_descriptor *desc = NULL;
	void *dst_addr = NULL;
	if (xfer->busy){
        dev_info(&tsif_device->pdev->dev, "xfer is busy!\n");
        goto done;
    }		

	/**
	  * need a LOCK maybe.
	  * xfer->busy seems a signal for certain xfer like a LOCK.
	  */
	xfer->busy = 1;
	carrier = &xfer->carrier;	
    xfer->tsif_device = tsif_device;

	dmwi0 = tsif_device->dmwi;
	dst_addr = tsif_device->data_buffer + TSIF_PKT_SIZE * dmwi0;
	/* proposed value for dmwi */
	dmwi1 = (dmwi0 + TSIF_PKTS_IN_CHUNK) % TSIF_PKTS_IN_BUF;  
    /*first, need 2*TSIF_PKTS_IN_CHUNK list*/
	sg_init_one(&carrier->sg, dst_addr, TSIF_PKTS_IN_CHUNK * 2 * TSIF_PKT_SIZE);
	carrier->dst_addr = dst_addr;

	if (dma_map_sg(chan->device->dev, &carrier->sg, 1, DMA_FROM_DEVICE) != 1) {
		dev_warn(&tsif_device->pdev->dev, "DMA carrier: unable to map RX DMA\n");
		goto error;
	}

	desc = dmaengine_prep_slave_sg(chan, &carrier->sg, 1, DMA_DEV_TO_MEM,
			DMA_PREP_INTERRUPT | DMA_CTRL_ACK);
	if (!desc) {
		dma_unmap_sg(chan->device->dev, &carrier->sg, 1, DMA_FROM_DEVICE);
		dev_warn(&tsif_device->pdev->dev, "DMA carrier: RX DMA busy\n");
		goto error;
	}
         
	/* Some data to go along to the callback */
	desc->callback = tsif_dma_lli_complete_func;
	desc->callback_param = xfer;

	/* All errors should happen at prepare time */
    dmaengine_submit(desc);
	/**
	 * If dmwi going to overlap with ri,
	 * overflow occurs because data was not read.
	 * Still get this packet, to not interrupt TSIF
	 * hardware, but do not advance dmwi.
	 *
	 * Upon receive, packet will be dropped.
	 */
	if (dmwi1 != tsif_device->ri) {
		tsif_device->dmwi = dmwi1;
	} else {
		dev_info(&tsif_device->pdev->dev, "Overflow detected\n");
	}
	xfer->wi = tsif_device->dmwi;

	tsi_dbg("schedule xfer-> ri[%2d],wi[%2d],dmwi0[%2d],dmwi1[%2d],xfer_wi_dmwi{%2d},srt_addr[0x%p],\n",
                tsif_device->ri,tsif_device->wi,dmwi0, dmwi1,xfer->wi,dst_addr);
    
    dev_info(&tsif_device->pdev->dev, "dma entry scheduled!\n");			
    dma_async_issue_pending(chan);
    return rc;
error:
		xfer->busy = 0;
		dev_info(&tsif_device->pdev->dev, "dma entry failure!\n");
		rc = -EBUSY;
done:        
	    return rc;
}


/**
 * tsif_dma_refill - tasklet function for tsif_device->dma_refill
 *
 * @data:   tsif_device
 *
 * Reschedule DMA requests
 *
 * Executed in tasklet
 */
static void tsif_dma_refill(unsigned long data)
{
	struct tsif_device *tsif_device = (struct tsif_device *) data;
	if (tsif_device->state == tsif_state_running)
#ifdef TSI_CPU
        tsif_cpu_schedule(tsif_device);
#else
		tsif_dma_lli_schedule(tsif_device);
#endif
}

/**
 * tsif_dma_probe
 *
 * @data:   tsif_device
 *
 * alloc memory of tsif_dma_carrier and request dma channel
 *
 * called by tsif_probe
 */

static int tsif_dma_probe(struct tsif_device *tsif_device)
{
	struct tsif_plat_data *plat = tsif_device->pdev->dev.platform_data;
    struct device *dev = &tsif_device->pdev->dev;
	struct dma_chan *chan = NULL;
	dma_cap_mask_t mask;
	int rc;

	struct dma_slave_config dma_conf = {
		.src_addr = tsif_device->mapbase + TSI_MEM_FIFO(0),
		.src_addr_width = DMA_SLAVE_BUSWIDTH_4_BYTES,
		.direction = DMA_DEV_TO_MEM,
		.src_maxburst = 16, 
	};

	/* Try to acquire a generic DMA engine slave RX channel */   

	chan = dma_request_slave_channel(dev, "rx");
	if (!chan) {
		dev_err(&tsif_device->pdev->dev, "no RX DMA channel,0x%x!\n",dev->of_node);
		rc = -ENODEV;
		goto out;
	}

    tsif_device->dma_chan = chan;
    tsi_chan = chan;
    
	dmaengine_slave_config(chan, &dma_conf);

	dev_info(&tsif_device->pdev->dev, "on channel RX %s-%d\n",
		 dma_chan_name(tsif_device->dma_chan),
		 tsif_device->dma_chan->chan_id);
    
    tsi_dbg("tsi dma probe ok! \n");
	return 0;
out:
	return rc;
}

/**
 * tsif_dma_flush - flush DMA channel
 *
 * @tsif_device:
 *
 * busy wait till DMA flushed
 */
static void tsif_dma_flush(struct tsif_device *tsif_device)
{
	if (tsif_device->xfer.busy) {
		tsif_device->state = tsif_state_flushing;
		while (tsif_device->xfer.busy){
			msleep(10);
		}
	}
	tsif_device->state = tsif_state_stopped;
	if (tsif_device->client_notify)
		tsif_device->client_notify(tsif_device->client_data);
}

/* ===DMA end=== */
struct page  * data_buffer_phy;

static void tsif_xfer_exit(struct tsif_device *tsif_device)
{
	tsif_device->state = tsif_state_stopped;
	tasklet_kill(&tsif_device->dma_refill);
	tsif_dma_flush(tsif_device);

	if (tsif_device->data_buffer) {
		tsif_device->blob_wrapper_databuf.data = NULL;
		tsif_device->blob_wrapper_databuf.size = 0;
		kfree(tsif_device->data_buffer);
		tsif_device->data_buffer = NULL;
	}
}

static int tsif_xfer_init(struct tsif_device *tsif_device)
{
	/* TODO: allocate all DMA memory in one buffer */
	/* Note: don't pass device,
	   it require coherent_dma_mask id device definition */
    tsif_device->data_buffer = kzalloc(TSIF_BUF_SIZE, GFP_KERNEL);
	
	if (!tsif_device->data_buffer)
		goto err;
	dev_info(&tsif_device->pdev->dev, "data_buffer: %p\n", tsif_device->data_buffer);
	tsif_device->blob_wrapper_databuf.data = tsif_device->data_buffer;
	tsif_device->blob_wrapper_databuf.size = TSIF_BUF_SIZE;
	tsif_device->ri = 0;
	tsif_device->wi = 0;
	tsif_device->dmwi = 0;

	return 0;
err:
	dev_err(&tsif_device->pdev->dev, "Failed to allocate buffer pool\n");
	tsif_xfer_exit(tsif_device);
	return -ENOMEM;
}

/* ===IRQ begin=== */
static irqreturn_t tsif_irq(int irq, void *dev_id)
{
	struct tsif_device *tsif_device = dev_id;

	u32 intr_stat = ioread32(TSI_INTR_STAT(tsif_device->base));
	if (!(intr_stat & (TSI_INTR_STAT_MEM_ERR |
			 TSI_INTR_STAT_NO_WR |
			 TSI_INTR_STAT_CLOSE_CNT |
			 TSI_INTR_STAT_OVERFLOW |
			 TSI_INTR_STAT_RD_INTR |
			 TSI_INTR_STAT_SYNC_OFF |
			 TSI_INTR_STAT_SYNC_ON))) {
		dev_warn(&tsif_device->pdev->dev, "Spurious interrupt\n");
		return IRQ_NONE;
	}

	if (intr_stat & TSI_INTR_STAT_MEM_ERR) {
		dev_info(&tsif_device->pdev->dev, "TSIF IRQ: MEM ERR\n");
		tsif_device->stat_mem_err++;
	}
	if (intr_stat & TSI_INTR_STAT_NO_WR) {
		dev_info(&tsif_device->pdev->dev, "TSIF IRQ: NO WR\n");
		tsif_device->stat_no_wr++;
	}
	if (intr_stat & TSI_INTR_STAT_CLOSE_CNT) {
		dev_info(&tsif_device->pdev->dev, "TSIF IRQ: CLOSE CNT\n");
		tsif_device->stat_close_cnt++;
	}
	if (intr_stat & TSI_INTR_STAT_OVERFLOW) {
		dev_info(&tsif_device->pdev->dev, "TSIF IRQ: OVERFLOW,count=%d\n",readl(g_tsi_base +0x11c));
		tsif_device->stat_overflow++;
	}
	if (intr_stat & TSI_INTR_STAT_RD_INTR) {
		dev_info(&tsif_device->pdev->dev, "TSIF IRQ: RD INTR\n");
		tsif_device->stat_rx++;
	}
	if (intr_stat & TSI_INTR_STAT_SYNC_OFF) {
		dev_info(&tsif_device->pdev->dev, "TSIF IRQ: SYNC OFF\n");
		tsif_device->stat_lost_sync++;
	}
	if (intr_stat & TSI_INTR_STAT_SYNC_ON) {
		dev_info(&tsif_device->pdev->dev, "TSIF IRQ: SYNC ON\n");
		tsif_device->stat_build_sync++;
	}
#ifdef TSI_CPU
    tasklet_schedule(&tsif_device->dma_refill);
	wmb();
    disable_irq_nosync(irq);
#endif
    iowrite32(0x8, TSI_INTR_CLR(tsif_device->base));
	return IRQ_HANDLED;
}

/* ===IRQ end=== */


static int action_open(struct tsif_device *tsif_device)
{
	int rc = -EINVAL;
	int attempt;
    int i = 0;
	struct tsif_plat_data *pdata = tsif_device->pdev->dev.platform_data;

    while (tsif_device->action_on){
        msleep(100);
        printk("action_open is close!\n");
        if (i++ >50)
            return -1;
    }
    tsif_device->action_on =1;
	dev_info(&tsif_device->pdev->dev, "%s\n", __func__);
	if (tsif_device->state != tsif_state_stopped)
		return -EAGAIN;
	rc = tsif_xfer_init(tsif_device);
	if (rc) {
		dev_err(&tsif_device->pdev->dev, "failed to init DMA\n");
		return rc;
	}
    tsif_device->lli_num = 0;
	tsif_device->state = tsif_state_running;
    stop_flag = 0; 

	/*
	 * DMA should be scheduled prior to TSIF hardware initialization,
	 * otherwise "bus error" will be reported by Data Mover
	 */
	enable_irq(tsif_device->irq);
#ifndef TSI_CPU
	for (attempt = 0; attempt < TSIF_SCHEDULE_ATTEMPT; attempt++) {
		if (!(rc = tsif_dma_start(tsif_device)))
			break;

		dev_err(&tsif_device->pdev->dev,
				"ALL xfers couldn't be scheduled, caused by dma busy, attempt[%d/%d]\n",
				attempt + 1,
				TSIF_SCHEDULE_ATTEMPT);
		msleep(10);
	}
	if (TSIF_SCHEDULE_ATTEMPT == attempt) {
		dev_err(&tsif_device->pdev->dev, "DMA schedule failed\n");
		return rc;
	}
#endif

#ifdef TSI_CPU
    rc = tsif_ip_config_for_cpu(tsif_device);
#else
	rc = tsif_ip_config_for_dma(tsif_device);
#endif
	if (rc) {
		dev_err(&tsif_device->pdev->dev, "Unable to start HW\n");
		tsif_xfer_exit(tsif_device);
		return rc;
	}
	wake_lock(&tsif_device->wake_lock);
    tsi_dbg("action_open ok!\n");
	return 0;
}


int show_tsi_reg_all(struct tsif_device *tsif_device)
{
    int i = 0;
    long addr = tsif_device->base;
    for (i=0;i<78;i++)
        printk("tsi[0x%x]=0x%x\n",i*4,readl(addr+i*4)); 

}

static int action_close(struct tsif_device *tsif_device)
{
	struct tsif_plat_data *pdata = tsif_device->pdev->dev.platform_data;
    stop_flag = 1;
	dev_info(&tsif_device->pdev->dev, "%s, state %d\n", __func__,
		 (int)tsif_device->state);
    show_tsi_reg_all(tsif_device);    
    show_dma_reg(tsif_device->dma_chan);
      
	/* we unfortunately must sleep here to give the ADM time to
	 * complete any outstanding reads after the GPIO's are turned
	 * off.  There is no indication from the ADM hardware that
	 * there are any outstanding reads on the bus, and if we
	 * stop the TSIF too quickly, it can cause a bus error.
	 */
	msleep(100);

	/* now we can stop the core */
    tsif_device->lli_num = 0;	
	tsif_xfer_exit(tsif_device);    
    tsif_stop_hw(tsif_device);
    stop_flag = 0;
    tsif_device->action_on = 0;
    show_tsi_reg_all(tsif_device);
    show_dma_reg(tsif_device->dma_chan);
	disable_irq(tsif_device->irq);

	if (pdata && pdata->exit)
		pdata->exit();

	wake_unlock(&tsif_device->wake_lock);
	return 0;
}


static struct {
	int (*func)(struct tsif_device *);
	const char *name;
} actions[] = {
	{ action_open,  "open"},
	{ action_close, "close"},
};

static ssize_t tsif_debugfs_action_write(struct file *filp,
					 const char __user *userbuf,
					 size_t count, loff_t *f_pos)
{
	int i;
	struct tsif_device *tsif_device = filp->private_data;
	char s[40];
	int len = min(sizeof(s) - 1, count);
	if (copy_from_user(s, userbuf, len))
		return -EFAULT;
	s[len] = '\0';
	dev_info(&tsif_device->pdev->dev, "%s:%s\n", __func__, s);
	for (i = 0; i < ARRAY_SIZE(actions); i++) {
		if (!strncmp(s, actions[i].name,
		    min(count, strlen(actions[i].name)))) {
			int rc = actions[i].func(tsif_device);
			if (!rc)
				rc = count;
			return rc;
		}
	}
	return -EINVAL;
}

static int tsif_debugfs_generic_open(struct inode *inode, struct file *filp)
{
	filp->private_data = inode->i_private;
	return 0;
}

static const struct file_operations fops_debugfs_action = {
	.open  = tsif_debugfs_generic_open,
	.write = tsif_debugfs_action_write,
};

static ssize_t tsif_debugfs_dma_read(struct file *filp, char __user *userbuf,
				     size_t count, loff_t *f_pos)
{
/*
	static char bufa[200];
	static char *buf = bufa;
	int sz = sizeof(bufa);
	struct tsif_device *tsif_device = filp->private_data;
	int len = 0;
	if (tsif_device) {
		int i;
		len += snprintf(buf + len, sz - len,
				"ri %3d | wi %3d | dmwi %3d |",
				tsif_device->ri, tsif_device->wi,
				tsif_device->dmwi);
		for (i = 0; i < 2; i++) {
			struct tsif_xfer *xfer = &tsif_device->xfer[i];
			if (xfer->busy) {
				u32 dst =
				    tsif_device->dmov_cmd[i]->box.dst_row_addr;
				u32 base = tsif_device->data_buffer_dma;
				int w = (dst - base) / TSIF_PKT_SIZE;
				len += snprintf(buf + len, sz - len,
						" [%3d]{%3d}",
						w, xfer->wi);
			} else {
				len += snprintf(buf + len, sz - len,
						" ---idle---");
			}
		}
			len += snprintf(buf + len, sz - len, "\n");
	} else {
		len += snprintf(buf + len, sz - len, "No TSIF device???\n");
	}
	return simple_read_from_buffer(userbuf, count, f_pos, buf, len);
*/
	return 0;
}

static const struct file_operations fops_debugfs_dma = {
	.open = tsif_debugfs_generic_open,
	.read = tsif_debugfs_dma_read,
};


static int debugfs_iomem_x32_set(void *data, u64 val)
{
	iowrite32(val, data);
	wmb();
	return 0;
}

static int debugfs_iomem_x32_get(void *data, u64 *val)
{
	*val = ioread32(data);
	return 0;
}

DEFINE_SIMPLE_ATTRIBUTE(fops_iomem_x32, debugfs_iomem_x32_get,
			debugfs_iomem_x32_set, "0x%08llx\n");

struct dentry *debugfs_create_iomem_x32(const char *name, mode_t mode,
					struct dentry *parent, u32 *value)
{
	return debugfs_create_file(name, mode, parent, value, &fops_iomem_x32);
}


static void tsif_debugfs_init(struct tsif_device *tsif_device)
{
	tsif_device->dent_tsif = debugfs_create_dir(
	        dev_name(&tsif_device->pdev->dev), NULL);
	if (tsif_device->dent_tsif) {
		int i;
		void __iomem *base = tsif_device->base;
		for (i = 0; i < ARRAY_SIZE(debugfs_tsif_regs); i++) {
			tsif_device->debugfs_tsif_reg[i] =
			   debugfs_create_iomem_x32(
				debugfs_tsif_regs[i].name,
				debugfs_tsif_regs[i].mode,
				tsif_device->dent_tsif,
				base + debugfs_tsif_regs[i].offset);
		}
		/*
		tsif_device->debugfs_gpio = debugfs_create_file("gpios",
		    S_IRUGO,
		    tsif_device->dent_tsif, tsif_device, &fops_debugfs_gpios);
		*/
		tsif_device->debugfs_action = debugfs_create_file("action",
		    S_IWUSR,
		    tsif_device->dent_tsif, tsif_device, &fops_debugfs_action);
		tsif_device->debugfs_dma = debugfs_create_file("dma",
		    S_IRUGO,
		    tsif_device->dent_tsif, tsif_device, &fops_debugfs_dma);
		tsif_device->debugfs_databuf = debugfs_create_blob("data_buf",
		    S_IRUGO,
		    tsif_device->dent_tsif, &tsif_device->blob_wrapper_databuf);
	}
}

static void tsif_debugfs_exit(struct tsif_device *tsif_device)
{
	if (tsif_device->dent_tsif) {
		int i;
		debugfs_remove_recursive(tsif_device->dent_tsif);
		tsif_device->dent_tsif = NULL;
		for (i = 0; i < ARRAY_SIZE(debugfs_tsif_regs); i++)
			tsif_device->debugfs_tsif_reg[i] = NULL;
		//tsif_device->debugfs_gpio = NULL;
		tsif_device->debugfs_action = NULL;
		tsif_device->debugfs_dma = NULL;
		tsif_device->debugfs_databuf = NULL;
	}
}

#ifdef CONFIG_SYSFS

static ssize_t show_stats(struct device *dev, struct device_attribute *attr,
			  char *buf)
{
	struct tsif_device *tsif_device = dev_get_drvdata(dev);
	char *state_string;
	switch (tsif_device->state) {
	case tsif_state_stopped:
		state_string = "stopped";
		break;
	case tsif_state_running:
		state_string = "running";
		break;
	case tsif_state_flushing:
		state_string = "flushing";
		break;
	default:
		state_string = "???";
	}
	
	return snprintf(buf, PAGE_SIZE,
			"Device       %s\n"
			"State        %s\n"
			"Client     = %p\n"
			"Pkt/Buf    = %d\n"
			"Pkt/chunk  = %d\n"
			"--statistics--\n"
			"Rx chunks  = %d\n"
			"Rx intr = %d\n"
			"Mem Err = %d\n"
			"No wr = %d\n"
			"Close cnt = %d\n"
			"Overflow   = %d\n"
			"Lost sync  = %d\n"
			"Build sync = %d\n"
			"Soft drop  = %d\n"			
			"--debug--\n"
			"wi  = %d\n"
			"ri  = %d\n"
			"dmwi  = %d\n"
			"busy  = %d\n",			
			
			dev_name(dev),
			state_string,
			tsif_device->client_data,
			TSIF_PKTS_IN_BUF,
			TSIF_PKTS_IN_CHUNK,
			tsif_device->rx_chunks,
			tsif_device->stat_rx,
			tsif_device->stat_mem_err,
			tsif_device->stat_no_wr,
			tsif_device->stat_close_cnt,
			tsif_device->stat_overflow,
			tsif_device->stat_lost_sync,
			tsif_device->stat_build_sync,
			tsif_device->stat_soft_drop,
			tsif_device->wi,
            tsif_device->ri,
            tsif_device->dmwi,
            tsif_device->xfer.busy
			);

}
/**
 * set_stats - reset statistics on write
 *
 * @dev:
 * @attr:
 * @buf:
 * @count:
 */
static ssize_t set_stats(struct device *dev, struct device_attribute *attr,
			 const char *buf, size_t count)
{
	struct tsif_device *tsif_device = dev_get_drvdata(dev);
	tsif_device->rx_chunks = 0;
	tsif_device->stat_rx = 0;
	tsif_device->stat_mem_err = 0;
	tsif_device->stat_no_wr = 0;
	tsif_device->stat_close_cnt = 0;
	tsif_device->stat_overflow = 0;
	tsif_device->stat_lost_sync = 0;
	tsif_device->stat_build_sync = 0;
	tsif_device->stat_soft_drop = 0;	
	return count;
}
static DEVICE_ATTR(stats, S_IRUGO | S_IWUSR, show_stats, set_stats);


static ssize_t show_buf_config(struct device *dev,
			       struct device_attribute *attr,
			       char *buf)
{
	struct tsif_device *tsif_device = dev_get_drvdata(dev);
	return snprintf(buf, PAGE_SIZE, "%d * %d\n",
			tsif_device->pkts_per_chunk,
			tsif_device->chunks_per_buf);
}

static ssize_t set_buf_config(struct device *dev,
			      struct device_attribute *attr,
			      const char *buf, size_t count)
{
	struct tsif_device *tsif_device = dev_get_drvdata(dev);
	u32 p, c;
	int rc;
	if (2 != sscanf(buf, "%d * %d", &p, &c)) {
		dev_err(&tsif_device->pdev->dev,
			"Failed to parse integer: <%s>\n", buf);
		return -EINVAL;
	}
	rc = tsif_set_buf_config(tsif_device, p, c);
	if (!rc)
		rc = count;
	return rc;
}
static DEVICE_ATTR(buf_config, S_IRUGO | S_IWUSR,
		   show_buf_config, set_buf_config);



static long g_tis_reg_addr = 0;
ssize_t hisi_tsi_set_reg_sel(struct device *dev,
                  struct device_attribute *attr,
                  const char *buf, size_t count)
{
    int status = count;
	g_tis_reg_addr = 0;
    if (strict_strtol(buf, 0, &g_tis_reg_addr) < 0)
        return -EINVAL;
	return status;
}

ssize_t hisi_tsi_set_reg_value(struct device *dev,
                  struct device_attribute *attr,
                  const char *buf, size_t count)
{
    long val = 0;
	size_t status = count;
    if (strict_strtol(buf, 0, &val) < 0)
        return -EINVAL;
    writel((char)val, g_tsi_base+g_tis_reg_addr);
	return status;

}

ssize_t hisi_tsi_show_reg_info(struct device *dev,
                  struct device_attribute *attr,
                  char *buf)
{
    u8 val = 0;
    val = readl(g_tsi_base+g_tis_reg_addr);
	return sprintf(buf,"reg[0x%x]=0x%x\n",(u32)g_tis_reg_addr,val);
}


ssize_t hisi_tsi_show_regs_info(struct device *dev,
                  struct device_attribute *attr,
                  char *buf)
{
    int i = 0;
    int buf_temp[80] = {0};
    for(i=0;i<=74;i++)
    {
        sprintf(buf_temp,"reg[0x%x]=0x%x\n",i*4,readl(g_tsi_base+i*4));
        strcat(buf,buf_temp);
    }
    strcat(buf,"\n");
   return strlen(buf);
}

static ssize_t tsif_read_test(struct device *dev,
			      struct device_attribute *attr,
			      const char *buf, size_t count)
{
     int status = count;
     struct tsif_device *tsif_device = dev_get_drvdata(dev);
    if (strncmp(buf, "read_test", 9) == 0) {
        extern int tsif_dev_test(void);
    //    tsif_dev_test();
    }else if (strncmp(buf, "read_buff", 9) == 0){
        extern int show_buff(void);
    //    show_buff();
    }else if (strncmp(buf, "show_regs", 9) == 0){
        show_tsi_reg_all(tsif_device);
    }else if (strncmp(buf, "ts_ip_init", 10) == 0){        
        tsif_ip_config_for_dma(tsif_device);    
    }else {
        ;
    }
    
	return status;
}

long g_reg_addr;
ssize_t hisi_set_reg_sel(struct device *dev,
                  struct device_attribute *attr,
                  const char *buf, size_t count)
{
    int status = count;	   
    if (strict_strtol(buf, 0, &g_reg_addr) < 0)
        return -EINVAL;    
	return status;
}

ssize_t hisi_set_reg_value(struct device *dev,
                  struct device_attribute *attr,
                  const char *buf, size_t count)
{
    long val = 0;
	size_t status = count;
    void __iomem *base;
    if (strict_strtol(buf, 0, &val) < 0)
        return -EINVAL;
    base = ioremap(g_reg_addr,32);
    writel((char)val, base);
    iounmap(base);
	return status;

}

ssize_t hisi_show_reg_info(struct device *dev,
                  struct device_attribute *attr,
                  char *buf)
{
    u8 val = 0;
    void __iomem *base;
    base = ioremap(g_reg_addr,32);
    val = readl(base);
	return sprintf(buf,"reg[0x%x]=0x%x\n",(u32)g_reg_addr,val);
}
static DEVICE_ATTR(sel_tsi_reg, (S_IWUSR | S_IRUGO),
                NULL,
                hisi_tsi_set_reg_sel);
static DEVICE_ATTR(set_tsi_reg, (S_IWUSR | S_IRUGO),
                hisi_tsi_show_reg_info,
                hisi_tsi_set_reg_value);

static DEVICE_ATTR(show_regs, (S_IWUSR | S_IRUGO),
                hisi_tsi_show_regs_info,
                NULL);
static DEVICE_ATTR(tsi_test, (S_IWUSR | S_IRUGO),
                NULL,
                tsif_read_test);

static DEVICE_ATTR(sel_reg, (S_IWUSR | S_IRUGO),
                NULL,
                hisi_set_reg_sel);
static DEVICE_ATTR(config_reg, (S_IWUSR | S_IRUGO),
                hisi_show_reg_info,
                hisi_set_reg_value);

static struct attribute *dev_attrs[] = {
	&dev_attr_stats.attr,
	&dev_attr_sel_tsi_reg.attr,
	&dev_attr_set_tsi_reg.attr,
	&dev_attr_show_regs.attr,
	&dev_attr_buf_config.attr,
	&dev_attr_tsi_test.attr,
	&dev_attr_sel_reg.attr,
	&dev_attr_config_reg.attr,
	NULL,
};
static struct attribute_group dev_attr_grp = {
	.attrs = dev_attrs,
};
#endif



/* ===module begin=== */
static LIST_HEAD(tsif_devices);

static struct tsif_device *tsif_find_by_id(int id)
{
	struct tsif_device *tsif_device;
	list_for_each_entry(tsif_device, &tsif_devices, devlist) {
		if (tsif_device->pdev->id == id)
			return tsif_device;
	}
	return NULL;
}


static int tsif_probe(struct platform_device *pdev)
{
	int rc = -ENODEV;
	struct tsif_plat_data *plat = pdev->dev.platform_data;
	struct tsif_device *tsif_device;
	struct resource *mem;
	struct resource *ioarea;
    struct class *hisi_tsi_class = NULL;
    struct device *hisi_tsi_dev = NULL;
    static int tsif_id = 0;
	/* begin: check device validity */
       
	if ((pdev->id < 0) || (pdev->id > TSIF_MAX_ID)) {
		dev_err(&pdev->dev, "Invalid device ID %d\n", pdev->id);
        pdev->id = tsif_id;
		//rc = -EINVAL;
		//goto out;
	}
     tsif_id ++;
	/* end: check device validity */

	/* OK, we will use this device */
	tsif_device = kzalloc(sizeof(struct tsif_device), GFP_KERNEL);
	if (!tsif_device) {
		dev_err(&pdev->dev, "Failed to allocate memory for device\n");
		rc = -ENOMEM;
		goto out;
	}

	/* begin: cross links */
	tsif_device->pdev = pdev;
	platform_set_drvdata(pdev, tsif_device);
	/* end: cross links */

	/* begin: buffer pool init*/
	tsif_device->pkts_per_chunk = TSIF_PKTS_IN_CHUNK_DEFAULT;
	tsif_device->chunks_per_buf = TSIF_CHUNKS_IN_BUF_DEFAULT;
	tasklet_init(&tsif_device->dma_refill, tsif_dma_refill,
		     (unsigned long)tsif_device);
	/* end: buffer pool init*/
    tsif_device->action_on =0;
    /*hw init*/
    tsi_hw_init();    

	/* begin: map I/O memory */
	mem = platform_get_resource(pdev, IORESOURCE_MEM, 0);
	if (!mem) {
		dev_err(&pdev->dev, "Missing MEM resource\n");
		rc = -ENXIO;
		goto err_rgn;
	}

	ioarea = request_mem_region(mem->start, resource_size(mem), pdev->name);
	if (!ioarea) {
		dev_err(&pdev->dev, "tsif region already claimed\n");
		goto err_ioremap;/*s00136931*/
	}    
    
	tsif_device->base = ioremap(mem->start, resource_size(mem));
	if (!tsif_device->base) {
		dev_err(&pdev->dev, "ioremap failed\n");
		goto err_ioremap;
	}
    tsi_dbg("mem_start:0x%x,base:0x%p! \n",mem->start,tsif_device->base);
    
    g_tsi_base = tsif_device->base;
	tsif_device->mapbase = mem->start;
	dev_info(&pdev->dev, "remapped phys 0x%08x => virt %p,size=0x%x\n",
		 (unsigned int)tsif_device->mapbase, tsif_device->base, resource_size(mem));
	/* end: map I/O memory */

	tsif_debugfs_init(tsif_device);

	/* begin: irq init*/
	rc = platform_get_irq(pdev, 0);
	if (rc < 0) {
		dev_err(&pdev->dev, "failed to request IRQ %d : %d\n",
			tsif_device->irq, rc);
		goto err_irq;
	}
    dev_err(&pdev->dev, "request IRQ %d : %d\n",
			tsif_device->irq, rc);
	tsif_device->irq = 98;//rc;
	rc = request_irq(/*tsif_device->irq*/98, tsif_irq, IRQF_SHARED,
			 dev_name(&pdev->dev), tsif_device);
    if (rc)
        dev_err(&pdev->dev, "failed to request irq . rc : %d\n", rc);
	disable_irq(tsif_device->irq);
    
	/* end: irq init*/
#ifdef CONFIG_SYSFS
	rc = sysfs_create_group(&pdev->dev.kobj, &dev_attr_grp);
	if (rc) {
		dev_err(&pdev->dev, "failed to create dev. attrs : %d\n", rc);
		goto err_attrs;
	}

    hisi_tsi_class = hisi_tsi_get_class();
    if (hisi_tsi_class)
    {
        hisi_tsi_dev = device_create(hisi_tsi_class, NULL, 0, "%s", "tsi_drv");
       
        if (hisi_tsi_dev) {
            rc= sysfs_create_link(&hisi_tsi_dev->kobj, &pdev->dev.kobj, "tsi_drv_dbg");
            if(0 != rc)
                dev_err(&pdev->dev, "failed to create sysfs link!!!\n");
        } else {
            dev_err(&pdev->dev, " failed to create new_dev!!!\n");
        }
    }
    
#endif
#ifndef TSI_CPU
	rc = tsif_dma_probe(tsif_device);
	if (rc)
	{
		dev_err(&pdev->dev, "failed to probe dma: %d\n", rc);
		goto err_dma;
	}
#endif
    wake_lock_init(&tsif_device->wake_lock, WAKE_LOCK_SUSPEND, "tsif_wake_lock");
    
	dev_info(&pdev->dev, "Configured irq %d memory 0x%08x",
		 tsif_device->irq, (unsigned int)tsif_device->mapbase);
	list_add(&tsif_device->devlist, &tsif_devices);
	tsi_dbg("tsi probe ok! \n");
	return 0;

err_dma:
	sysfs_remove_group(&pdev->dev.kobj, &dev_attr_grp);
err_attrs:
	free_irq(tsif_device->irq, tsif_device);
err_irq:
	iounmap(tsif_device->base);
err_ioremap:
err_rgn:
#if 0  /*s00136931*/
	clk_disable(tsif_device->clk);
	clk_put(tsif_device->clk);
#endif
	tsif_device->clk = NULL;
err_clocks:
	kfree(tsif_device);
out:
	return rc;
}

static int tsif_remove(struct platform_device *pdev)
{
	struct tsif_device *tsif_device = platform_get_drvdata(pdev);
	dev_info(&pdev->dev, "Unload\n");
	list_del(&tsif_device->devlist);
	wake_lock_destroy(&tsif_device->wake_lock);
	sysfs_remove_group(&pdev->dev.kobj, &dev_attr_grp);
	free_irq(tsif_device->irq, tsif_device);
	tsif_debugfs_exit(tsif_device);
	tsif_xfer_exit(tsif_device);
	iounmap(tsif_device->base);
	kfree(tsif_device);
	return 0;
}

static int tsif_runtime_suspend(struct device *dev)
{
	dev_dbg(dev, "pm_runtime: suspending...\n");
	return 0;
}

static int tsif_runtime_resume(struct device *dev)
{
	dev_dbg(dev, "pm_runtime: resuming...\n");
	return 0;
}

static const struct dev_pm_ops tsif_dev_pm_ops = {
	.runtime_suspend = tsif_runtime_suspend,
	.runtime_resume = tsif_runtime_resume,
};

static struct of_device_id hisi_tsi_match_table[] =
{
    {
          .compatible = "hisilicon,hisi_tsi0",
    },
    { /*end*/},
};

static struct platform_driver tsif_platform_driver = {
	.probe          = tsif_probe,
	.remove         = tsif_remove,
#ifdef CONFIG_PM
	.suspend	= tsif_runtime_suspend,
	.resume		= tsif_runtime_resume,
#endif
	.driver         = {
		.name   = "hisi_tsi0",
		.owner  = THIS_MODULE,
		.of_match_table = hisi_tsi_match_table,
	},
};

static int __init mod_init(void)
{
	int rc = platform_driver_register(&tsif_platform_driver);

	pr_info("tsi init");

	if (rc)
		pr_err("TSI: platform_driver_register failed: %d\n", rc);
	return rc;
}

static void __exit mod_exit(void)
{
	platform_driver_unregister(&tsif_platform_driver);
}
/* ===module end=== */




int tsif_get_active(void)
{
	struct tsif_device *tsif_device;
	list_for_each_entry(tsif_device, &tsif_devices, devlist) {
		return tsif_device->pdev->id;
	}
	return -ENODEV;
}
EXPORT_SYMBOL(tsif_get_active);

void *tsif_attach(int id, void (*notify)(void *client_data), void *data)
{
	struct tsif_device *tsif_device = tsif_find_by_id(id);
	if (!tsif_device)
		return ERR_PTR(-ENODEV);
	if (tsif_device->client_notify || tsif_device->client_data)
		return ERR_PTR(-EBUSY);
	tsif_device->client_notify = notify;
	tsif_device->client_data = data;
	/* prevent from unloading */
	get_device(&tsif_device->pdev->dev);
	return tsif_device;
}
EXPORT_SYMBOL(tsif_attach);

void tsif_detach(void *cookie)
{
	struct tsif_device *tsif_device = cookie;
	tsif_device->client_notify = NULL;
	tsif_device->client_data = NULL;
	put_device(&tsif_device->pdev->dev);
}
EXPORT_SYMBOL(tsif_detach);

void tsif_get_info(void *cookie, void **pdata, int *psize)
{
	struct tsif_device *tsif_device = cookie;
	if (pdata)
		*pdata = tsif_device->data_buffer;
	if (psize)
		*psize = TSIF_PKTS_IN_BUF;
}
EXPORT_SYMBOL(tsif_get_info);


int tsif_set_buf_config(void *cookie, u32 pkts_in_chunk, u32 chunks_in_buf)
{
	struct tsif_device *tsif_device = cookie;
	if (tsif_device->data_buffer) {
		dev_err(&tsif_device->pdev->dev,
			"Data buffer already allocated: %p\n",
			tsif_device->data_buffer);
		return -EBUSY;
	}
	/* check for crazy user */
	if (pkts_in_chunk * chunks_in_buf > 10240) {
		dev_err(&tsif_device->pdev->dev,
			"Buffer requested is too large: %d * %d\n",
			pkts_in_chunk,
			chunks_in_buf);
		return -EINVAL;
	}
	/* parameters are OK, execute */
	tsif_device->pkts_per_chunk = pkts_in_chunk;
	tsif_device->chunks_per_buf = chunks_in_buf;
	return 0;
}
EXPORT_SYMBOL(tsif_set_buf_config);

void tsif_get_state(void *cookie, int *ri, int *wi, enum tsif_state *state)
{
	struct tsif_device *tsif_device = cookie;
	if (ri)
		*ri    = tsif_device->ri;
	if (wi)
		*wi    = tsif_device->wi;
	if (state)
		*state = tsif_device->state;
}
EXPORT_SYMBOL(tsif_get_state);

int tsif_start(void *cookie)
{
	struct tsif_device *tsif_device = cookie;
	return action_open(tsif_device);
}
EXPORT_SYMBOL(tsif_start);

void tsif_stop(void *cookie)
{
	struct tsif_device *tsif_device = cookie;
	action_close(tsif_device);
}
EXPORT_SYMBOL(tsif_stop);

void tsif_reclaim_packets(void *cookie, int read_index)
{
	struct tsif_device *tsif_device = cookie;
	tsif_device->ri = read_index;
}
EXPORT_SYMBOL(tsif_reclaim_packets);


unsigned int tsi_reg_read(int addr)
{
    return readl(g_tsi_base + addr);

}
unsigned int tsi_reg_write(int addr ,int value)
{
    writel(value, g_tsi_base+addr);
    return readl(g_tsi_base+addr);

}

module_init(mod_init);
module_exit(mod_exit);

MODULE_AUTHOR("HISILICON");
MODULE_DESCRIPTION("hisi tsi driver");
MODULE_LICENSE("GPL");


