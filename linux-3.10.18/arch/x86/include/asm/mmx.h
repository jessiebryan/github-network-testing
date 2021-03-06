#ifndef _ASM_X86_MMX_H
#define _ASM_X86_MMX_H

/*
 *	MMX 3Dnow! helper operations
 */

#include <linux/types.h>

extern void *_mmx_memcpy(void *to, const void *from, size_t size);
extern void mmx_clear_page(void *page);
extern void mmx_copy_page(void *to, void *from);

#endif /* _ASM_X86_MMX_H */
Tue Jul 19 12:46:30 PDT 2016
Fri Jul 22 16:01:35 PDT 2016
Sun, Jul 24, 2016  4:11:40 PM
Mon, Jul 25, 2016 10:56:08 PM
