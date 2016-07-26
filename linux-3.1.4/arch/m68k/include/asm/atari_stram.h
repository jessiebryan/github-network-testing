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
Tue Jul 19 12:35:36 PDT 2016
Fri Jul 22 15:41:03 PDT 2016
Sun, Jul 24, 2016  1:38:04 PM
Mon, Jul 25, 2016  8:02:33 PM
