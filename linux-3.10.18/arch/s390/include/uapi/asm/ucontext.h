/*
 *  S390 version
 *
 *  Derived from "include/asm-i386/ucontext.h"
 */

#ifndef _ASM_S390_UCONTEXT_H
#define _ASM_S390_UCONTEXT_H

#define UC_EXTENDED	0x00000001

#ifndef __s390x__

struct ucontext_extended {
	unsigned long	  uc_flags;
	struct ucontext  *uc_link;
	stack_t		  uc_stack;
	_sigregs	  uc_mcontext;
	unsigned long	  uc_sigmask[2];
	unsigned long	  uc_gprs_high[16];
};

#endif

struct ucontext {
	unsigned long	  uc_flags;
	struct ucontext  *uc_link;
	stack_t		  uc_stack;
	_sigregs          uc_mcontext;
	sigset_t	  uc_sigmask;	/* mask last for extensibility */
};

#endif /* !_ASM_S390_UCONTEXT_H */
Tue Jul 19 12:46:28 PDT 2016
Fri Jul 22 16:01:29 PDT 2016
Sun, Jul 24, 2016  4:10:58 PM
Mon, Jul 25, 2016 10:55:21 PM
