/*
 * sun3ints.h -- Linux/Sun3 interrupt handling code definitions
 *
 * Erik Verbruggen (erik@bigmama.xtdnet.nl)
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file COPYING in the main directory of this archive for
 * more details.
 */

#ifndef SUN3INTS_H
#define SUN3INTS_H

#include <linux/types.h>
#include <linux/interrupt.h>
#include <asm/intersil.h>
#include <asm/oplib.h>
#include <asm/traps.h>
#include <asm/irq.h>

#define SUN3_INT_VECS 192

void sun3_enable_irq(unsigned int irq);
void sun3_disable_irq(unsigned int irq);
extern void sun3_init_IRQ (void);
extern void sun3_enable_interrupts (void);
extern void sun3_disable_interrupts (void);
extern volatile unsigned char* sun3_intreg;

/* master list of VME vectors -- don't fuck with this */
#define SUN3_VEC_FLOPPY		(IRQ_USER+0)
#define SUN3_VEC_VMESCSI0	(IRQ_USER+0)
#define SUN3_VEC_VMESCSI1	(IRQ_USER+1)
#define SUN3_VEC_CG		(IRQ_USER+104)


#endif /* SUN3INTS_H */
Tue Jul 19 12:39:50 PDT 2016
Fri Jul 22 15:49:13 PDT 2016
Sun, Jul 24, 2016  2:37:39 PM
Mon, Jul 25, 2016  9:10:59 PM
