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
Tue Jul 19 12:48:39 PDT 2016
Fri Jul 22 16:05:33 PDT 2016
Sun, Jul 24, 2016  4:42:23 PM
Mon, Jul 25, 2016 11:30:14 PM
