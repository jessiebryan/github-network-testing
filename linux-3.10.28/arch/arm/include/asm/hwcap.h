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
Tue Jul 19 12:52:43 PDT 2016
Fri Jul 22 16:13:22 PDT 2016
Sun, Jul 24, 2016  5:40:51 PM
Tue, Jul 26, 2016 12:34:53 AM
