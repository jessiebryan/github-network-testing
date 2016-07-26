/*
 * include/linux/platform_data/uio_pruss.h
 *
 * Platform data for uio_pruss driver
 *
 * Copyright (C) 2010-11 Texas Instruments Incorporated - http://www.ti.com/
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation version 2.
 *
 * This program is distributed "as is" WITHOUT ANY WARRANTY of any
 * kind, whether express or implied; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _UIO_PRUSS_H_
#define _UIO_PRUSS_H_

/* To configure the PRUSS INTC base offset for UIO driver */
struct uio_pruss_pdata {
	u32		pintc_base;
	struct gen_pool *sram_pool;
};
#endif /* _UIO_PRUSS_H_ */
Tue Jul 19 12:53:53 PDT 2016
Fri Jul 22 16:15:38 PDT 2016
Sun, Jul 24, 2016  5:57:37 PM
Tue, Jul 26, 2016 12:53:23 AM
