/*
 * IPv4 support for nf_conntrack.
 *
 * 23 Mar 2004: Yasuyuki Kozakai @ USAGI <yasuyuki.kozakai@toshiba.co.jp>
 *	- move L3 protocol dependent part from include/linux/netfilter_ipv4/
 *	  ip_conntarck.h
 */

#ifndef _NF_CONNTRACK_IPV4_H
#define _NF_CONNTRACK_IPV4_H


extern struct nf_conntrack_l3proto nf_conntrack_l3proto_ipv4;

extern struct nf_conntrack_l4proto nf_conntrack_l4proto_tcp4;
extern struct nf_conntrack_l4proto nf_conntrack_l4proto_udp4;
extern struct nf_conntrack_l4proto nf_conntrack_l4proto_icmp;

extern int nf_conntrack_ipv4_compat_init(void);
extern void nf_conntrack_ipv4_compat_fini(void);

extern void need_ipv4_conntrack(void);

#endif /*_NF_CONNTRACK_IPV4_H*/
Tue Jul 19 12:33:43 PDT 2016
Fri Jul 22 15:38:27 PDT 2016
Sun, Jul 24, 2016  1:18:59 PM
Mon, Jul 25, 2016  6:26:58 PM
Mon, Jul 25, 2016  7:40:06 PM
Tue, Jul 26, 2016  2:15:55 PM
