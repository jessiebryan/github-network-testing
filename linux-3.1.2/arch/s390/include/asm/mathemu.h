/*
 *  arch/s390/kernel/mathemu.h
 *    IEEE floating point emulation.
 *
 *  S390 version
 *    Copyright (C) 1999 IBM Deutschland Entwicklung GmbH, IBM Corporation
 *    Author(s): Martin Schwidefsky (schwidefsky@de.ibm.com)
 */

#ifndef __MATHEMU__
#define __MATHEMU__

extern int math_emu_b3(__u8 *, struct pt_regs *);
extern int math_emu_ed(__u8 *, struct pt_regs *);
extern int math_emu_ldr(__u8 *);
extern int math_emu_ler(__u8 *);
extern int math_emu_std(__u8 *, struct pt_regs *);
extern int math_emu_ld(__u8 *, struct pt_regs *);
extern int math_emu_ste(__u8 *, struct pt_regs *);
extern int math_emu_le(__u8 *, struct pt_regs *);
extern int math_emu_lfpc(__u8 *, struct pt_regs *);
extern int math_emu_stfpc(__u8 *, struct pt_regs *);
extern int math_emu_srnm(__u8 *, struct pt_regs *);

#endif                                 /* __MATHEMU__                      */




Tue Jul 19 12:34:00 PDT 2016
Fri Jul 22 15:38:56 PDT 2016
Sun, Jul 24, 2016  1:22:38 PM
Mon, Jul 25, 2016  6:31:21 PM
Mon, Jul 25, 2016  7:44:24 PM
Tue, Jul 26, 2016  2:20:01 PM
