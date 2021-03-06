/*
 *
 */

#ifndef _ASSEMBLER_

struct cpulaunch {
    unsigned long	pc;
    unsigned long	gp;
    unsigned long	sp;
    unsigned long	a0;
    unsigned long	_pad[3]; /* pad to cache line size to avoid thrashing */
    unsigned long	flags;
};

#else

#define LOG2CPULAUNCH	5
#define	LAUNCH_PC	0
#define	LAUNCH_GP	4
#define	LAUNCH_SP	8
#define	LAUNCH_A0	12
#define	LAUNCH_FLAGS	28

#endif

#define LAUNCH_FREADY	1
#define LAUNCH_FGO	2
#define LAUNCH_FGONE	4

#define CPULAUNCH	0x00000f00
#define NCPULAUNCH	8

/* Polling period in count cycles for secondary CPU's */
#define LAUNCHPERIOD	10000
Tue Jul 19 12:38:00 PDT 2016
Fri Jul 22 15:45:33 PDT 2016
Sun, Jul 24, 2016  2:11:26 PM
Mon, Jul 25, 2016  8:41:50 PM
