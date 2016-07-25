#ifndef __ASM_PARISC_LINKAGE_H
#define __ASM_PARISC_LINKAGE_H

#ifndef __ALIGN
#define __ALIGN         .align 4
#define __ALIGN_STR     ".align 4"
#endif

/*
 * In parisc assembly a semicolon marks a comment while a
 * exclamation mark is used to separate independent lines.
 */
#ifdef __ASSEMBLY__

#define ENTRY(name) \
	.export name !\
	ALIGN !\
name:

#ifdef CONFIG_64BIT
#define ENDPROC(name) \
	END(name)
#else
#define ENDPROC(name) \
	.type name, @function !\
	END(name)
#endif

#endif /* __ASSEMBLY__ */

#endif  /* __ASM_PARISC_LINKAGE_H */
Tue Jul 19 12:48:22 PDT 2016
Fri Jul 22 16:05:01 PDT 2016
Sun, Jul 24, 2016  4:38:15 PM
