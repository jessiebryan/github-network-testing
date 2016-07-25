#ifndef __ASM_AVR32_PARAM_H
#define __ASM_AVR32_PARAM_H

#ifdef __KERNEL__
# define HZ		CONFIG_HZ
# define USER_HZ	100		/* User interfaces are in "ticks" */
# define CLOCKS_PER_SEC	(USER_HZ)	/* frequency at which times() counts */
#endif

#ifndef HZ
# define HZ		100
#endif

/* TODO: Should be configurable */
#define EXEC_PAGESIZE	4096

#ifndef NOGROUP
# define NOGROUP	(-1)
#endif

#define MAXHOSTNAMELEN	64

#endif /* __ASM_AVR32_PARAM_H */
Tue Jul 19 12:36:07 PDT 2016
Fri Jul 22 15:42:03 PDT 2016
Sun, Jul 24, 2016  1:45:36 PM
