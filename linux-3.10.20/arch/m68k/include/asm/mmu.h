#ifndef __MMU_H
#define __MMU_H

#ifdef CONFIG_MMU
/* Default "unsigned long" context */
typedef unsigned long mm_context_t;
#else
typedef struct {
	unsigned long		end_brk;
} mm_context_t;
#endif

#endif
Tue Jul 19 12:47:40 PDT 2016
Fri Jul 22 16:03:43 PDT 2016
Sun, Jul 24, 2016  4:28:16 PM
Mon, Jul 25, 2016 11:14:32 PM
