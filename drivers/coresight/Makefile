#
# Makefile for CoreSight drivers.
#
obj-$(CONFIG_CORESIGHT) += coresight.o
obj-$(CONFIG_OF) += of_coresight.o
obj-$(CONFIG_CORESIGHT_LINK_AND_SINK_TMC) += coresight-tmc.o
obj-$(CONFIG_CORESIGHT_SINK_TPIU) += coresight-tpiu.o
obj-$(CONFIG_CORESIGHT_SINK_ETBV10) += coresight-etb10.o
obj-$(CONFIG_CORESIGHT_LINKS_AND_SINKS) += coresight-funnel.o \
					   coresight-replicator.o

obj-$(CONFIG_CORESIGHT_SOURCE_ETM3X) += coresight-etm3x.o coresight-etm-cp14.o
obj-$(CONFIG_OF) += hisi_hi3630_of_coresight.o
obj-$(CONFIG_HISI_CS) += hisi_hi3630_coresight.o hisi_hi3630_coresight_tmc.o hisi_hi3630_coresight_funnel.o hisi_hi3630_coresight_stm.o hisi_hi3630_coresight_etm.o
