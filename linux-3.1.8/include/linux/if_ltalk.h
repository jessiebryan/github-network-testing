#ifndef __LINUX_LTALK_H
#define __LINUX_LTALK_H

#define LTALK_HLEN		1
#define LTALK_MTU		600
#define LTALK_ALEN		1

#ifdef __KERNEL__
extern struct net_device *alloc_ltalkdev(int sizeof_priv);
#endif

#endif
Tue Jul 19 12:37:42 PDT 2016
Fri Jul 22 15:45:03 PDT 2016
Sun, Jul 24, 2016  2:07:38 PM
