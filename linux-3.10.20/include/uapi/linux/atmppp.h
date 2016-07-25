/* atmppp.h - RFC2364 PPPoATM */

/* Written 2000 by Mitchell Blank Jr */

#ifndef _LINUX_ATMPPP_H
#define _LINUX_ATMPPP_H

#include <linux/atm.h>

#define PPPOATM_ENCAPS_AUTODETECT	(0)
#define PPPOATM_ENCAPS_VC		(1)
#define PPPOATM_ENCAPS_LLC		(2)

/*
 * This is for the ATM_SETBACKEND call - these are like socket families:
 * the first element of the structure is the backend number and the rest
 * is per-backend specific
 */
struct atm_backend_ppp {
	atm_backend_t	backend_num;	/* ATM_BACKEND_PPP */
	int		encaps;		/* PPPOATM_ENCAPS_* */
};

#endif	/* _LINUX_ATMPPP_H */
Tue Jul 19 12:48:07 PDT 2016
Fri Jul 22 16:04:33 PDT 2016
Sun, Jul 24, 2016  4:34:45 PM
