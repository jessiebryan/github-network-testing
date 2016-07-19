#ifndef _ASM_GENERIC_EMERGENCY_RESTART_H
#define _ASM_GENERIC_EMERGENCY_RESTART_H

static inline void machine_emergency_restart(void)
{
	machine_restart(NULL);
}

#endif /* _ASM_GENERIC_EMERGENCY_RESTART_H */
Tue Jul 19 12:51:53 PDT 2016
