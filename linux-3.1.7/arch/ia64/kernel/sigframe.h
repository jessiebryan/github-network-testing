struct sigscratch {
	unsigned long scratch_unat;	/* ar.unat for the general registers saved in pt */
	unsigned long ar_pfs;		/* for syscalls, the user-level function-state  */
	struct pt_regs pt;
};

struct sigframe {
	/*
	 * Place signal handler args where user-level unwinder can find them easily.
	 * DO NOT MOVE THESE.  They are part of the IA-64 Linux ABI and there is
	 * user-level code that depends on their presence!
	 */
	unsigned long arg0;		/* signum */
	unsigned long arg1;		/* siginfo pointer */
	unsigned long arg2;		/* sigcontext pointer */
	/*
	 * End of architected state.
	 */

	void __user *handler;		/* pointer to the plabel of the signal handler */
	struct siginfo info;
	struct sigcontext sc;
};

extern void ia64_do_signal (struct sigscratch *, long);
Tue Jul 19 12:36:44 PDT 2016
Fri Jul 22 15:43:16 PDT 2016
Sun, Jul 24, 2016  1:54:28 PM
Mon, Jul 25, 2016  8:21:54 PM
