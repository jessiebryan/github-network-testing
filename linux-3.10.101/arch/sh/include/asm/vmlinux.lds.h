#ifndef __ASM_SH_VMLINUX_LDS_H
#define __ASM_SH_VMLINUX_LDS_H

#include <asm-generic/vmlinux.lds.h>

#ifdef CONFIG_DWARF_UNWINDER
#define DWARF_EH_FRAME							\
	.eh_frame : AT(ADDR(.eh_frame) - LOAD_OFFSET) {			\
		  VMLINUX_SYMBOL(__start_eh_frame) = .;			\
		  *(.eh_frame)						\
		  VMLINUX_SYMBOL(__stop_eh_frame) = .;			\
	}
#else
#define DWARF_EH_FRAME
#endif

#ifdef CONFIG_SUPERH64
#define EXTRA_TEXT		\
	*(.text64)		\
	*(.text..SHmedia32)
#else
#define EXTRA_TEXT
#endif

#endif /* __ASM_SH_VMLINUX_LDS_H */
Tue Jul 19 12:40:34 PDT 2016
Fri Jul 22 15:50:40 PDT 2016
Sun, Jul 24, 2016  2:48:10 PM
Mon, Jul 25, 2016  9:22:49 PM
