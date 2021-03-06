#ifndef _ASM_X86_PAGE_64_H
#define _ASM_X86_PAGE_64_H

#include <asm/page_64_types.h>

#ifndef __ASSEMBLY__

/* duplicated to the one in bootmem.h */
extern unsigned long max_pfn;
extern unsigned long phys_base;

static inline unsigned long __phys_addr_nodebug(unsigned long x)
{
	unsigned long y = x - __START_KERNEL_map;

	/* use the carry flag to determine if x was < __START_KERNEL_map */
	x = y + ((x > y) ? phys_base : (__START_KERNEL_map - PAGE_OFFSET));

	return x;
}

#ifdef CONFIG_DEBUG_VIRTUAL
extern unsigned long __phys_addr(unsigned long);
extern unsigned long __phys_addr_symbol(unsigned long);
#else
#define __phys_addr(x)		__phys_addr_nodebug(x)
#define __phys_addr_symbol(x) \
	((unsigned long)(x) - __START_KERNEL_map + phys_base)
#endif

#define __phys_reloc_hide(x)	(x)

#ifdef CONFIG_FLATMEM
#define pfn_valid(pfn)          ((pfn) < max_pfn)
#endif

void clear_page(void *page);
void copy_page(void *to, void *from);

#endif	/* !__ASSEMBLY__ */

#endif /* _ASM_X86_PAGE_64_H */
Tue Jul 19 12:42:44 PDT 2016
Fri Jul 22 15:54:28 PDT 2016
Sun, Jul 24, 2016  3:16:21 PM
Mon, Jul 25, 2016  9:54:38 PM
