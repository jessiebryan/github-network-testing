/*
 * IBM PPC4xx UIC external definitions and structure.
 *
 * Maintainer: David Gibson <dwg@au1.ibm.com>
 * Copyright 2007 IBM Corporation.
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */
#ifndef _ASM_POWERPC_UIC_H
#define _ASM_POWERPC_UIC_H

#ifdef __KERNEL__

extern void __init uic_init_tree(void);
extern unsigned int uic_get_irq(void);

#endif /* __KERNEL__ */
#endif /* _ASM_POWERPC_UIC_H */
Tue Jul 19 12:52:54 PDT 2016
Fri Jul 22 16:13:45 PDT 2016
Sun, Jul 24, 2016  5:43:30 PM
Tue, Jul 26, 2016 12:37:49 AM
