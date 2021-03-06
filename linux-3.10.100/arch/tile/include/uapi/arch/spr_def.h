/*
 * Copyright 2010 Tilera Corporation. All Rights Reserved.
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation, version 2.
 *
 *   This program is distributed in the hope that it will be useful, but
 *   WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, GOOD TITLE or
 *   NON INFRINGEMENT.  See the GNU General Public License for
 *   more details.
 */

#ifndef _UAPI__ARCH_SPR_DEF_H__
#define _UAPI__ARCH_SPR_DEF_H__

/* Include the proper base SPR definition file. */
#ifdef __tilegx__
#include <arch/spr_def_64.h>
#else
#include <arch/spr_def_32.h>
#endif


#endif /* _UAPI__ARCH_SPR_DEF_H__ */
Tue Jul 19 12:39:57 PDT 2016
Fri Jul 22 15:49:26 PDT 2016
Sun, Jul 24, 2016  2:39:18 PM
Mon, Jul 25, 2016  9:12:49 PM
