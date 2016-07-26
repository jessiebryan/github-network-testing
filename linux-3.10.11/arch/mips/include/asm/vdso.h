/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2009 Cavium Networks
 */

#ifndef __ASM_VDSO_H
#define __ASM_VDSO_H

#include <linux/types.h>


#ifdef CONFIG_32BIT
struct mips_vdso {
	u32 signal_trampoline[2];
	u32 rt_signal_trampoline[2];
};
#else  /* !CONFIG_32BIT */
struct mips_vdso {
	u32 o32_signal_trampoline[2];
	u32 o32_rt_signal_trampoline[2];
	u32 rt_signal_trampoline[2];
	u32 n32_rt_signal_trampoline[2];
};
#endif /* CONFIG_32BIT */

#endif /* __ASM_VDSO_H */
Tue Jul 19 12:41:52 PDT 2016
Fri Jul 22 15:53:07 PDT 2016
Sun, Jul 24, 2016  3:05:50 PM
Mon, Jul 25, 2016  9:42:44 PM
