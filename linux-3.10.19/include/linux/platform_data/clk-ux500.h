/*
 * Clock definitions for ux500 platforms
 *
 * Copyright (C) 2012 ST-Ericsson SA
 * Author: Ulf Hansson <ulf.hansson@linaro.org>
 *
 * License terms: GNU General Public License (GPL) version 2
 */

#ifndef __CLK_UX500_H
#define __CLK_UX500_H

void u8500_clk_init(u32 clkrst1_base, u32 clkrst2_base, u32 clkrst3_base,
		    u32 clkrst5_base, u32 clkrst6_base);
void u9540_clk_init(void);
void u8540_clk_init(void);

#endif /* __CLK_UX500_H */
Tue Jul 19 12:47:25 PDT 2016
Fri Jul 22 16:03:15 PDT 2016
