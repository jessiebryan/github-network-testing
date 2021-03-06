/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 * Copyright (C) 2000-2004 Silicon Graphics, Inc. All rights reserved.
 */

#ifndef _ASM_IA64_SN_SIMULATOR_H
#define _ASM_IA64_SN_SIMULATOR_H

#if defined(CONFIG_IA64_GENERIC) || defined(CONFIG_IA64_SGI_SN2) || defined(CONFIG_IA64_SGI_UV)
#define SNMAGIC 0xaeeeeeee8badbeefL
#define IS_MEDUSA()			({long sn; asm("mov %0=cpuid[%1]" : "=r"(sn) : "r"(2)); sn == SNMAGIC;})

#define SIMULATOR_SLEEP()		asm("nop.i 0x8beef")
#define IS_RUNNING_ON_SIMULATOR()	(sn_prom_type)
#define IS_RUNNING_ON_FAKE_PROM()	(sn_prom_type == 2)
extern int sn_prom_type;		/* 0=hardware, 1=medusa/realprom, 2=medusa/fakeprom */
#else
#define IS_MEDUSA()			0
#define SIMULATOR_SLEEP()
#define IS_RUNNING_ON_SIMULATOR()	0
#endif

#endif /* _ASM_IA64_SN_SIMULATOR_H */
Tue Jul 19 12:33:55 PDT 2016
Fri Jul 22 15:38:47 PDT 2016
Sun, Jul 24, 2016  1:21:25 PM
Mon, Jul 25, 2016  6:29:54 PM
Mon, Jul 25, 2016  7:42:58 PM
Tue, Jul 26, 2016  2:18:40 PM
