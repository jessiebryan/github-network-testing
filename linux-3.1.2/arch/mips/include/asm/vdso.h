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
Tue Jul 19 12:33:58 PDT 2016
Fri Jul 22 15:38:52 PDT 2016
Sun, Jul 24, 2016  1:22:06 PM
Mon, Jul 25, 2016  6:30:43 PM
Mon, Jul 25, 2016  7:43:46 PM
