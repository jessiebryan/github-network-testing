/* x86-specific clocksource additions */

#ifndef _ASM_X86_CLOCKSOURCE_H
#define _ASM_X86_CLOCKSOURCE_H

#ifdef CONFIG_X86_64

#define VCLOCK_NONE 0  /* No vDSO clock available.	*/
#define VCLOCK_TSC  1  /* vDSO should use vread_tsc.	*/
#define VCLOCK_HPET 2  /* vDSO should use vread_hpet.	*/

struct arch_clocksource_data {
	int vclock_mode;
};

#endif /* CONFIG_X86_64 */

#endif /* _ASM_X86_CLOCKSOURCE_H */
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:57 PDT 2016
Sun, Jul 24, 2016  1:15:05 PM
