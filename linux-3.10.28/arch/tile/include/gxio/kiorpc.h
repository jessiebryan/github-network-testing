/*
 * Copyright 2012 Tilera Corporation. All Rights Reserved.
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation, version 2.
 *
 *   This program is distributed in the hope that it will be useful, but
 *   WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, GOOD TITLE or
 *   NON INFRINGEMENT.  See the GNU General Public License for
 *   more details.
 *
 * Support routines for kernel IORPC drivers.
 */

#ifndef _GXIO_KIORPC_H
#define _GXIO_KIORPC_H

#include <linux/types.h>
#include <asm/page.h>
#include <arch/chip.h>

#if CHIP_HAS_MMIO()
void __iomem *iorpc_ioremap(int hv_fd, resource_size_t offset,
			    unsigned long size);
#endif

#endif /* _GXIO_KIORPC_H */
Tue Jul 19 12:52:57 PDT 2016
Fri Jul 22 16:13:50 PDT 2016
Sun, Jul 24, 2016  5:44:10 PM
Tue, Jul 26, 2016 12:38:34 AM
