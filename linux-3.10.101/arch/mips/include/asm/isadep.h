/*
 * Various ISA level dependent constants.
 * Most of the following constants reflect the different layout
 * of Coprocessor 0 registers.
 *
 * Copyright (c) 1998 Harald Koerfgen
 */

#ifndef __ASM_ISADEP_H
#define __ASM_ISADEP_H

#if defined(CONFIG_CPU_R3000) || defined(CONFIG_CPU_TX39XX)
/*
 * R2000 or R3000
 */

/*
 * kernel or user mode? (CP0_STATUS)
 */
#define KU_MASK 0x08
#define KU_USER 0x08
#define KU_KERN 0x00

#else
/*
 * kernel or user mode?
 */
#define KU_MASK 0x18
#define KU_USER 0x10
#define KU_KERN 0x00

#endif

#endif /* __ASM_ISADEP_H */
Tue Jul 19 12:40:29 PDT 2016
Fri Jul 22 15:50:31 PDT 2016
Sun, Jul 24, 2016  2:47:04 PM
Mon, Jul 25, 2016  9:21:32 PM
