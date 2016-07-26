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
Tue Jul 19 12:40:28 PDT 2016
Fri Jul 22 15:50:29 PDT 2016
Sun, Jul 24, 2016  2:46:50 PM
Mon, Jul 25, 2016  9:21:16 PM
