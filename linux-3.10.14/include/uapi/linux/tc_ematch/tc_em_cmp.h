#ifndef __LINUX_TC_EM_CMP_H
#define __LINUX_TC_EM_CMP_H

#include <linux/types.h>
#include <linux/pkt_cls.h>

struct tcf_em_cmp {
	__u32		val;
	__u32		mask;
	__u16		off;
	__u8		align:4;
	__u8		flags:4;
	__u8		layer:4;
	__u8		opnd:4;
};

enum {
	TCF_EM_ALIGN_U8  = 1,
	TCF_EM_ALIGN_U16 = 2,
	TCF_EM_ALIGN_U32 = 4
};

#define TCF_EM_CMP_TRANS	1

#endif
Tue Jul 19 12:44:21 PDT 2016
Fri Jul 22 15:57:28 PDT 2016
Sun, Jul 24, 2016  3:39:41 PM
