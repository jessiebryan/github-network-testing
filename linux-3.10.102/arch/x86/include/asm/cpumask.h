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
Tue Jul 19 12:41:15 PDT 2016
Fri Jul 22 15:52:02 PDT 2016
Sun, Jul 24, 2016  2:57:51 PM
Mon, Jul 25, 2016  9:33:46 PM
