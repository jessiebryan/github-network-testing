#ifndef __LINUX_LTALK_H
#define __LINUX_LTALK_H

#define LTALK_HLEN		1
#define LTALK_MTU		600
#define LTALK_ALEN		1

#ifdef __KERNEL__
extern struct net_device *alloc_ltalkdev(int sizeof_priv);
#endif

#endif
Tue Jul 19 12:35:56 PDT 2016
Fri Jul 22 15:41:41 PDT 2016
Sun, Jul 24, 2016  1:42:54 PM
Mon, Jul 25, 2016  8:08:15 PM
Tue, Jul 26, 2016  2:42:24 PM
