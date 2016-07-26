#ifndef _NF_CONNTRACK_TUPLE_COMMON_H
#define _NF_CONNTRACK_TUPLE_COMMON_H

enum ip_conntrack_dir {
	IP_CT_DIR_ORIGINAL,
	IP_CT_DIR_REPLY,
	IP_CT_DIR_MAX
};

/* The protocol-specific manipulable parts of the tuple: always in
 * network order
 */
union nf_conntrack_man_proto {
	/* Add other protocols here. */
	__be16 all;

	struct {
		__be16 port;
	} tcp;
	struct {
		__be16 port;
	} udp;
	struct {
		__be16 id;
	} icmp;
	struct {
		__be16 port;
	} dccp;
	struct {
		__be16 port;
	} sctp;
	struct {
		__be16 key;	/* GRE key is 32bit, PPtP only uses 16bit */
	} gre;
};

#define CTINFO2DIR(ctinfo) ((ctinfo) >= IP_CT_IS_REPLY ? IP_CT_DIR_REPLY : IP_CT_DIR_ORIGINAL)

#endif /* _NF_CONNTRACK_TUPLE_COMMON_H */
Tue Jul 19 12:47:29 PDT 2016
Fri Jul 22 16:03:22 PDT 2016
Sun, Jul 24, 2016  4:25:39 PM
Mon, Jul 25, 2016 11:11:38 PM
