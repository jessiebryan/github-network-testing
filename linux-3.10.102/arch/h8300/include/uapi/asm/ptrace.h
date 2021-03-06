#ifndef _UAPI_H8300_PTRACE_H
#define _UAPI_H8300_PTRACE_H

#ifndef __ASSEMBLY__

#define PT_ER1	   0
#define PT_ER2	   1
#define PT_ER3	   2
#define PT_ER4	   3
#define PT_ER5	   4
#define PT_ER6	   5
#define PT_ER0	   6
#define PT_ORIG_ER0	   7
#define PT_CCR	   8
#define PT_PC	   9
#define PT_USP	   10
#define PT_EXR     12

/* this struct defines the way the registers are stored on the
   stack during a system call. */

struct pt_regs {
	long     retpc;
	long     er4;
	long     er5;
	long     er6;
	long     er3;
	long     er2;
	long     er1;
	long     orig_er0;
	unsigned short ccr;
	long     er0;
	long     vector;
#if defined(CONFIG_CPU_H8S)
	unsigned short exr;
#endif
	unsigned long  pc;
} __attribute__((aligned(2),packed));

#define PTRACE_GETREGS            12
#define PTRACE_SETREGS            13

#endif /* __ASSEMBLY__ */
#endif /* _UAPI_H8300_PTRACE_H */
Tue Jul 19 12:41:06 PDT 2016
Fri Jul 22 15:51:42 PDT 2016
Sun, Jul 24, 2016  2:55:42 PM
Mon, Jul 25, 2016  9:31:19 PM
