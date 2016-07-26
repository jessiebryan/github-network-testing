/*
 * Copyright (C) 2009 ST-Ericsson.
 *
 * This file is licensed under  the terms of the GNU General Public
 * License version 2. This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */
#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

static inline void arch_idle(void)
{
	/*
	 * This should do all the clock switching
	 * and wait for interrupt tricks
	 */
	cpu_do_idle();
}

static inline void arch_reset(char mode, const char *cmd)
{
	/* yet to be implemented - TODO */
}

#endif
Tue Jul 19 12:33:52 PDT 2016
Fri Jul 22 15:38:40 PDT 2016
Sun, Jul 24, 2016  1:20:34 PM
Mon, Jul 25, 2016  6:28:52 PM
Mon, Jul 25, 2016  7:41:58 PM
Tue, Jul 26, 2016  2:17:42 PM
