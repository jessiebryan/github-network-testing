#ifndef _UAPI_ASM_X86_MSR_H
#define _UAPI_ASM_X86_MSR_H

#include <asm/msr-index.h>

#ifndef __ASSEMBLY__

#include <linux/types.h>
#include <linux/ioctl.h>

#define X86_IOC_RDMSR_REGS	_IOWR('c', 0xA0, __u32[8])
#define X86_IOC_WRMSR_REGS	_IOWR('c', 0xA1, __u32[8])

#endif /* __ASSEMBLY__ */
#endif /* _UAPI_ASM_X86_MSR_H */
Tue Jul 19 12:50:22 PDT 2016
Fri Jul 22 16:08:49 PDT 2016
Sun, Jul 24, 2016  5:07:17 PM
Mon, Jul 25, 2016 11:57:51 PM
