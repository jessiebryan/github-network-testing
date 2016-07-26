/*
 *    IEEE floating point emulation.
 *
 *  S390 version
 *    Copyright IBM Corp. 1999
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




Tue Jul 19 12:52:55 PDT 2016
Fri Jul 22 16:13:46 PDT 2016
Sun, Jul 24, 2016  5:43:38 PM
Tue, Jul 26, 2016 12:37:58 AM
