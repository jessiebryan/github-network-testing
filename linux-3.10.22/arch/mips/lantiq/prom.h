/*
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License version 2 as published
 *  by the Free Software Foundation.
 *
 * Copyright (C) 2010 John Crispin <blogic@openwrt.org>
 */

#ifndef _LTQ_PROM_H__
#define _LTQ_PROM_H__

#define LTQ_SYS_TYPE_LEN	0x100
#define LTQ_SYS_REV_LEN		0x10

struct ltq_soc_info {
	unsigned char *name;
	unsigned int rev;
	unsigned char rev_type[LTQ_SYS_REV_LEN];
	unsigned int srev;
	unsigned int partnum;
	unsigned int type;
	unsigned char sys_type[LTQ_SYS_TYPE_LEN];
	unsigned char *compatible;
};

extern void ltq_soc_detect(struct ltq_soc_info *i);
extern void ltq_soc_init(void);

extern struct boot_param_header __dtb_start;

#endif
Tue Jul 19 12:48:59 PDT 2016
Fri Jul 22 16:06:12 PDT 2016
Sun, Jul 24, 2016  4:47:20 PM
Mon, Jul 25, 2016 11:35:46 PM
