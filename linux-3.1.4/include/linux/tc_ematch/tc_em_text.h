#ifndef __LINUX_TC_EM_TEXT_H
#define __LINUX_TC_EM_TEXT_H

#include <linux/types.h>
#include <linux/pkt_cls.h>

#define TC_EM_TEXT_ALGOSIZ	16

struct tcf_em_text {
	char		algo[TC_EM_TEXT_ALGOSIZ];
	__u16		from_offset;
	__u16		to_offset;
	__u16		pattern_len;
	__u8		from_layer:4;
	__u8		to_layer:4;
	__u8		pad;
};

#endif
Tue Jul 19 12:35:59 PDT 2016
Fri Jul 22 15:41:46 PDT 2016
Sun, Jul 24, 2016  1:43:29 PM
Mon, Jul 25, 2016  8:08:56 PM
Tue, Jul 26, 2016  2:43:03 PM
