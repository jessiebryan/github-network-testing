/* setup.h: setup stuff
 *
 * Copyright (C) 2004 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

#ifndef _ASM_SETUP_H
#define _ASM_SETUP_H

#define COMMAND_LINE_SIZE       512

#ifdef __KERNEL__

#include <linux/init.h>

#ifndef __ASSEMBLY__

#ifdef CONFIG_MMU
extern unsigned long __initdata num_mappedpages;
#endif

#endif /* !__ASSEMBLY__ */

#endif  /*  __KERNEL__  */

#endif /* _ASM_SETUP_H */
Tue Jul 19 12:37:18 PDT 2016
Fri Jul 22 15:44:21 PDT 2016
Sun, Jul 24, 2016  2:02:30 PM
Mon, Jul 25, 2016  8:31:26 PM
