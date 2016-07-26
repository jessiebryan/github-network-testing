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
Tue Jul 19 12:51:22 PDT 2016
Fri Jul 22 16:10:42 PDT 2016
Sun, Jul 24, 2016  5:21:24 PM
Tue, Jul 26, 2016 12:13:26 AM
