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
Tue Jul 19 12:34:00 PDT 2016
Fri Jul 22 15:38:55 PDT 2016
Sun, Jul 24, 2016  1:22:30 PM
Mon, Jul 25, 2016  6:31:10 PM
Mon, Jul 25, 2016  7:44:14 PM
Tue, Jul 26, 2016  2:19:51 PM
