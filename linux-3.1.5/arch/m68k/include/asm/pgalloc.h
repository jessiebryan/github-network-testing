#ifndef M68K_PGALLOC_H
#define M68K_PGALLOC_H

#include <linux/mm.h>
#include <linux/highmem.h>
#include <asm/setup.h>

#ifdef CONFIG_MMU
#include <asm/virtconvert.h>
#ifdef CONFIG_SUN3
#include <asm/sun3_pgalloc.h>
#else
#include <asm/motorola_pgalloc.h>
#endif

extern void m68k_setup_node(int node);
#endif

#endif /* M68K_PGALLOC_H */
Tue Jul 19 12:36:10 PDT 2016
Fri Jul 22 15:42:09 PDT 2016
Sun, Jul 24, 2016  1:46:23 PM
Mon, Jul 25, 2016  8:12:24 PM
Tue, Jul 26, 2016  2:46:16 PM
