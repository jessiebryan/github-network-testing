#ifndef _ASMPARISC_SIGCONTEXT_H
#define _ASMPARISC_SIGCONTEXT_H

#define PARISC_SC_FLAG_ONSTACK 1<<0
#define PARISC_SC_FLAG_IN_SYSCALL 1<<1

/* We will add more stuff here as it becomes necessary, until we know
   it works. */
struct sigcontext {
	unsigned long sc_flags;

	unsigned long sc_gr[32]; /* PSW in sc_gr[0] */
	unsigned long long sc_fr[32]; /* FIXME, do we need other state info? */
	unsigned long sc_iasq[2];
	unsigned long sc_iaoq[2];
	unsigned long sc_sar; /* cr11 */
};


#endif
Tue Jul 19 12:50:57 PDT 2016
Fri Jul 22 16:09:53 PDT 2016
Sun, Jul 24, 2016  5:15:24 PM
Tue, Jul 26, 2016 12:06:48 AM
