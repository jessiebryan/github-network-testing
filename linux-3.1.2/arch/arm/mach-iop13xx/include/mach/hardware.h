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
Tue Jul 19 12:33:49 PDT 2016
Fri Jul 22 15:38:36 PDT 2016
Sun, Jul 24, 2016  1:20:03 PM
Mon, Jul 25, 2016  6:28:15 PM
Mon, Jul 25, 2016  7:41:21 PM
