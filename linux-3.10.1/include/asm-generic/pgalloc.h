#ifndef __ASM_GENERIC_PGALLOC_H
#define __ASM_GENERIC_PGALLOC_H
/*
 * an empty file is enough for a nommu architecture
 */
#ifdef CONFIG_MMU
#error need to implement an architecture specific asm/pgalloc.h
#endif

#define check_pgt_cache()          do { } while (0)

#endif /* __ASM_GENERIC_PGALLOC_H */
Tue Jul 19 12:38:54 PDT 2016
Fri Jul 22 15:47:20 PDT 2016
Sun, Jul 24, 2016  2:24:06 PM
Mon, Jul 25, 2016  8:55:53 PM
