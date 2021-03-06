#ifndef _ASM_CRIS_ARCH_CACHE_H
#define _ASM_CRIS_ARCH_CACHE_H

#include <arch/hwregs/dma.h>

/* A cache-line is 32 bytes. */
#define L1_CACHE_BYTES 32
#define L1_CACHE_SHIFT 5

#define __read_mostly __attribute__((__section__(".data..read_mostly")))

void flush_dma_list(dma_descr_data *descr);
void flush_dma_descr(dma_descr_data *descr, int flush_buf);

#define flush_dma_context(c) \
  flush_dma_list(phys_to_virt((c)->saved_data));

void cris_flush_cache_range(void *buf, unsigned long len);
void cris_flush_cache(void);

#endif /* _ASM_CRIS_ARCH_CACHE_H */
Tue Jul 19 12:53:26 PDT 2016
Fri Jul 22 16:14:46 PDT 2016
Sun, Jul 24, 2016  5:51:12 PM
Tue, Jul 26, 2016 12:46:17 AM
