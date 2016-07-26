#ifndef __LINUX_ARP_NETFILTER_H
#define __LINUX_ARP_NETFILTER_H

/* ARP-specific defines for netfilter.
 * (C)2002 Rusty Russell IBM -- This code is GPL.
 */

#include <linux/netfilter.h>

/* There is no PF_ARP. */
#define NF_ARP		0

/* ARP Hooks */
#define NF_ARP_IN	0
#define NF_ARP_OUT	1
#define NF_ARP_FORWARD	2
#define NF_ARP_NUMHOOKS	3

#endif /* __LINUX_ARP_NETFILTER_H */
Tue Jul 19 12:46:12 PDT 2016
Fri Jul 22 16:00:59 PDT 2016
Sun, Jul 24, 2016  4:07:14 PM
Mon, Jul 25, 2016 10:51:11 PM
