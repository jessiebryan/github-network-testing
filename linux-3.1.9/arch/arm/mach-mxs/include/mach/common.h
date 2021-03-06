/*
 * Copyright 2004-2007 Freescale Semiconductor, Inc. All Rights Reserved.
 */

/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __MACH_MXS_COMMON_H__
#define __MACH_MXS_COMMON_H__

struct clk;

extern const u32 *mxs_get_ocotp(void);
extern int mxs_reset_block(void __iomem *);
extern void mxs_timer_init(struct clk *, int);

extern int mx23_register_gpios(void);
extern int mx23_clocks_init(void);
extern void mx23_map_io(void);
extern void mx23_init_irq(void);

extern int mx28_register_gpios(void);
extern int mx28_clocks_init(void);
extern void mx28_map_io(void);
extern void mx28_init_irq(void);

extern void icoll_init_irq(void);

#endif /* __MACH_MXS_COMMON_H__ */
Tue Jul 19 12:37:52 PDT 2016
Fri Jul 22 15:45:20 PDT 2016
Sun, Jul 24, 2016  2:09:40 PM
Mon, Jul 25, 2016  8:39:53 PM
