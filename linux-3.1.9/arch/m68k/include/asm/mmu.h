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
Tue Jul 19 12:37:58 PDT 2016
Fri Jul 22 15:45:31 PDT 2016
Sun, Jul 24, 2016  2:11:06 PM
Mon, Jul 25, 2016  8:41:28 PM
