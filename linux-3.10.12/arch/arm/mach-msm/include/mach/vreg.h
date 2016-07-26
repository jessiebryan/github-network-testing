/* linux/include/asm-arm/arch-msm/vreg.h
 *
 * Copyright (C) 2008 Google, Inc.
 * Author: Brian Swetland <swetland@google.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __ARCH_ARM_MACH_MSM_VREG_H
#define __ARCH_ARM_MACH_MSM_VREG_H

struct vreg;

struct vreg *vreg_get(struct device *dev, const char *id);
void vreg_put(struct vreg *vreg);

int vreg_enable(struct vreg *vreg);
int vreg_disable(struct vreg *vreg);
int vreg_set_level(struct vreg *vreg, unsigned mv);

#endif
Tue Jul 19 12:42:30 PDT 2016
Fri Jul 22 15:54:03 PDT 2016
Sun, Jul 24, 2016  3:13:08 PM
Mon, Jul 25, 2016  9:50:59 PM
