/*
 * Definitions for SMTC /proc entries
 * Copyright(C) 2005 MIPS Technologies Inc.
 */
#ifndef __ASM_SMTC_PROC_H
#define __ASM_SMTC_PROC_H

/*
 * per-"CPU" statistics
 */

struct smtc_cpu_proc {
	unsigned long timerints;
	unsigned long selfipis;
};

extern struct smtc_cpu_proc smtc_cpu_stats[NR_CPUS];

/* Count of number of recoveries of "stolen" FPU access rights on 34K */

extern atomic_t smtc_fpu_recoveries;

#endif /* __ASM_SMTC_PROC_H */
Tue Jul 19 12:36:12 PDT 2016
Fri Jul 22 15:42:13 PDT 2016
Sun, Jul 24, 2016  1:46:48 PM
Mon, Jul 25, 2016  8:12:54 PM
