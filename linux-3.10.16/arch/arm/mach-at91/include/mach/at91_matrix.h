/*
 * Copyright (C) 2011 Jean-Christophe PLAGNIOL-VILLARD <plagnioj@jcrosoft.com>
 *
 * Under GPLv2
 */

#ifndef __MACH_AT91_MATRIX_H__
#define __MACH_AT91_MATRIX_H__

#ifndef __ASSEMBLY__
extern void __iomem *at91_matrix_base;

#define at91_matrix_read(field) \
	__raw_readl(at91_matrix_base + field)

#define at91_matrix_write(field, value) \
	__raw_writel(value, at91_matrix_base + field)

#else
.extern at91_matrix_base
#endif

#endif /* __MACH_AT91_MATRIX_H__ */
Tue Jul 19 12:45:04 PDT 2016
Fri Jul 22 15:58:46 PDT 2016
Sun, Jul 24, 2016  3:49:50 PM
