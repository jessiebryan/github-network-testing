#ifndef __ASM_IDMAP_H
#define __ASM_IDMAP_H

#include <linux/compiler.h>
#include <asm/pgtable.h>

/* Tag a function as requiring to be executed via an identity mapping. */
#define __idmap __section(.idmap.text) noinline notrace

extern pgd_t *idmap_pgd;

void setup_mm_for_reboot(void);

#endif	/* __ASM_IDMAP_H */
Tue Jul 19 12:52:04 PDT 2016
Fri Jul 22 16:12:06 PDT 2016
Sun, Jul 24, 2016  5:31:33 PM
Tue, Jul 26, 2016 12:24:37 AM
