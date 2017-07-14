#=============================================================================
#  w62358 DTS2011072902818 hardware self adapter
#  m00182086 DTS2011103102253 sync TI sensor driver
#  hkf20596  DTS2011092500027 platform gpio unite
#  l00186656 DTS2011120701242 unification scheme of regulators
#=============================================================================


obj-y   += camera_legacy/
obj-y   += connectivity/
obj-y   += ext_modem/
#DTS2014120900614 l00284158 20141209 begin
obj-y += chr/
#DTS2014120900614 l00284158 20141209 end
obj-y   += sensor/
obj-y   += inputhub/
obj-y   += touthscreen/
obj-$(CONFIG_MAXQ616_POWER_SWITCH) += irda/
obj-${CONFIG_HUAWEI_DSM} += dsm/
obj-$(CONFIG_LOGGER_EXTEND) += log/
obj-y   += audio/
obj-y   += nfc/
obj-y   += usb/
obj-$(CONFIG_ANTENNA_FPGA) += antenna_fpga/
obj-y   += power/
obj-y	+= storage/
obj-y   += chipverification/
obj-$(CONFIG_HUAWEI_DSM) += recovery/
obj-$(CONFIG_IMMERSION)  += immersion/
obj-y   += tuners/
obj-$(CONFIG_HUAWEI_TSIF) += tsif/
obj-y   += antenna_board_match/