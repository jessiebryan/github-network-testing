#ifndef __ASMARM_HWCAP_H
#define __ASMARM_HWCAP_H

#include <uapi/asm/hwcap.h>

#if !defined(__ASSEMBLY__)
/*
 * This yields a mask that user programs can use to figure out what
 * instruction set this cpu supports.
 */
#define ELF_HWCAP	(elf_hwcap)
extern unsigned int elf_hwcap;
#endif
#endif
Tue Jul 19 12:41:01 PDT 2016
Fri Jul 22 15:51:30 PDT 2016
Sun, Jul 24, 2016  2:54:24 PM
Mon, Jul 25, 2016  9:29:50 PM
