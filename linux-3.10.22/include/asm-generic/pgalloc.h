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
Tue Jul 19 12:49:17 PDT 2016
Fri Jul 22 16:06:46 PDT 2016
Sun, Jul 24, 2016  4:51:36 PM
Mon, Jul 25, 2016 11:40:33 PM
