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
Tue Jul 19 12:50:35 PDT 2016
Fri Jul 22 16:09:12 PDT 2016
Sun, Jul 24, 2016  5:10:12 PM
Tue, Jul 26, 2016 12:01:04 AM
