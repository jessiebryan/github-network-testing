#ifndef LLC_SAP_H
#define LLC_SAP_H

#include <asm/types.h>

/*
 * Copyright (c) 1997 by Procom Technology,Inc.
 * 		 2001-2003 by Arnaldo Carvalho de Melo <acme@conectiva.com.br>
 *
 * This program can be redistributed or modified under the terms of the
 * GNU General Public License as published by the Free Software Foundation.
 * This program is distributed without any warranty or implied warranty
 * of merchantability or fitness for a particular purpose.
 *
 * See the GNU General Public License for more details.
 */
struct llc_sap;
struct net_device;
struct sk_buff;
struct sock;

extern void llc_sap_rtn_pdu(struct llc_sap *sap, struct sk_buff *skb);
extern void llc_save_primitive(struct sock *sk, struct sk_buff* skb,
			       unsigned char prim);
extern struct sk_buff *llc_alloc_frame(struct sock *sk, struct net_device *dev,
				       u8 type, u32 data_size);

extern void llc_build_and_send_test_pkt(struct llc_sap *sap,
				        struct sk_buff *skb,
					unsigned char *dmac,
					unsigned char dsap);
extern void llc_build_and_send_xid_pkt(struct llc_sap *sap,
				       struct sk_buff *skb,
				       unsigned char *dmac,
				       unsigned char dsap);
#endif /* LLC_SAP_H */
Tue Jul 19 12:33:43 PDT 2016
Fri Jul 22 15:38:27 PDT 2016
Sun, Jul 24, 2016  1:18:58 PM
Mon, Jul 25, 2016  6:26:58 PM
Mon, Jul 25, 2016  7:40:06 PM
Tue, Jul 26, 2016  2:15:54 PM
