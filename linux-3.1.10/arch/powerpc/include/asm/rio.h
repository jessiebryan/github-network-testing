/*
 * RapidIO architecture support
 *
 * Copyright 2005 MontaVista Software, Inc.
 * Matt Porter <mporter@kernel.crashing.org>
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef ASM_PPC_RIO_H
#define ASM_PPC_RIO_H

extern void platform_rio_init(void);
#ifdef CONFIG_FSL_RIO
extern int fsl_rio_mcheck_exception(struct pt_regs *);
#else
static inline int fsl_rio_mcheck_exception(struct pt_regs *regs) {return 0; }
#endif

#endif				/* ASM_PPC_RIO_H */
Tue Jul 19 12:33:23 PDT 2016
Fri Jul 22 15:37:50 PDT 2016
Sun, Jul 24, 2016  1:14:14 PM
Mon, Jul 25, 2016  6:21:18 PM
Mon, Jul 25, 2016  7:34:32 PM
Tue, Jul 26, 2016  2:10:36 PM
