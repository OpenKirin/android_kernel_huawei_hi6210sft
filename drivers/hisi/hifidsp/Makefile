# hifi dsp device driver

subdir-ccflags-y                += -I$(BALONG_TOPDIR)/include/drv/
subdir-ccflags-y        += -I$(BALONG_TOPDIR)/config/product/$(OBB_PRODUCT_NAME)/config
subdir-ccflags-y        += -I$(BALONG_TOPDIR)/ap/platform/$(CFG_PLATFORM)/
subdir-ccflags-y        += -I$(BALONG_TOPDIR)/ap/platform/$(CFG_PLATFORM)/soc/

ifeq ($(CONFIG_SEATTLE),y)
EXTRA_CFLAGS += -DPLATFORM_HI3XXX
EXTRA_CFLAGS += -DMULTI_MIC
endif
ifeq ($(CONFIG_HISILICON_PLATFORM_HI6XXX),y)
EXTRA_CFLAGS += -DPLATFORM_HI6XXX
endif

ifneq ($(TARGET_BUILD_VARIANT),user)
EXTRA_CFLAGS += -DENABLE_HIFI_DEBUG
endif

obj-$(CONFIG_HISILICON_PLATFORM_HIFI_DSP)	+= hifi_lpp.o
obj-$(CONFIG_HISILICON_PLATFORM_HIFI_DSP)	+= hifi_om.o

ifeq ($(CONFIG_SEATTLE),y)
EXTRA_CFLAGS += -I$(BALONG_TOPDIR)/include/drv/
EXTRA_CFLAGS += -I$(BALONG_TOPDIR)/config/product/$(OBB_PRODUCT_NAME)/config/
EXTRA_CFLAGS += -I$(BALONG_TOPDIR)/platform/$(CFG_PLATFORM)/soc/
EXTRA_CFLAGS += -Idrivers/hisi/hifi_mailbox/mailbox
EXTRA_CFLAGS += -Idrivers/hisi/hifi_mailbox/ipcm
endif

