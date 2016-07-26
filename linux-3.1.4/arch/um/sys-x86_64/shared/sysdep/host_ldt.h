#ifndef __ASM_HOST_LDT_X86_64_H
#define __ASM_HOST_LDT_X86_64_H

#include <asm/ldt.h>

/*
 * macros stolen from include/asm-x86_64/desc.h
 */
#define LDT_entry_a(info) \
	((((info)->base_addr & 0x0000ffff) << 16) | ((info)->limit & 0x0ffff))

/* Don't allow setting of the lm bit. It is useless anyways because
 * 64bit system calls require __USER_CS. */
#define LDT_entry_b(info) \
	(((info)->base_addr & 0xff000000) | \
	(((info)->base_addr & 0x00ff0000) >> 16) | \
	((info)->limit & 0xf0000) | \
	(((info)->read_exec_only ^ 1) << 9) | \
	((info)->contents << 10) | \
	(((info)->seg_not_present ^ 1) << 15) | \
	((info)->seg_32bit << 22) | \
	((info)->limit_in_pages << 23) | \
	((info)->useable << 20) | \
	/* ((info)->lm << 21) | */ \
	0x7000)

#define LDT_empty(info) (\
	(info)->base_addr	== 0	&& \
	(info)->limit		== 0	&& \
	(info)->contents	== 0	&& \
	(info)->read_exec_only	== 1	&& \
	(info)->seg_32bit	== 0	&& \
	(info)->limit_in_pages	== 0	&& \
	(info)->seg_not_present	== 1	&& \
	(info)->useable		== 0	&& \
	(info)->lm              == 0)

#endif
Tue Jul 19 12:35:43 PDT 2016
Fri Jul 22 15:41:17 PDT 2016
Sun, Jul 24, 2016  1:39:45 PM
Mon, Jul 25, 2016  8:04:34 PM
Tue, Jul 26, 2016  2:38:57 PM
