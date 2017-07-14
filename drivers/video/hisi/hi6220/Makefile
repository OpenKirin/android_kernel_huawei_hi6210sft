obj-$(CONFIG_FB_HI6220_CLCD) := balongfb.o
#obj-m := balongfb.o

balongfb-objs := \
	ade_cmdqueue.o \
	ade_overlay.o \
	ade_reg.o \
	backlight_pwm.o \
	balong_compose.o \
	balong_fb.o \
	balong_fb_panel.o \
	mipi_dsi_host.o \
	mipi_reg.o \
	ldi.o \
	ldi_reg.o \
	mipi_dsi.o \
	hisi_fb_sysfs.o \
	hw_lcd_common.o

balongfb-objs += \
	../panel/mipi_tm_NT35521.o \
	../panel/mipi_boe_NT35521.o \
	../panel/mipi_yassy_HX8394.o \
	../panel/mipi_jdi_OTM1902B_fhd.o \
	../panel/mipi_cmi_NT35521.o \
	../panel/mipi_tm_HX8394.o \
	../panel/mipi_yassy_ILI9881-3.o \
	../panel/mipi_cmi_OTM1284A.o \
	../panel/mipi_cmi_OTM1283A.o \
	../panel/mipi_tm_OTM1287A_CHM.o \
	../panel/mipi_boe_NT35521_5P0.o \
	../panel/mipi_boe_NT35521S_5P0.o \
	../panel/mipi_boe_NT35521N_5P0.o \
	../panel/mipi_tm_OTM1287A_ALE.o \
	../panel/mipi_boe_NT35521_5P0_3lane.o \
	../panel/mipi_boe_NT35521N_5P0_3lane.o \
	../panel/mipi_cmi_OTM1283A_3lane.o \
	../panel/mipi_tm_OTM1287A_3lane.o \
	../panel/mipi_tm_HX8394F.o \
	../panel/mipi_boe_ILI9881C.o \
	../panel/mipi_cmi_NT35521S.o
all:
	make $(KERNEL_MAKE) M=$(PWD) modules
clean:
	make $(KERNEL_MAKE) M=$(PWD) clean
#	rm *.o .*cmd

