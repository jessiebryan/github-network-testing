#ifndef _ASM_IA64_UCONTEXT_H
#define _ASM_IA64_UCONTEXT_H

struct ucontext {
	struct sigcontext uc_mcontext;
};

#define uc_link		uc_mcontext.sc_gr[0]	/* wrong type; nobody cares */
#define uc_sigmask	uc_mcontext.sc_sigmask
#define uc_stack	uc_mcontext.sc_stack

#endif /* _ASM_IA64_UCONTEXT_H */
Tue Jul 19 12:52:10 PDT 2016
Fri Jul 22 16:12:19 PDT 2016
Sun, Jul 24, 2016  5:33:03 PM
Tue, Jul 26, 2016 12:26:17 AM
