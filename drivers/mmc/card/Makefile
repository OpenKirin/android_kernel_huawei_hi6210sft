#
# Makefile for MMC/SD card drivers
#

obj-$(CONFIG_MMC_BLOCK)		+= mmc_block.o
mmc_block-objs			:= block.o queue.o
obj-$(CONFIG_MMC_TEST)		+= mmc_test.o

obj-$(CONFIG_SDIO_UART)		+= sdio_uart.o

# /* BEGIN PN: DTS2014082802676, Added by l00167697, 2014/8/29, add emmc firmware update function*/
obj-$(CONFIG_MMC_FFU)		+= ffu.o
# /* END PN: DTS2014082802676, Added by l00167697, 2014/8/29*/

# /* BEGIN PN:DTS2015110203565 , Modified by cwx212840, 2015/11/02 */
obj-$(CONFIG_HW_SD_HEALTH_DETECT)	+= mmc_health_diag.o
# /* END PN:DTS2015110203565 , Modified by cwx212840, 2015/11/02 */
obj-$(CONFIG_HW_MMC_TEST_MODULE)	+= hw_mmc_test.o
