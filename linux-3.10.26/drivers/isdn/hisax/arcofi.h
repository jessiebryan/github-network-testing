/* $Id: arcofi.h,v 1.6.6.2 2001/09/23 22:24:46 kai Exp $
 *
 * Ansteuerung ARCOFI 2165
 *
 * Author       Karsten Keil
 * Copyright    by Karsten Keil      <keil@isdn4linux.de>
 *
 * This software may be used and distributed according to the terms
 * of the GNU General Public License, incorporated herein by reference.
 *
 */

#define ARCOFI_USE	1

/* states */
#define ARCOFI_NOP	0
#define ARCOFI_TRANSMIT	1
#define ARCOFI_RECEIVE	2
/* events */
#define ARCOFI_START	1
#define ARCOFI_TX_END	2
#define ARCOFI_RX_END	3
#define ARCOFI_TIMEOUT	4

extern int arcofi_fsm(struct IsdnCardState *cs, int event, void *data);
extern void init_arcofi(struct IsdnCardState *cs);
extern void clear_arcofi(struct IsdnCardState *cs);
Tue Jul 19 12:51:44 PDT 2016
Fri Jul 22 16:11:23 PDT 2016
Sun, Jul 24, 2016  5:26:30 PM
Tue, Jul 26, 2016 12:19:03 AM
