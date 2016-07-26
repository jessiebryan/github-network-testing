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
Tue Jul 19 12:44:31 PDT 2016
Fri Jul 22 15:57:48 PDT 2016
Sun, Jul 24, 2016  3:42:09 PM
Mon, Jul 25, 2016 10:23:16 PM
