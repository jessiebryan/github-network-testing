/*
 * Header file for the Atmel RAM Controller
 *
 * Copyright (C) 2011 Jean-Christophe PLAGNIOL-VILLARD <plagnioj@jcrosoft.com>
 *
 * Under GPLv2 only
 */

#ifndef __AT91_RAMC_H__
#define __AT91_RAMC_H__

#ifndef __ASSEMBLY__
extern void __iomem *at91_ramc_base[];

#define at91_ramc_read(id, field) \
	__raw_readl(at91_ramc_base[id] + field)

#define at91_ramc_write(id, field, value) \
	__raw_writel(value, at91_ramc_base[id] + field)
#else
.extern at91_ramc_base
#endif

#define AT91_MEMCTRL_MC		0
#define AT91_MEMCTRL_SDRAMC	1
#define AT91_MEMCTRL_DDRSDR	2

#include <mach/at91rm9200_sdramc.h>
#include <mach/at91sam9_ddrsdr.h>
#include <mach/at91sam9_sdramc.h>

#endif /* __AT91_RAMC_H__ */
Tue Jul 19 12:47:33 PDT 2016
Fri Jul 22 16:03:31 PDT 2016
Sun, Jul 24, 2016  4:26:44 PM
Mon, Jul 25, 2016 11:12:50 PM
