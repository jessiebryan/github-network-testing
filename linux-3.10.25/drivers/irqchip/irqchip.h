/*
 * Copyright (C) 2012 Thomas Petazzoni
 *
 * Thomas Petazzoni <thomas.petazzoni@free-electrons.com>
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef _IRQCHIP_H
#define _IRQCHIP_H

/*
 * This macro must be used by the different irqchip drivers to declare
 * the association between their DT compatible string and their
 * initialization function.
 *
 * @name: name that must be unique accross all IRQCHIP_DECLARE of the
 * same file.
 * @compstr: compatible string of the irqchip driver
 * @fn: initialization function
 */
#define IRQCHIP_DECLARE(name,compstr,fn)				\
	static const struct of_device_id irqchip_of_match_##name	\
	__used __section(__irqchip_of_table)				\
	= { .compatible = compstr, .data = fn }

#endif
Tue Jul 19 12:51:04 PDT 2016
Fri Jul 22 16:10:08 PDT 2016
Sun, Jul 24, 2016  5:17:09 PM
Tue, Jul 26, 2016 12:08:46 AM
