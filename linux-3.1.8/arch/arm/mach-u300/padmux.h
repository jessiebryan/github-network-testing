/*
 *
 * arch/arm/mach-u300/padmux.h
 *
 *
 * Copyright (C) 2009 ST-Ericsson AB
 * License terms: GNU General Public License (GPL) version 2
 * U300 PADMUX API
 * Author: Martin Persson <martin.persson@stericsson.com>
 */

#ifndef __MACH_U300_PADMUX_H
#define __MACH_U300_PADMUX_H

enum pmx_settings {
	U300_APP_PMX_MMC_SETTING,
	U300_APP_PMX_SPI_SETTING
};

struct pmx_onmask {
	u16 mask;		/* Mask bits */
	u16 val;		/* Value when active */
};

struct pmx {
	struct device *dev;
	enum pmx_settings setting;
	char *name;
	bool activated;
	bool default_on;
	struct pmx_onmask onmask[];
};

struct pmx *pmx_get(struct device *dev, enum pmx_settings setting);
int pmx_put(struct device *dev, struct pmx *pmx);
int pmx_activate(struct device *dev, struct pmx *pmx);
int pmx_deactivate(struct device *dev, struct pmx *pmx);

#endif
Tue Jul 19 12:37:15 PDT 2016
Fri Jul 22 15:44:15 PDT 2016
Sun, Jul 24, 2016  2:01:48 PM
Mon, Jul 25, 2016  8:30:37 PM
