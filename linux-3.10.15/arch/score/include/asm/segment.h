#ifndef _ASM_SCORE_SEGMENT_H
#define _ASM_SCORE_SEGMENT_H

#ifndef __ASSEMBLY__

typedef struct {
	unsigned long seg;
} mm_segment_t;

#define KERNEL_DS	((mm_segment_t){0})
#define USER_DS	KERNEL_DS

# define get_ds()	(KERNEL_DS)
# define get_fs()	(current_thread_info()->addr_limit)
# define set_fs(x)	\
	do { current_thread_info()->addr_limit = (x); } while (0)

# define segment_eq(a, b)	((a).seg == (b).seg)

# endif /* __ASSEMBLY__ */
#endif /* _ASM_SCORE_SEGMENT_H */
Tue Jul 19 12:44:36 PDT 2016
Fri Jul 22 15:57:57 PDT 2016
Sun, Jul 24, 2016  3:43:22 PM
Mon, Jul 25, 2016 10:24:38 PM
