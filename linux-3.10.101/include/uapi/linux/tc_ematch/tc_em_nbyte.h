#ifndef __LINUX_TC_EM_NBYTE_H
#define __LINUX_TC_EM_NBYTE_H

#include <linux/types.h>
#include <linux/pkt_cls.h>

struct tcf_em_nbyte {
	__u16		off;
	__u16		len:12;
	__u8		layer:4;
};

#endif
Tue Jul 19 12:40:57 PDT 2016
Fri Jul 22 15:51:23 PDT 2016
Sun, Jul 24, 2016  2:53:34 PM
Mon, Jul 25, 2016  9:28:54 PM
