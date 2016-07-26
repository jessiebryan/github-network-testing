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
Tue Jul 19 12:52:50 PDT 2016
Fri Jul 22 16:13:36 PDT 2016
Sun, Jul 24, 2016  5:42:31 PM
Tue, Jul 26, 2016 12:36:44 AM
