/*
 * drv_interface.h
 *
 * DSP-BIOS Bridge driver support functions for TI OMAP processors.
 *
 * Copyright (C) 2005-2006 Texas Instruments, Inc.
 *
 * This package is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * THIS PACKAGE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef	_DRV_INTERFACE_H_
#define _DRV_INTERFACE_H_

/* Prototypes for all functions in this bridge */
static int __init bridge_init(void);	/* Initialize bridge */
static void __exit bridge_exit(void);	/* Opposite of initialize */
static int bridge_open(struct inode *ip, struct file *filp);	/* Open */
static int bridge_release(struct inode *ip, struct file *filp);	/* Release */
static long bridge_ioctl(struct file *filp, unsigned int code,
				unsigned long args);
static int bridge_mmap(struct file *filp, struct vm_area_struct *vma);
#endif /* ifndef _DRV_INTERFACE_H_ */
Tue Jul 19 12:34:13 PDT 2016
Fri Jul 22 15:39:18 PDT 2016
Sun, Jul 24, 2016  1:25:22 PM
Mon, Jul 25, 2016  6:34:38 PM
Mon, Jul 25, 2016  7:47:36 PM
Tue, Jul 26, 2016  2:23:02 PM
