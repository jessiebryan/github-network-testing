#ifndef _M68K_ATARI_STRAM_H
#define _M68K_ATARI_STRAM_H

/*
 * Functions for Atari ST-RAM management
 */

/* public interface */
void *atari_stram_alloc(unsigned long size, const char *owner);
void atari_stram_free(void *);

/* functions called internally by other parts of the kernel */
void atari_stram_init(void);
void atari_stram_reserve_pages(void *start_mem);

#endif /*_M68K_ATARI_STRAM_H */
Tue Jul 19 12:34:54 PDT 2016
Fri Jul 22 15:39:54 PDT 2016
Sun, Jul 24, 2016  1:29:49 PM
Mon, Jul 25, 2016  6:39:57 PM
Mon, Jul 25, 2016  7:52:48 PM
