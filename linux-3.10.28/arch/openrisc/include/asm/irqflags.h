/*
 * OpenRISC Linux
 *
 * Linux architectural port borrowing liberally from similar works of
 * others.  All original copyrights apply as per the original source
 * declaration.
 *
 * OpenRISC implementation:
 * Copyright (C) 2003 Matjaz Breskvar <phoenix@bsemi.com>
 * Copyright (C) 2010-2011 Jonas Bonn <jonas@southpole.se>
 * et al.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef ___ASM_OPENRISC_IRQFLAGS_H
#define ___ASM_OPENRISC_IRQFLAGS_H

#include <asm/spr_defs.h>

#define ARCH_IRQ_DISABLED        0x00
#define ARCH_IRQ_ENABLED         (SPR_SR_IEE|SPR_SR_TEE)

#include <asm-generic/irqflags.h>

#endif /* ___ASM_OPENRISC_IRQFLAGS_H */
Tue Jul 19 12:52:53 PDT 2016
Fri Jul 22 16:13:42 PDT 2016
Sun, Jul 24, 2016  5:43:14 PM
Tue, Jul 26, 2016 12:37:32 AM
