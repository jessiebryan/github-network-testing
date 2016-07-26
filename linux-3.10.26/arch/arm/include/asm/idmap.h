#ifndef __ASM_IDMAP_H
#define __ASM_IDMAP_H

#include <linux/compiler.h>
#include <asm/pgtable.h>

/* Tag a function as requiring to be executed via an identity mapping. */
#define __idmap __section(.idmap.text) noinline notrace

extern pgd_t *idmap_pgd;

void setup_mm_for_reboot(void);

#endif	/* __ASM_IDMAP_H */
Tue Jul 19 12:51:26 PDT 2016
Fri Jul 22 16:10:49 PDT 2016
Sun, Jul 24, 2016  5:22:14 PM
Tue, Jul 26, 2016 12:14:21 AM
