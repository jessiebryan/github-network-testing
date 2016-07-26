#ifndef __M68K_A_OUT_H__
#define __M68K_A_OUT_H__

struct exec
{
  unsigned long a_info;		/* Use macros N_MAGIC, etc for access */
  unsigned a_text;		/* length of text, in bytes */
  unsigned a_data;		/* length of data, in bytes */
  unsigned a_bss;		/* length of uninitialized data area for file, in bytes */
  unsigned a_syms;		/* length of symbol table data in file, in bytes */
  unsigned a_entry;		/* start address */
  unsigned a_trsize;		/* length of relocation info for text, in bytes */
  unsigned a_drsize;		/* length of relocation info for data, in bytes */
};

#define N_TRSIZE(a)	((a).a_trsize)
#define N_DRSIZE(a)	((a).a_drsize)
#define N_SYMSIZE(a)	((a).a_syms)

#endif /* __M68K_A_OUT_H__ */
Tue Jul 19 12:50:14 PDT 2016
Fri Jul 22 16:08:34 PDT 2016
Sun, Jul 24, 2016  5:05:20 PM
Mon, Jul 25, 2016 11:55:41 PM
