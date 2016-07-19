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
Tue Jul 19 12:45:10 PDT 2016
