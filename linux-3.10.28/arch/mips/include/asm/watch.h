/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2008 David Daney
 */
#ifndef _ASM_WATCH_H
#define _ASM_WATCH_H

#include <linux/bitops.h>

#include <asm/mipsregs.h>

void mips_install_watch_registers(void);
void mips_read_watch_registers(void);
void mips_clear_watch_registers(void);
void mips_probe_watch_registers(struct cpuinfo_mips *c);

#ifdef CONFIG_HARDWARE_WATCHPOINTS
#define __restore_watch() do {						\
	if (unlikely(test_bit(TIF_LOAD_WATCH,				\
			      &current_thread_info()->flags))) {	\
		mips_install_watch_registers();				\
	}								\
} while (0)

#else
#define __restore_watch() do {} while (0)
#endif

#endif /* _ASM_WATCH_H */
Tue Jul 19 12:52:53 PDT 2016
Fri Jul 22 16:13:41 PDT 2016
Sun, Jul 24, 2016  5:43:05 PM
Tue, Jul 26, 2016 12:37:22 AM
