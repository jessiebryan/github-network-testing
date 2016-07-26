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
Tue Jul 19 12:48:56 PDT 2016
Fri Jul 22 16:06:07 PDT 2016
Sun, Jul 24, 2016  4:46:44 PM
Mon, Jul 25, 2016 11:35:06 PM
