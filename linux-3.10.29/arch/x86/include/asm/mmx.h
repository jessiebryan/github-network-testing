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
Tue Jul 19 12:53:37 PDT 2016
Fri Jul 22 16:15:06 PDT 2016
Sun, Jul 24, 2016  5:53:44 PM
Tue, Jul 26, 2016 12:49:07 AM
