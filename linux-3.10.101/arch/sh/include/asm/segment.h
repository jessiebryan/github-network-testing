#ifndef __ASM_SH_SEGMENT_H
#define __ASM_SH_SEGMENT_H

#ifndef __ASSEMBLY__

typedef struct {
	unsigned long seg;
} mm_segment_t;

#define MAKE_MM_SEG(s)	((mm_segment_t) { (s) })

/*
 * The fs value determines whether argument validity checking should be
 * performed or not.  If get_fs() == USER_DS, checking is performed, with
 * get_fs() == KERNEL_DS, checking is bypassed.
 *
 * For historical reasons, these macros are grossly misnamed.
 */
#define KERNEL_DS	MAKE_MM_SEG(0xFFFFFFFFUL)
#ifdef CONFIG_MMU
#define USER_DS		MAKE_MM_SEG(PAGE_OFFSET)
#else
#define USER_DS		KERNEL_DS
#endif

#define segment_eq(a,b)	((a).seg == (b).seg)

#define get_ds()	(KERNEL_DS)

#define get_fs()	(current_thread_info()->addr_limit)
#define set_fs(x)	(current_thread_info()->addr_limit = (x))

#endif /* __ASSEMBLY__ */
#endif /* __ASM_SH_SEGMENT_H */
Tue Jul 19 12:40:34 PDT 2016
Fri Jul 22 15:50:39 PDT 2016
Sun, Jul 24, 2016  2:48:08 PM
Mon, Jul 25, 2016  9:22:47 PM
