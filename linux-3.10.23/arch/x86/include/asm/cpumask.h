#ifndef _ASM_X86_CPUMASK_H
#define _ASM_X86_CPUMASK_H
#ifndef __ASSEMBLY__
#include <linux/cpumask.h>

extern cpumask_var_t cpu_callin_mask;
extern cpumask_var_t cpu_callout_mask;
extern cpumask_var_t cpu_initialized_mask;
extern cpumask_var_t cpu_sibling_setup_mask;

extern void setup_cpu_local_masks(void);

#endif /* __ASSEMBLY__ */
#endif /* _ASM_X86_CPUMASK_H */
Tue Jul 19 12:49:43 PDT 2016
Fri Jul 22 16:07:34 PDT 2016
Sun, Jul 24, 2016  4:57:47 PM
Mon, Jul 25, 2016 11:47:25 PM
