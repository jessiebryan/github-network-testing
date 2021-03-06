/*
 * Copyright (C) 1999, 2000  Niibe Yutaka
 */
#ifndef _UAPI__ASM_SH_PTRACE_H
#define _UAPI__ASM_SH_PTRACE_H


#define PTRACE_GETREGS		12	/* General registers */
#define PTRACE_SETREGS		13

#define PTRACE_GETFPREGS	14	/* FPU registers */
#define PTRACE_SETFPREGS	15

#define PTRACE_GETFDPIC		31	/* get the ELF fdpic loadmap address */

#define PTRACE_GETFDPIC_EXEC	0	/* [addr] request the executable loadmap */
#define PTRACE_GETFDPIC_INTERP	1	/* [addr] request the interpreter loadmap */

#define	PTRACE_GETDSPREGS	55	/* DSP registers */
#define	PTRACE_SETDSPREGS	56

#define PT_TEXT_END_ADDR	240
#define PT_TEXT_ADDR		244	/* &(struct user)->start_code */
#define PT_DATA_ADDR		248	/* &(struct user)->start_data */
#define PT_TEXT_LEN		252

#if defined(__SH5__) || defined(CONFIG_CPU_SH5)
#include <asm/ptrace_64.h>
#else
#include <asm/ptrace_32.h>
#endif


#endif /* _UAPI__ASM_SH_PTRACE_H */
Tue Jul 19 12:47:08 PDT 2016
Fri Jul 22 16:02:42 PDT 2016
Sun, Jul 24, 2016  4:20:24 PM
Mon, Jul 25, 2016 11:05:51 PM
