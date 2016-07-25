#ifndef __ASM_SH_LBOXRE2_H
#define __ASM_SH_LBOXRE2_H

/*
 * Copyright (C) 2007 Nobuhiro Iwamatsu
 *
 * NTT COMWARE L-BOX RE2 support
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 */

#define IRQ_CF1		9	/* CF1 */
#define IRQ_CF0		10	/* CF0 */
#define IRQ_INTD	11	/* INTD */
#define IRQ_ETH1	12	/* Ether1 */
#define IRQ_ETH0	13	/* Ether0 */
#define IRQ_INTA	14	/* INTA */

void init_lboxre2_IRQ(void);

#define __IO_PREFIX	lboxre2
#include <asm/io_generic.h>

#endif  /* __ASM_SH_LBOXRE2_H */
Tue Jul 19 12:33:25 PDT 2016
Fri Jul 22 15:37:53 PDT 2016
Sun, Jul 24, 2016  1:14:38 PM
