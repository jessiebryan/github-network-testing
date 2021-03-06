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
Tue Jul 19 12:40:56 PDT 2016
Fri Jul 22 15:51:21 PDT 2016
Sun, Jul 24, 2016  2:53:18 PM
Mon, Jul 25, 2016  9:28:36 PM
