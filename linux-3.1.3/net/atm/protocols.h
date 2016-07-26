/* net/atm/protocols.h - ATM protocol handler entry points */

/* Written 1995-1997 by Werner Almesberger, EPFL LRC */


#ifndef NET_ATM_PROTOCOLS_H
#define NET_ATM_PROTOCOLS_H

int atm_init_aal0(struct atm_vcc *vcc);	/* "raw" AAL0 */
int atm_init_aal34(struct atm_vcc *vcc);/* "raw" AAL3/4 transport */
int atm_init_aal5(struct atm_vcc *vcc);	/* "raw" AAL5 transport */

#endif
Tue Jul 19 12:35:27 PDT 2016
Fri Jul 22 15:40:43 PDT 2016
Sun, Jul 24, 2016  1:35:47 PM
Mon, Jul 25, 2016  7:59:52 PM
Tue, Jul 26, 2016  2:34:31 PM
