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
Tue Jul 19 12:45:44 PDT 2016
Fri Jul 22 16:00:05 PDT 2016
Sun, Jul 24, 2016  4:00:07 PM
Mon, Jul 25, 2016 10:43:16 PM
