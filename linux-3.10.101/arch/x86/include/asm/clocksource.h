/* x86-specific clocksource additions */

#ifndef _ASM_X86_CLOCKSOURCE_H
#define _ASM_X86_CLOCKSOURCE_H

#ifdef CONFIG_X86_64

#define VCLOCK_NONE 0  /* No vDSO clock available.	*/
#define VCLOCK_TSC  1  /* vDSO should use vread_tsc.	*/
#define VCLOCK_HPET 2  /* vDSO should use vread_hpet.	*/
#define VCLOCK_PVCLOCK 3 /* vDSO should use vread_pvclock. */

struct arch_clocksource_data {
	int vclock_mode;
};

#endif /* CONFIG_X86_64 */

#endif /* _ASM_X86_CLOCKSOURCE_H */
Tue Jul 19 12:40:36 PDT 2016
Fri Jul 22 15:50:44 PDT 2016
Sun, Jul 24, 2016  2:48:38 PM
Mon, Jul 25, 2016  9:23:21 PM
