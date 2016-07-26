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
Tue Jul 19 12:36:48 PDT 2016
Fri Jul 22 15:43:24 PDT 2016
Sun, Jul 24, 2016  1:55:31 PM
Mon, Jul 25, 2016  8:23:09 PM
