/*
 * Copyright (C) 2011 Ilya Yanok, Emcraft Systems
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#define AM35XX_DEFAULT_MDIO_FREQUENCY	1000000

#if defined(CONFIG_TI_DAVINCI_EMAC) || defined(CONFIG_TI_DAVINCI_EMAC_MODULE)
void am35xx_emac_init(unsigned long mdio_bus_freq, u8 rmii_en);
#else
static inline void am35xx_emac_init(unsigned long mdio_bus_freq, u8 rmii_en) {}
#endif
Tue Jul 19 12:49:31 PDT 2016
Fri Jul 22 16:07:09 PDT 2016
Sun, Jul 24, 2016  4:54:38 PM
Mon, Jul 25, 2016 11:43:55 PM
