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
Tue Jul 19 12:46:31 PDT 2016
Fri Jul 22 16:01:36 PDT 2016
Sun, Jul 24, 2016  4:11:47 PM
Mon, Jul 25, 2016 10:56:16 PM
