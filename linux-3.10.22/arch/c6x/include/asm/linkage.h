#ifndef _ASM_C6X_LINKAGE_H
#define _ASM_C6X_LINKAGE_H

#ifdef __ASSEMBLER__

#define __ALIGN		.align 2
#define __ALIGN_STR	".align 2"

#ifndef __DSBT__
#define ENTRY(name)		\
	.global name @		\
	__ALIGN @		\
name:
#else
#define ENTRY(name)		\
	.global name @		\
	.hidden name @		\
	__ALIGN @		\
name:
#endif

#define ENDPROC(name)		\
	.type name, @function @	\
	.size name, . - name

#endif

#include <asm-generic/linkage.h>

#endif /* _ASM_C6X_LINKAGE_H */
Tue Jul 19 12:48:53 PDT 2016
Fri Jul 22 16:06:01 PDT 2016
Sun, Jul 24, 2016  4:46:03 PM
Mon, Jul 25, 2016 11:34:20 PM
