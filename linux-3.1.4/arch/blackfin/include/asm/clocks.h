/*
 * Common Clock definitions for various kernel files
 *
 * Copyright 2007-2008 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _BFIN_CLOCKS_H
#define _BFIN_CLOCKS_H

#include <asm/dpmc.h>

#ifdef CONFIG_CCLK_DIV_1
# define CONFIG_CCLK_ACT_DIV   CCLK_DIV1
# define CONFIG_CCLK_DIV 1
#endif

#ifdef CONFIG_CCLK_DIV_2
# define CONFIG_CCLK_ACT_DIV   CCLK_DIV2
# define CONFIG_CCLK_DIV 2
#endif

#ifdef CONFIG_CCLK_DIV_4
# define CONFIG_CCLK_ACT_DIV   CCLK_DIV4
# define CONFIG_CCLK_DIV 4
#endif

#ifdef CONFIG_CCLK_DIV_8
# define CONFIG_CCLK_ACT_DIV   CCLK_DIV8
# define CONFIG_CCLK_DIV 8
#endif

#ifndef CONFIG_PLL_BYPASS
# ifndef CONFIG_CLKIN_HALF
#  define CONFIG_VCO_HZ   (CONFIG_CLKIN_HZ * CONFIG_VCO_MULT)
# else
#  define CONFIG_VCO_HZ   ((CONFIG_CLKIN_HZ * CONFIG_VCO_MULT)/2)
# endif

# define CONFIG_CCLK_HZ  (CONFIG_VCO_HZ/CONFIG_CCLK_DIV)
# define CONFIG_SCLK_HZ  (CONFIG_VCO_HZ/CONFIG_SCLK_DIV)

#else
# define CONFIG_VCO_HZ   (CONFIG_CLKIN_HZ)
# define CONFIG_CCLK_HZ  (CONFIG_CLKIN_HZ)
# define CONFIG_SCLK_HZ  (CONFIG_CLKIN_HZ)
# define CONFIG_VCO_MULT 0
#endif

#endif
Tue Jul 19 12:35:33 PDT 2016
Fri Jul 22 15:40:58 PDT 2016
Sun, Jul 24, 2016  1:37:24 PM
Mon, Jul 25, 2016  8:01:47 PM
Tue, Jul 26, 2016  2:36:20 PM
