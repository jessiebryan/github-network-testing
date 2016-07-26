#ifndef M68K_PGALLOC_H
#define M68K_PGALLOC_H

#include <linux/mm.h>
#include <linux/highmem.h>
#include <asm/setup.h>

#ifdef CONFIG_MMU
#include <asm/virtconvert.h>
#if defined(CONFIG_COLDFIRE)
#include <asm/mcf_pgalloc.h>
#elif defined(CONFIG_SUN3)
#include <asm/sun3_pgalloc.h>
#else
#include <asm/motorola_pgalloc.h>
#endif

extern void m68k_setup_node(int node);
#endif

#endif /* M68K_PGALLOC_H */
Tue Jul 19 12:39:50 PDT 2016
Fri Jul 22 15:49:13 PDT 2016
Sun, Jul 24, 2016  2:37:38 PM
Mon, Jul 25, 2016  9:10:58 PM
