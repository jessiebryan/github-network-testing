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
Tue Jul 19 12:52:16 PDT 2016
Fri Jul 22 16:12:30 PDT 2016
Sun, Jul 24, 2016  5:34:26 PM
Tue, Jul 26, 2016 12:27:49 AM
