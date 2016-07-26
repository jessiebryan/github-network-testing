/*
 * Copyright (C) 2008-2009 Michal Simek <monstr@monstr.eu>
 * Copyright (C) 2008-2009 PetaLogix
 * Copyright (C) 2006 Atmark Techno, Inc.
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License. See the file "COPYING" in the main directory of this archive
 * for more details.
 */

#ifndef _ASM_MICROBLAZE_CURRENT_H
#define _ASM_MICROBLAZE_CURRENT_H

/*
 * Register used to hold the current task pointer while in the kernel.
 * Any `call clobbered' register without a special meaning should be OK,
 * but check asm/microblaze/kernel/entry.S to be sure.
 */
#define CURRENT_TASK	r31
# ifndef __ASSEMBLY__
/*
 * Dedicate r31 to keeping the current task pointer
 */
register struct task_struct *current asm("r31");

# define get_current()	current
# endif /* __ASSEMBLY__ */

#endif /* _ASM_MICROBLAZE_CURRENT_H */
Tue Jul 19 12:36:11 PDT 2016
Fri Jul 22 15:42:10 PDT 2016
Sun, Jul 24, 2016  1:46:26 PM
Mon, Jul 25, 2016  8:12:27 PM
Tue, Jul 26, 2016  2:46:20 PM
