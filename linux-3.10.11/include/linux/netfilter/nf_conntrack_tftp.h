#ifndef _NF_CONNTRACK_TFTP_H
#define _NF_CONNTRACK_TFTP_H

#define TFTP_PORT 69

struct tftphdr {
	__be16 opcode;
};

#define TFTP_OPCODE_READ	1
#define TFTP_OPCODE_WRITE	2
#define TFTP_OPCODE_DATA	3
#define TFTP_OPCODE_ACK		4
#define TFTP_OPCODE_ERROR	5

extern unsigned int (*nf_nat_tftp_hook)(struct sk_buff *skb,
				        enum ip_conntrack_info ctinfo,
				        struct nf_conntrack_expect *exp);

#endif /* _NF_CONNTRACK_TFTP_H */
Tue Jul 19 12:42:19 PDT 2016
Fri Jul 22 15:53:46 PDT 2016
Sun, Jul 24, 2016  3:10:48 PM
Mon, Jul 25, 2016  9:48:21 PM
