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
Tue Jul 19 12:49:01 PDT 2016
Fri Jul 22 16:06:16 PDT 2016
Sun, Jul 24, 2016  4:47:43 PM
Mon, Jul 25, 2016 11:36:11 PM
