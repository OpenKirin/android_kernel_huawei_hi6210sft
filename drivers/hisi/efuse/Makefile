ccflags-$(CONFIG_HI6XXX_EFUSE) += -I$(srctree)/drivers/hisi/ipc_hi6xxx
obj-$(CONFIG_HI6XXX_EFUSE)  += hisi_efuse.o
obj-$(CONFIG_HI3XXX_EFUSE)	+= hisi_efuse.o
obj-$(CONFIG_HI3630_EFUSE)	+= hisi_efuse_hi3630.o

ifeq ($(CONFIG_ATFDRIVER), y)
EXTRA_CFLAGS += -Idrivers/atfdriver
endif
ifeq ($(CONFIG_TZDRIVER), y)
EXTRA_CFLAGS += -Idrivers/tzdriver
endif
