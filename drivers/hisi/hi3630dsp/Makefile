# hifi dsp device driver

obj-$(CONFIG_SND_HIFI_LPP)	+= hifi_lpp.o
obj-$(CONFIG_SND_HIFI_LOAD)	+= hifi_loader.o
obj-$(CONFIG_SND_HIFI_SEC_LOAD) += hifi_sec_loader.o
EXTRA_CFLAGS += -Idrivers/hisi/hifi_mailbox/mailbox
EXTRA_CFLAGS += -Idrivers/hisi/hifi_mailbox/ipcm
EXTRA_CFLAGS += -I../vendor/hisi/include/drv/
EXTRA_CFLAGS += -I../vendor/hisi/config/product/hi3630_udp/config/
EXTRA_CFLAGS += -I../vendor/hisi/platform/hi3630/soc

