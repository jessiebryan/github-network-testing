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
Tue Jul 19 12:48:57 PDT 2016
Fri Jul 22 16:06:08 PDT 2016
Sun, Jul 24, 2016  4:46:56 PM
