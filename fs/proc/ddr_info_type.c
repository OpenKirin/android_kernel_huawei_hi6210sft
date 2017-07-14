/* < DTS2015102906014 yaoxi 20151029 begin */
#include <linux/types.h>
#include <linux/proc_fs.h>
#include <linux/ioport.h>
#include <linux/io.h>
#include <linux/seq_file.h>
#include <linux/printk.h>
#include <linux/stat.h>
#include <linux/string.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/errno.h>
#include <linux/string.h>
#include <linux/mm.h>
#include <linux/slab.h>
#include <linux/init.h>
#define SCTL_BASE_ADDR    	ioremap(0xF78013A8 , PAGE_ALIGN(SZ_4K))
#define TYPE_LPDDR2         0
#define TYPE_LPDDR3         1

/****************************************************************************
FUNCTION:
	ddr_type_get
DESCRIPTION:
	getting the DDR type id
RETURN VALUE:
	TYPE_LPDDR2 or TYPE_LPDDR3
****************************************************************************/

static u32 ddr_type_get(void)
{
	u32 ddr_type = 0;
	u32 sctl_reg_value = 0;

	sctl_reg_value = readw((volatile void *)SCTL_BASE_ADDR);
	printk(KERN_NOTICE "%s sctl_reg_value 0x%x\n", __FUNCTION__, sctl_reg_value);
	if(sctl_reg_value & 0x400)
	{
		printk(KERN_NOTICE "%s LPDDR3\n", __FUNCTION__);
		ddr_type = TYPE_LPDDR3;
	}
	else
	{
		printk(KERN_NOTICE "%s LPDDR2\n", __FUNCTION__);
		ddr_type = TYPE_LPDDR2;
	}

	return  ddr_type;
}

static int ddr_info_show(struct seq_file *s, void *data)
{
	const char *str = NULL;
	u32 ddr_type = 0;

	ddr_type = ddr_type_get();
	switch (ddr_type) {
	case TYPE_LPDDR2:
		str = "lpddr2";
		break;
	case TYPE_LPDDR3:
		str = "lpddr3";
		break;
	default:
		str = "invalid_type";
		break;
	}
	seq_printf(s, "%s\n", str);

	return 0;
}

static int ddrinfo_open(struct inode *inode, struct file *file)
{
	return single_open(file, ddr_info_show, NULL);
}

static const struct file_operations proc_ddrinfo_operations = {
	.open		= ddrinfo_open,
	.read		= seq_read,
	.llseek		= seq_lseek,
	.release	= single_release,
};

static int __init proc_ddr_info_init(void)
{
	unsigned int ret;
	ret = (unsigned int)proc_create("ddr_info", 0, NULL, &proc_ddrinfo_operations);
	if(0 == ret)
	{
		printk("%s  /proc/ddr_info init ERROR !\n",__func__);
	}
	return 0;
}

module_init(proc_ddr_info_init);
/* DTS2015102906014 yaoxi 20151029 end > */