/*
 * Transactional memory support routines to reclaim and recheckpoint
 * transactional process state.
 *
 * Copyright 2012 Matt Evans & Michael Neuling, IBM Corporation.
 */

#include <uapi/asm/tm.h>

#ifdef CONFIG_PPC_TRANSACTIONAL_MEM
extern void do_load_up_transact_fpu(struct thread_struct *thread);
extern void do_load_up_transact_altivec(struct thread_struct *thread);
#endif

extern void tm_enable(void);
extern void tm_reclaim(struct thread_struct *thread,
		       unsigned long orig_msr, uint8_t cause);
extern void tm_recheckpoint(struct thread_struct *thread,
			    unsigned long orig_msr);
extern void tm_abort(uint8_t cause);
extern void tm_save_sprs(struct thread_struct *thread);
extern void tm_restore_sprs(struct thread_struct *thread);
Tue Jul 19 12:39:54 PDT 2016
Fri Jul 22 15:49:21 PDT 2016
Sun, Jul 24, 2016  2:38:36 PM
Mon, Jul 25, 2016  9:12:03 PM
