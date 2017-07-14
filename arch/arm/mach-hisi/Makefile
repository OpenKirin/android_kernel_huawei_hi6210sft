#
# Makefile for Hisilicon HI3630FPGA line
#
subdir-ccflags-y                += -I$(BALONG_TOPDIR)/config/product/$(OBB_PRODUCT_NAME)/config
subdir-ccflags-y                += -I$(BALONG_TOPDIR)/ap/platform/$(CFG_PLATFORM)/
subdir-ccflags-y   		+= -I$(BALONG_TOPDIR)/ap/platform/$(CFG_PLATFORM)/soc/

ccflags-$(CONFIG_ARCH_MULTIPLATFORM) := -I$(srctree)/$(src)/include
obj-$(CONFIG_ARCH_HI6XXX) += hi6xxx_io.o hisi_6xxx_sft.o

obj-$(CONFIG_ARCH_HI3630FPGA)	+= hisi_3630fpga.o
obj-$(CONFIG_ARCH_HI3630EMULATOR)	+= hisi_3630emulator.o
obj-$(CONFIG_ARCH_HI3630)	+= hisi_3630.o

#obj-$(CONFIG_LOCAL_TIMERS)	     += hi6xxx_localtimer.o

obj-$(CONFIG_HISI_MAILBOX)	+= hisi_mailbox.o
obj-$(CONFIG_HISI_LPM3)		+= hisi_lowpowerm3.o

ifeq ($(CONFIG_SECURE_EXTENSION), y)
obj-$(CONFIG_ARM_PSCI)          += hisi_pm_psci.o
else
obj-$(CONFIG_HI3630_LPM3_IPC)	+= hisi_ipc.o
#obj-$(CONFIG_SMP)		+= hisi_pm.o hisi_pm_setup.o
endif
ifeq ($(CONFIG_TZDRIVER), y)
EXTRA_CFLAGS += -Idrivers/tzdriver
endif

obj-$(CONFIG_PM_AUTOSLEEP) += pm.o
obj-$(CONFIG_PM_AUTOSLEEP) += hisi_sync_th.o
obj-$(CONFIG_HISI_SR_DEBUG) += hisi_lpregs.o
obj-$(CONFIG_HISI_LPM3_VIEWER)	+= hisi_lpm3_viewer.o

#obj-$(CONFIG_HISI_UDP_BOARDID)		+= hisi_udp_board_id.o
