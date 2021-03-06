/*
 * arch/arm/mach-pnx4008/clock.h
 *
 * Clock control driver for PNX4008 - internal header file
 *
 * Author: Vitaly Wool <source@mvista.com>
 *
 * 2006 (c) MontaVista Software, Inc. This file is licensed under
 * the terms of the GNU General Public License version 2. This program
 * is licensed "as is" without any warranty of any kind, whether express
 * or implied.
 */
#ifndef __ARCH_ARM_PNX4008_CLOCK_H__
#define __ARCH_ARM_PNX4008_CLOCK_H__

struct clk {
	const char *name;
	struct clk *parent;
	struct clk *propagate_next;
	u32 rate;
	u32 user_rate;
	s8 usecount;
	u32 flags;
	u32 scale_reg;
	u8 enable_shift;
	u32 enable_reg;
	u8 enable_shift1;
	u32 enable_reg1;
	u32 parent_switch_reg;
	u32(*round_rate) (struct clk *, u32);
	int (*set_rate) (struct clk *, u32);
	int (*set_parent) (struct clk * clk, struct clk * parent);
	int (*enable)(struct clk *);
	void (*disable)(struct clk *);
};

/* Flags */
#define RATE_PROPAGATES      (1<<0)
#define NEEDS_INITIALIZATION (1<<1)
#define PARENT_SET_RATE      (1<<2)
#define FIXED_RATE           (1<<3)

#endif
Tue Jul 19 12:34:42 PDT 2016
Fri Jul 22 15:39:43 PDT 2016
Sun, Jul 24, 2016  1:28:33 PM
Mon, Jul 25, 2016  6:38:26 PM
Mon, Jul 25, 2016  7:51:20 PM
Tue, Jul 26, 2016  2:26:33 PM
