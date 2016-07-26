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
Tue Jul 19 12:40:18 PDT 2016
Fri Jul 22 15:50:08 PDT 2016
Sun, Jul 24, 2016  2:44:21 PM
Mon, Jul 25, 2016  9:18:28 PM
