#ifndef _ASM_X86_SECTIONS_H
#define _ASM_X86_SECTIONS_H

#include <asm-generic/sections.h>
#include <asm/uaccess.h>

extern char __brk_base[], __brk_limit[];
extern struct exception_table_entry __stop___ex_table[];

#if defined(CONFIG_X86_64) && defined(CONFIG_DEBUG_RODATA)
extern char __end_rodata_hpage_align[];
#endif

#endif	/* _ASM_X86_SECTIONS_H */
Tue Jul 19 12:45:54 PDT 2016
Fri Jul 22 16:00:23 PDT 2016
Sun, Jul 24, 2016  4:02:30 PM
Mon, Jul 25, 2016 10:45:56 PM
