/*
 * OMAP4 Clock Management (CM) function prototypes
 *
 * Copyright (C) 2010 Nokia Corporation
 * Paul Walmsley
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __ARCH_ASM_MACH_OMAP2_CMINST44XX_H
#define __ARCH_ASM_MACH_OMAP2_CMINST44XX_H

extern bool omap4_cminst_is_clkdm_in_hwsup(u8 part, s16 inst, u16 cdoffs);
extern void omap4_cminst_clkdm_enable_hwsup(u8 part, s16 inst, u16 cdoffs);
extern void omap4_cminst_clkdm_disable_hwsup(u8 part, s16 inst, u16 cdoffs);
extern void omap4_cminst_clkdm_force_sleep(u8 part, s16 inst, u16 cdoffs);
extern void omap4_cminst_clkdm_force_wakeup(u8 part, s16 inst, u16 cdoffs);
extern int omap4_cminst_wait_module_ready(u8 part, u16 inst, s16 cdoffs, u16 clkctrl_offs);
extern int omap4_cminst_wait_module_idle(u8 part, u16 inst, s16 cdoffs,
					 u16 clkctrl_offs);
extern void omap4_cminst_module_enable(u8 mode, u8 part, u16 inst, s16 cdoffs,
				       u16 clkctrl_offs);
extern void omap4_cminst_module_disable(u8 part, u16 inst, s16 cdoffs,
					u16 clkctrl_offs);
/*
 * In an ideal world, we would not export these low-level functions,
 * but this will probably take some time to fix properly
 */
extern u32 omap4_cminst_read_inst_reg(u8 part, s16 inst, u16 idx);
extern void omap4_cminst_write_inst_reg(u32 val, u8 part, s16 inst, u16 idx);
extern u32 omap4_cminst_rmw_inst_reg_bits(u32 mask, u32 bits, u8 part,
					   s16 inst, s16 idx);
extern u32 omap4_cminst_set_inst_reg_bits(u32 bits, u8 part, s16 inst,
					   s16 idx);
extern u32 omap4_cminst_clear_inst_reg_bits(u32 bits, u8 part, s16 inst,
					   s16 idx);
extern u32 omap4_cminst_read_inst_reg_bits(u8 part, u16 inst, s16 idx,
					   u32 mask);

extern void omap_cm_base_init(void);

#endif
Tue Jul 19 12:38:28 PDT 2016
Fri Jul 22 15:46:28 PDT 2016
Sun, Jul 24, 2016  2:17:56 PM
Mon, Jul 25, 2016  8:49:01 PM
