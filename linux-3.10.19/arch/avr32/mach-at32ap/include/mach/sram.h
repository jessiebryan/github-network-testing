/*
 * Simple SRAM allocator
 *
 * Copyright (C) 2008 Atmel Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __ASM_AVR32_ARCH_SRAM_H
#define __ASM_AVR32_ARCH_SRAM_H

#include <linux/genalloc.h>

extern struct gen_pool *sram_pool;

static inline unsigned long sram_alloc(size_t len)
{
	if (!sram_pool)
		return 0UL;

	return gen_pool_alloc(sram_pool, len);
}

static inline void sram_free(unsigned long addr, size_t len)
{
	return gen_pool_free(sram_pool, addr, len);
}

#endif /* __ASM_AVR32_ARCH_SRAM_H */
Tue Jul 19 12:46:59 PDT 2016
Fri Jul 22 16:02:25 PDT 2016
Sun, Jul 24, 2016  4:18:10 PM
Mon, Jul 25, 2016 11:03:21 PM
