/*
 * Copyright (C) 2009 Lemote, Inc.
 * Author: Wu Zhangjin <wuzhangjin@gmail.com>
 *
 * This program is free software; you can redistribute	it and/or modify it
 * under  the terms of	the GNU General	 Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef __ASM_MACH_LOONGSON_MEM_H
#define __ASM_MACH_LOONGSON_MEM_H

/*
 * high memory space
 *
 * in loongson2e, starts from 512M
 * in loongson2f, starts from 2G 256M
 */
#ifdef CONFIG_CPU_LOONGSON2E
#define LOONGSON_HIGHMEM_START	0x20000000
#else
#define LOONGSON_HIGHMEM_START	0x90000000
#endif

/*
 * the peripheral registers(MMIO):
 *
 * On the Lemote Loongson 2e system, reside between 0x1000:0000 and 0x2000:0000.
 * On the Lemote Loongson 2f system, reside between 0x1000:0000 and 0x8000:0000.
 */

#define LOONGSON_MMIO_MEM_START 0x10000000

#ifdef CONFIG_CPU_LOONGSON2E
#define LOONGSON_MMIO_MEM_END	0x20000000
#else
#define LOONGSON_MMIO_MEM_END	0x80000000
#endif

#endif /* __ASM_MACH_LOONGSON_MEM_H */
Tue Jul 19 12:48:58 PDT 2016
Fri Jul 22 16:06:10 PDT 2016
Sun, Jul 24, 2016  4:47:05 PM
Mon, Jul 25, 2016 11:35:29 PM
