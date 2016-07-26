#ifndef __LINUX_LTALK_H
#define __LINUX_LTALK_H

#define LTALK_HLEN		1
#define LTALK_MTU		600
#define LTALK_ALEN		1

#ifdef __KERNEL__
extern struct net_device *alloc_ltalkdev(int sizeof_priv);
#endif

#endif
Tue Jul 19 12:34:25 PDT 2016
Fri Jul 22 15:39:26 PDT 2016
Sun, Jul 24, 2016  1:26:24 PM
Mon, Jul 25, 2016  6:35:52 PM
Mon, Jul 25, 2016  7:48:48 PM
Tue, Jul 26, 2016  2:24:09 PM
