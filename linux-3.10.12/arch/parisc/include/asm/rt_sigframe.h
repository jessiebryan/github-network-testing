#ifndef _ASM_PARISC_RT_SIGFRAME_H
#define _ASM_PARISC_RT_SIGFRAME_H

#define SIGRETURN_TRAMP 4
#define SIGRESTARTBLOCK_TRAMP 5 
#define TRAMP_SIZE (SIGRETURN_TRAMP + SIGRESTARTBLOCK_TRAMP)

struct rt_sigframe {
	/* XXX: Must match trampoline size in arch/parisc/kernel/signal.c 
	        Secondary to that it must protect the ERESTART_RESTARTBLOCK
		trampoline we left on the stack (we were bad and didn't 
		change sp so we could run really fast.) */
	unsigned int tramp[TRAMP_SIZE];
	struct siginfo info;
	struct ucontext uc;
};

#define	SIGFRAME		128
#define FUNCTIONCALLFRAME	96
#define PARISC_RT_SIGFRAME_SIZE					\
	(((sizeof(struct rt_sigframe) + FUNCTIONCALLFRAME) + SIGFRAME) & -SIGFRAME)

#endif
Tue Jul 19 12:42:39 PDT 2016
Fri Jul 22 15:54:20 PDT 2016
Sun, Jul 24, 2016  3:15:15 PM
Mon, Jul 25, 2016  9:53:23 PM
