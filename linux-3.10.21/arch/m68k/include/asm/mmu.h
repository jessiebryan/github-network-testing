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
Tue Jul 19 12:48:19 PDT 2016
Fri Jul 22 16:04:55 PDT 2016
Sun, Jul 24, 2016  4:37:30 PM
Mon, Jul 25, 2016 11:24:48 PM
