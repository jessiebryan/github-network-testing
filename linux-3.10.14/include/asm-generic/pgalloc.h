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
Tue Jul 19 12:44:13 PDT 2016
