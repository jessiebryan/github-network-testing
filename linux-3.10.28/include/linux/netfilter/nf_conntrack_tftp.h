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
Tue Jul 19 12:53:13 PDT 2016
Fri Jul 22 16:14:21 PDT 2016
Sun, Jul 24, 2016  5:48:08 PM
Tue, Jul 26, 2016 12:42:53 AM
