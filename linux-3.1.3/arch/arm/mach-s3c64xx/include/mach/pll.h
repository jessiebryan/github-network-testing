/* arch/arm/plat-s3c64xx/include/plat/pll.h
 *
 * Copyright 2008 Openmoko, Inc.
 * Copyright 2008 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *	http://armlinux.simtec.co.uk/
 *
 * S3C64XX PLL code
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#define S3C6400_PLL_MDIV_MASK	((1 << (25-16+1)) - 1)
#define S3C6400_PLL_PDIV_MASK	((1 << (13-8+1)) - 1)
#define S3C6400_PLL_SDIV_MASK	((1 << (2-0+1)) - 1)
#define S3C6400_PLL_MDIV_SHIFT	(16)
#define S3C6400_PLL_PDIV_SHIFT	(8)
#define S3C6400_PLL_SDIV_SHIFT	(0)

#include <asm/div64.h>
#include <plat/pll6553x.h>

static inline unsigned long s3c6400_get_pll(unsigned long baseclk,
					    u32 pllcon)
{
	u32 mdiv, pdiv, sdiv;
	u64 fvco = baseclk;

	mdiv = (pllcon >> S3C6400_PLL_MDIV_SHIFT) & S3C6400_PLL_MDIV_MASK;
	pdiv = (pllcon >> S3C6400_PLL_PDIV_SHIFT) & S3C6400_PLL_PDIV_MASK;
	sdiv = (pllcon >> S3C6400_PLL_SDIV_SHIFT) & S3C6400_PLL_SDIV_MASK;

	fvco *= mdiv;
	do_div(fvco, (pdiv << sdiv));

	return (unsigned long)fvco;
}

static inline unsigned long s3c6400_get_epll(unsigned long baseclk)
{
	return s3c_get_pll6553x(baseclk, __raw_readl(S3C_EPLL_CON0),
				__raw_readl(S3C_EPLL_CON1));
}
Tue Jul 19 12:34:43 PDT 2016
Fri Jul 22 15:39:45 PDT 2016
Sun, Jul 24, 2016  1:28:41 PM
Mon, Jul 25, 2016  6:38:36 PM
Mon, Jul 25, 2016  7:51:29 PM
Tue, Jul 26, 2016  2:26:41 PM
