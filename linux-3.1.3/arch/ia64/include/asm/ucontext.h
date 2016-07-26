#ifndef _ASM_IA64_UCONTEXT_H
#define _ASM_IA64_UCONTEXT_H

struct ucontext {
	struct sigcontext uc_mcontext;
};

#define uc_link		uc_mcontext.sc_gr[0]	/* wrong type; nobody cares */
#define uc_sigmask	uc_mcontext.sc_sigmask
#define uc_stack	uc_mcontext.sc_stack

#endif /* _ASM_IA64_UCONTEXT_H */
Tue Jul 19 12:34:53 PDT 2016
Fri Jul 22 15:39:53 PDT 2016
Sun, Jul 24, 2016  1:29:42 PM
Mon, Jul 25, 2016  6:39:49 PM
Mon, Jul 25, 2016  7:52:40 PM
