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

struct ltq_soc_info {
	unsigned char *name;
	unsigned int rev;
	unsigned int partnum;
	unsigned int type;
	unsigned char sys_type[LTQ_SYS_TYPE_LEN];
};

extern void ltq_soc_detect(struct ltq_soc_info *i);
extern void ltq_soc_setup(void);

#endif
Tue Jul 19 12:33:22 PDT 2016
Fri Jul 22 15:37:47 PDT 2016
Sun, Jul 24, 2016  1:13:52 PM
Mon, Jul 25, 2016  6:20:51 PM
Mon, Jul 25, 2016  7:34:06 PM
Tue, Jul 26, 2016  2:10:12 PM
