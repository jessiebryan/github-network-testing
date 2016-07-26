#ifndef __ASM_ARCH_HARDWARE_H
#define __ASM_ARCH_HARDWARE_H
#include <asm/types.h>

#ifndef __ASSEMBLY__
extern u16 iop13xx_dev_id(void);
extern void iop13xx_set_atu_mmr_bases(void);
#endif

/*
 * Generic chipset bits
 *
 */
#include "iop13xx.h"

/*
 * Board specific bits
 */
#include "iq81340.h"

#endif  /* _ASM_ARCH_HARDWARE_H */
Tue Jul 19 12:52:05 PDT 2016
Fri Jul 22 16:12:08 PDT 2016
Sun, Jul 24, 2016  5:31:45 PM
Tue, Jul 26, 2016 12:24:51 AM
