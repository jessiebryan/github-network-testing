#ifndef _ASM_X86_A_OUT_H
#define _ASM_X86_A_OUT_H

struct exec
{
	unsigned int a_info;	/* Use macros N_MAGIC, etc for access */
	unsigned a_text;	/* length of text, in bytes */
	unsigned a_data;	/* length of data, in bytes */
	unsigned a_bss;		/* length of uninitialized data area for file, in bytes */
	unsigned a_syms;	/* length of symbol table data in file, in bytes */
	unsigned a_entry;	/* start address */
	unsigned a_trsize;	/* length of relocation info for text, in bytes */
	unsigned a_drsize;	/* length of relocation info for data, in bytes */
};

#define N_TRSIZE(a)	((a).a_trsize)
#define N_DRSIZE(a)	((a).a_drsize)
#define N_SYMSIZE(a)	((a).a_syms)

#endif /* _ASM_X86_A_OUT_H */
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:56 PDT 2016
Sun, Jul 24, 2016  1:15:04 PM
Mon, Jul 25, 2016  6:22:16 PM
Mon, Jul 25, 2016  7:35:30 PM
Tue, Jul 26, 2016  2:11:30 PM
