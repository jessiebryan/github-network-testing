/*
 * Copyright (C) 2011 Jean-Christophe PLAGNIOL-VILLARD <plagnioj@jcrosoft.com>
 *
 * Under GPLv2 only
 */

#ifndef __ARCH_SYSTEM_REV_H__
#define __ARCH_SYSTEM_REV_H__

#include <asm/system_info.h>

/*
 * board revision encoding
 * mach specific
 * the 16-31 bit are reserved for at91 generic information
 *
 * bit 31:
 *	0 => nand 8 bit
 *	1 => nand 16 bit
 */
#define BOARD_HAVE_NAND_16BIT	(1 << 31)
static inline int board_have_nand_16bit(void)
{
	return (system_rev & BOARD_HAVE_NAND_16BIT) ? 1 : 0;
}

#endif /* __ARCH_SYSTEM_REV_H__ */
Tue Jul 19 12:46:17 PDT 2016
Fri Jul 22 16:01:07 PDT 2016
Sun, Jul 24, 2016  4:08:17 PM
Mon, Jul 25, 2016 10:52:20 PM
