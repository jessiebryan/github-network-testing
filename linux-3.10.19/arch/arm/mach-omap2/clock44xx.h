/*
 * OMAP4 clock function prototypes and macros
 *
 * Copyright (C) 2009 Texas Instruments, Inc.
 * Copyright (C) 2010 Nokia Corporation
 */

#ifndef __ARCH_ARM_MACH_OMAP2_CLOCK44XX_H
#define __ARCH_ARM_MACH_OMAP2_CLOCK44XX_H

/*
 * OMAP4430_REGM4XEN_MULT: If the CM_CLKMODE_DPLL_ABE.DPLL_REGM4XEN bit is
 *    set, then the DPLL's lock frequency is multiplied by 4 (OMAP4430 TRM
 *    vV Section 3.6.3.3.1 "DPLLs Output Clocks Parameters")
 */
#define OMAP4430_REGM4XEN_MULT	4

int omap4xxx_clk_init(void);

#endif
Tue Jul 19 12:46:57 PDT 2016
Fri Jul 22 16:02:22 PDT 2016
Sun, Jul 24, 2016  4:17:43 PM
Mon, Jul 25, 2016 11:02:51 PM
