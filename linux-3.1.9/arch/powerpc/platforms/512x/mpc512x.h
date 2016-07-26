/*
 * Copyright (C) 2007 Freescale Semiconductor, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 *
 * Prototypes for MPC512x shared code
 */

#ifndef __MPC512X_H__
#define __MPC512X_H__
extern void __init mpc512x_init_IRQ(void);
extern void __init mpc512x_init(void);
extern int __init mpc5121_clk_init(void);
void __init mpc512x_declare_of_platform_devices(void);
extern void mpc512x_restart(char *cmd);
extern void mpc512x_init_diu(void);
extern void mpc512x_setup_diu(void);
#endif				/* __MPC512X_H__ */
Tue Jul 19 12:38:02 PDT 2016
Fri Jul 22 15:45:38 PDT 2016
Sun, Jul 24, 2016  2:12:01 PM
Mon, Jul 25, 2016  8:42:28 PM
