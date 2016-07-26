/* current.h: FRV current task pointer
 *
 * Copyright (C) 2004 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

#ifndef _ASM_CURRENT_H
#define _ASM_CURRENT_H

#ifndef __ASSEMBLY__

/*
 * dedicate GR29 to keeping the current task pointer
 */
register struct task_struct *current asm("gr29");

#define get_current() current

#else

#define CURRENT gr29

#endif

#endif /* _ASM_CURRENT_H */
Tue Jul 19 12:34:46 PDT 2016
Fri Jul 22 15:39:51 PDT 2016
Sun, Jul 24, 2016  1:29:28 PM
Mon, Jul 25, 2016  6:39:32 PM
Mon, Jul 25, 2016  7:52:24 PM
Tue, Jul 26, 2016  2:27:33 PM
