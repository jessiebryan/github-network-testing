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
Tue Jul 19 12:33:56 PDT 2016
Fri Jul 22 15:38:48 PDT 2016
Sun, Jul 24, 2016  1:21:38 PM
Mon, Jul 25, 2016  6:30:09 PM
Mon, Jul 25, 2016  7:43:13 PM
Tue, Jul 26, 2016  2:18:54 PM
