#ifndef	__BPQETHER_H
#define	__BPQETHER_H

/*
 * 	Defines for the BPQETHER pseudo device driver
 */

#ifndef __LINUX_IF_ETHER_H
#include <linux/if_ether.h>
#endif

#define SIOCSBPQETHOPT		(SIOCDEVPRIVATE+0)	/* reserved */
#define SIOCSBPQETHADDR		(SIOCDEVPRIVATE+1)
 
struct bpq_ethaddr {
	unsigned char destination[ETH_ALEN];
	unsigned char accept[ETH_ALEN];
};

/* 
 * For SIOCSBPQETHOPT - this is compatible with PI2/PacketTwin card drivers,
 * currently not implemented, though. If someone wants to hook a radio
 * to his Ethernet card he may find this useful. ;-)
 */

#define SIOCGBPQETHPARAM	0x5000  /* get Level 1 parameters */
#define SIOCSBPQETHPARAM	0x5001  /* set */

struct bpq_req  {
    int cmd;
    int speed;			/* unused */
    int clockmode;		/* unused */
    int txdelay;
    unsigned char persist;	/* unused */
    int slotime;		/* unused */
    int squeldelay;
    int dmachan;		/* unused */
    int irq;			/* unused */
};

#endif
Tue Jul 19 12:53:17 PDT 2016
Fri Jul 22 16:14:29 PDT 2016
Sun, Jul 24, 2016  5:49:04 PM
Tue, Jul 26, 2016 12:43:55 AM
