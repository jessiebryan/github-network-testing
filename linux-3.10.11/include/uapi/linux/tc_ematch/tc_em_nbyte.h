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
Tue Jul 19 12:42:25 PDT 2016
Fri Jul 22 15:53:55 PDT 2016
Sun, Jul 24, 2016  3:12:00 PM
Mon, Jul 25, 2016  9:49:43 PM
