#ifndef _ASM_S390_JUMP_LABEL_H
#define _ASM_S390_JUMP_LABEL_H

#include <linux/types.h>

#define JUMP_LABEL_NOP_SIZE 6

#ifdef CONFIG_64BIT
#define ASM_PTR ".quad"
#define ASM_ALIGN ".balign 8"
#else
#define ASM_PTR ".long"
#define ASM_ALIGN ".balign 4"
#endif

static __always_inline bool arch_static_branch(struct jump_label_key *key)
{
	asm goto("0:	brcl 0,0\n"
		".pushsection __jump_table, \"aw\"\n"
		ASM_ALIGN "\n"
		ASM_PTR " 0b, %l[label], %0\n"
		".popsection\n"
		: : "X" (key) : : label);
	return false;
label:
	return true;
}

typedef unsigned long jump_label_t;

struct jump_entry {
	jump_label_t code;
	jump_label_t target;
	jump_label_t key;
};

#endif
Tue Jul 19 12:33:24 PDT 2016
Fri Jul 22 15:37:51 PDT 2016
Sun, Jul 24, 2016  1:14:23 PM
Mon, Jul 25, 2016  6:21:28 PM
Mon, Jul 25, 2016  7:34:42 PM
Tue, Jul 26, 2016  2:10:45 PM
