#ifndef _ASM_CMP_H
#define _ASM_CMP_H

/*
 * Definitions for CMP multitasking on MIPS cores
 */
struct task_struct;

extern void cmp_smp_setup(void);
extern void cmp_smp_finish(void);
extern void cmp_boot_secondary(int cpu, struct task_struct *t);
extern void cmp_init_secondary(void);
extern void cmp_cpus_done(void);
extern void cmp_prepare_cpus(unsigned int max_cpus);

/* This is platform specific */
extern void cmp_send_ipi(int cpu, unsigned int action);
#endif /*  _ASM_CMP_H */
Tue Jul 19 12:33:20 PDT 2016
Fri Jul 22 15:37:44 PDT 2016
Sun, Jul 24, 2016  1:13:31 PM
Mon, Jul 25, 2016  6:20:26 PM
Mon, Jul 25, 2016  7:33:41 PM
Tue, Jul 26, 2016  2:09:48 PM
