/*
 *  arch/arm/include/asm/pgtable-hwdef.h
 *
 *  Copyright (C) 1995-2002 Russell King
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef _ASMARM_PGTABLE_HWDEF_H
#define _ASMARM_PGTABLE_HWDEF_H

#ifdef CONFIG_ARM_LPAE
#include <asm/pgtable-3level-hwdef.h>
#else
#include <asm/pgtable-2level-hwdef.h>
#endif

#endif
Tue Jul 19 12:46:55 PDT 2016
Fri Jul 22 16:02:19 PDT 2016
Sun, Jul 24, 2016  4:17:24 PM
Mon, Jul 25, 2016 11:02:30 PM
