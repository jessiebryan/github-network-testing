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
Tue Jul 19 12:51:41 PDT 2016
Fri Jul 22 16:11:18 PDT 2016
Sun, Jul 24, 2016  5:25:47 PM
Tue, Jul 26, 2016 12:18:16 AM
