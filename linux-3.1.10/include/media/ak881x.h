/*
 * Header for AK8813 / AK8814 TV-ecoders from Asahi Kasei Microsystems Co., Ltd. (AKM)
 *
 * Copyright (C) 2010, Guennadi Liakhovetski <g.liakhovetski@gmx.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef AK881X_H
#define AK881X_H

#define AK881X_IF_MODE_MASK	(3 << 0)
#define AK881X_IF_MODE_BT656	(0 << 0)
#define AK881X_IF_MODE_MASTER	(1 << 0)
#define AK881X_IF_MODE_SLAVE	(2 << 0)
#define AK881X_FIELD		(1 << 2)
#define AK881X_COMPONENT	(1 << 3)

struct ak881x_pdata {
	unsigned long flags;
};

#endif
Tue Jul 19 12:33:42 PDT 2016
Fri Jul 22 15:38:26 PDT 2016
Sun, Jul 24, 2016  1:18:50 PM
Mon, Jul 25, 2016  6:26:48 PM
