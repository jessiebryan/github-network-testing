#ifndef __LINUX_PIM_H
#define __LINUX_PIM_H

#include <asm/byteorder.h>

/* Message types - V1 */
#define PIM_V1_VERSION		cpu_to_be32(0x10000000)
#define PIM_V1_REGISTER		1

/* Message types - V2 */
#define PIM_VERSION		2
#define PIM_REGISTER		1

#define PIM_NULL_REGISTER	cpu_to_be32(0x40000000)

/* PIMv2 register message header layout (ietf-draft-idmr-pimvsm-v2-00.ps */
struct pimreghdr
{
	__u8	type;
	__u8	reserved;
	__be16	csum;
	__be32	flags;
};

struct sk_buff;
extern int pim_rcv_v1(struct sk_buff *);
#endif
Tue Jul 19 12:38:20 PDT 2016
Fri Jul 22 15:46:13 PDT 2016
Sun, Jul 24, 2016  2:16:15 PM
Mon, Jul 25, 2016  8:47:09 PM
