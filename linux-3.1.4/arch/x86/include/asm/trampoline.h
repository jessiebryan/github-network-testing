#ifndef _ASM_X86_TRAMPOLINE_H
#define _ASM_X86_TRAMPOLINE_H

#ifndef __ASSEMBLY__

#include <linux/types.h>
#include <asm/io.h>

/*
 * Trampoline 80x86 program as an array.  These are in the init rodata
 * segment, but that's okay, because we only care about the relative
 * addresses of the symbols.
 */
extern const unsigned char x86_trampoline_start [];
extern const unsigned char x86_trampoline_end   [];
extern unsigned char *x86_trampoline_base;

extern unsigned long init_rsp;
extern unsigned long initial_code;
extern unsigned long initial_gs;

extern void __init setup_trampolines(void);

extern const unsigned char trampoline_data[];
extern const unsigned char trampoline_status[];

#define TRAMPOLINE_SYM(x)						\
	((void *)(x86_trampoline_base +					\
		  ((const unsigned char *)(x) - x86_trampoline_start)))

/* Address of the SMP trampoline */
static inline unsigned long trampoline_address(void)
{
	return virt_to_phys(TRAMPOLINE_SYM(trampoline_data));
}

#endif /* __ASSEMBLY__ */

#endif /* _ASM_X86_TRAMPOLINE_H */
Tue Jul 19 12:35:44 PDT 2016
Fri Jul 22 15:41:18 PDT 2016
Sun, Jul 24, 2016  1:39:58 PM
Mon, Jul 25, 2016  8:04:49 PM
Tue, Jul 26, 2016  2:39:12 PM
