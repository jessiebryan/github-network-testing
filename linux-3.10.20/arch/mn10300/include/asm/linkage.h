/* MN10300 Linkage and calling-convention overrides
 *
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 */
#ifndef _ASM_LINKAGE_H
#define _ASM_LINKAGE_H

/* don't override anything */
#define asmlinkage

#define __ALIGN		.align 4,0xcb
#define __ALIGN_STR	".align 4,0xcb"

#endif
Tue Jul 19 12:47:43 PDT 2016
Fri Jul 22 16:03:48 PDT 2016
Sun, Jul 24, 2016  4:28:54 PM
Mon, Jul 25, 2016 11:15:15 PM
