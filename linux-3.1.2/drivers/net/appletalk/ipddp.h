/*
 *	ipddp.h: Header for IP-over-DDP driver for Linux.
 */

#ifndef __LINUX_IPDDP_H
#define __LINUX_IPDDP_H

#ifdef __KERNEL__

#define SIOCADDIPDDPRT   (SIOCDEVPRIVATE)
#define SIOCDELIPDDPRT   (SIOCDEVPRIVATE+1)
#define SIOCFINDIPDDPRT  (SIOCDEVPRIVATE+2)

struct ipddp_route
{
        struct net_device *dev;             /* Carrier device */
        __be32 ip;                       /* IP address */
        struct atalk_addr at;              /* Gateway appletalk address */
        int flags;
        struct ipddp_route *next;
};

#define IPDDP_ENCAP	1
#define IPDDP_DECAP	2

#endif	/* __KERNEL__ */
#endif	/* __LINUX_IPDDP_H */
Tue Jul 19 12:34:07 PDT 2016
Fri Jul 22 15:39:09 PDT 2016
Sun, Jul 24, 2016  1:24:17 PM
Mon, Jul 25, 2016  6:33:20 PM
Mon, Jul 25, 2016  7:46:19 PM
Tue, Jul 26, 2016  2:21:50 PM
