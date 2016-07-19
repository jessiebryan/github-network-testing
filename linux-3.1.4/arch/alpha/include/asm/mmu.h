#ifndef __ALPHA_MMU_H
#define __ALPHA_MMU_H

/* The alpha MMU context is one "unsigned long" bitmap per CPU */
typedef unsigned long mm_context_t[NR_CPUS];

#endif
Tue Jul 19 12:35:28 PDT 2016
