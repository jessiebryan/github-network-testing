/*
 * Copyright 2001-2002 Pavel Machek <pavel@suse.cz>
 * Based on code
 * Copyright 2001 Patrick Mochel <mochel@osdl.org>
 */
#ifndef _ASM_X86_SUSPEND_32_H
#define _ASM_X86_SUSPEND_32_H

#include <asm/desc.h>
#include <asm/i387.h>

/* image of the saved processor state */
struct saved_context {
	u16 es, fs, gs, ss;
	unsigned long cr0, cr2, cr3, cr4;
	u64 misc_enable;
	bool misc_enable_saved;
	struct desc_ptr gdt;
	struct desc_ptr idt;
	u16 ldt;
	u16 tss;
	unsigned long tr;
	unsigned long safety;
	unsigned long return_address;
} __attribute__((packed));

#endif /* _ASM_X86_SUSPEND_32_H */
Tue Jul 19 12:38:06 PDT 2016
Fri Jul 22 15:45:45 PDT 2016
Sun, Jul 24, 2016  2:12:56 PM
Mon, Jul 25, 2016  8:43:30 PM
