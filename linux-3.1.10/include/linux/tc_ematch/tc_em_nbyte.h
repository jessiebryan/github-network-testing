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
Tue Jul 19 12:33:42 PDT 2016
Fri Jul 22 15:38:25 PDT 2016
Sun, Jul 24, 2016  1:18:43 PM
Mon, Jul 25, 2016  6:26:39 PM
Mon, Jul 25, 2016  7:39:48 PM
Tue, Jul 26, 2016  2:15:37 PM
