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
Tue Jul 19 12:34:03 PDT 2016
Fri Jul 22 15:39:01 PDT 2016
Sun, Jul 24, 2016  1:23:20 PM
Mon, Jul 25, 2016  6:32:12 PM
Mon, Jul 25, 2016  7:45:13 PM
Tue, Jul 26, 2016  2:20:48 PM
