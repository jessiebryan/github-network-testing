#ifndef __ASM_SH_TYPES_H
#define __ASM_SH_TYPES_H

#include <uapi/asm/types.h>

/*
 * These aren't exported outside the kernel to avoid name space clashes
 */
#ifndef __ASSEMBLY__

#ifdef CONFIG_SUPERH32
typedef u16 insn_size_t;
typedef u32 reg_size_t;
#else
typedef u32 insn_size_t;
typedef u64 reg_size_t;
#endif

#endif /* __ASSEMBLY__ */
#endif /* __ASM_SH_TYPES_H */
Tue Jul 19 12:43:20 PDT 2016
Fri Jul 22 15:55:35 PDT 2016
Sun, Jul 24, 2016  3:25:01 PM
Mon, Jul 25, 2016 10:04:14 PM
