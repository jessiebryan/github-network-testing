#ifndef __UM_PROCESSOR_H
#define __UM_PROCESSOR_H

/* include faultinfo structure */
#include <sysdep/faultinfo.h>

#ifdef CONFIG_X86_32
# include "processor_32.h"
#else
# include "processor_64.h"
#endif

#define KSTK_EIP(tsk) KSTK_REG(tsk, HOST_IP)
#define KSTK_ESP(tsk) KSTK_REG(tsk, HOST_SP)
#define KSTK_EBP(tsk) KSTK_REG(tsk, HOST_BP)

#define ARCH_IS_STACKGROW(address) \
       (address + 65536 + 32 * sizeof(unsigned long) >= UPT_SP(&current->thread.regs.regs))

#include <asm/user.h>

/* REP NOP (PAUSE) is a good thing to insert into busy-wait loops. */
static inline void rep_nop(void)
{
	__asm__ __volatile__("rep;nop": : :"memory");
}

#define cpu_relax()	rep_nop()

#include <asm/processor-generic.h>

#endif
Tue Jul 19 12:46:31 PDT 2016
Fri Jul 22 16:01:36 PDT 2016
Sun, Jul 24, 2016  4:11:50 PM
Mon, Jul 25, 2016 10:56:19 PM
