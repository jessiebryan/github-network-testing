/*
 * tps6507x.h  --  Voltage regulation for the Texas Instruments TPS6507X
 *
 * Copyright (C) 2010 Texas Instruments, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

#ifndef REGULATOR_TPS6507X
#define REGULATOR_TPS6507X

/**
 * tps6507x_reg_platform_data - platform data for tps6507x
 * @defdcdc_default: Defines whether DCDC high or the low register controls
 *	output voltage by default. Valid for DCDC2 and DCDC3 outputs only.
 */
struct tps6507x_reg_platform_data {
	bool defdcdc_default;
};

#endif
Tue Jul 19 12:34:27 PDT 2016
Fri Jul 22 15:39:29 PDT 2016
Sun, Jul 24, 2016  1:26:51 PM
Mon, Jul 25, 2016  6:36:24 PM
Mon, Jul 25, 2016  7:49:20 PM
Tue, Jul 26, 2016  2:24:39 PM
