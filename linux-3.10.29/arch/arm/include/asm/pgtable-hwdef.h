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
Tue Jul 19 12:53:22 PDT 2016
Fri Jul 22 16:14:38 PDT 2016
Sun, Jul 24, 2016  5:50:13 PM
Tue, Jul 26, 2016 12:45:13 AM
