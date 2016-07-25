/*
 * Marvell EBU gating clock handling
 *
 * Copyright (C) 2012 Marvell
 *
 * Thomas Petazzoni <thomas.petazzoni@free-electrons.com>
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __MVEBU_CLK_GATING_H
#define __MVEBU_CLK_GATING_H

#ifdef CONFIG_MVEBU_CLK_GATING
void __init mvebu_gating_clk_init(void);
#else
void mvebu_gating_clk_init(void) {}
#endif

#endif
Tue Jul 19 12:49:06 PDT 2016
Fri Jul 22 16:06:25 PDT 2016
Sun, Jul 24, 2016  4:48:57 PM
