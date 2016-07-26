#ifndef _ASM_POWERPC_KDEBUG_H
#define _ASM_POWERPC_KDEBUG_H
#ifdef __KERNEL__

/* Grossly misnamed. */
enum die_val {
	DIE_OOPS = 1,
	DIE_IABR_MATCH,
	DIE_DABR_MATCH,
	DIE_BPT,
	DIE_SSTEP,
};

#endif /* __KERNEL__ */
#endif /* _ASM_POWERPC_KDEBUG_H */
Tue Jul 19 12:48:22 PDT 2016
Fri Jul 22 16:05:02 PDT 2016
Sun, Jul 24, 2016  4:38:23 PM
Mon, Jul 25, 2016 11:25:47 PM
