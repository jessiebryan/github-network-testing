#ifndef _ARPT_MANGLE_H
#define _ARPT_MANGLE_H
#include <linux/netfilter_arp/arp_tables.h>

#define ARPT_MANGLE_ADDR_LEN_MAX sizeof(struct in_addr)
struct arpt_mangle
{
	char src_devaddr[ARPT_DEV_ADDR_LEN_MAX];
	char tgt_devaddr[ARPT_DEV_ADDR_LEN_MAX];
	union {
		struct in_addr src_ip;
	} u_s;
	union {
		struct in_addr tgt_ip;
	} u_t;
	u_int8_t flags;
	int target;
};

#define ARPT_MANGLE_SDEV 0x01
#define ARPT_MANGLE_TDEV 0x02
#define ARPT_MANGLE_SIP 0x04
#define ARPT_MANGLE_TIP 0x08
#define ARPT_MANGLE_MASK 0x0f

#endif /* _ARPT_MANGLE_H */
Tue Jul 19 12:43:42 PDT 2016
Fri Jul 22 15:56:15 PDT 2016
Sun, Jul 24, 2016  3:30:20 PM
Mon, Jul 25, 2016 10:10:08 PM
