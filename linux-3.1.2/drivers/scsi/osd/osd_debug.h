/*
 * osd_debug.h - Some kprintf macros
 *
 * Copyright (C) 2008 Panasas Inc.  All rights reserved.
 *
 * Authors:
 *   Boaz Harrosh <bharrosh@panasas.com>
 *   Benny Halevy <bhalevy@panasas.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 *
 */
#ifndef __OSD_DEBUG_H__
#define __OSD_DEBUG_H__

#define OSD_ERR(fmt, a...) printk(KERN_ERR "osd: " fmt, ##a)
#define OSD_INFO(fmt, a...) printk(KERN_NOTICE "osd: " fmt, ##a)

#ifdef CONFIG_SCSI_OSD_DEBUG
#define OSD_DEBUG(fmt, a...) \
	printk(KERN_NOTICE "osd @%s:%d: " fmt, __func__, __LINE__, ##a)
#else
#define OSD_DEBUG(fmt, a...) do {} while (0)
#endif

/* u64 has problems with printk this will cast it to unsigned long long */
#define _LLU(x) (unsigned long long)(x)

#endif /* ndef __OSD_DEBUG_H__ */
Tue Jul 19 12:34:10 PDT 2016
Fri Jul 22 15:39:14 PDT 2016
Sun, Jul 24, 2016  1:24:55 PM
Mon, Jul 25, 2016  6:34:05 PM
Mon, Jul 25, 2016  7:47:04 PM
Tue, Jul 26, 2016  2:22:31 PM
