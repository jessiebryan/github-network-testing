#ifndef _KER_NFNETLINK_LOG_H
#define _KER_NFNETLINK_LOG_H

void
nfulnl_log_packet(struct net *net,
		  u_int8_t pf,
		  unsigned int hooknum,
		  const struct sk_buff *skb,
		  const struct net_device *in,
		  const struct net_device *out,
		  const struct nf_loginfo *li_user,
		  const char *prefix);

#define NFULNL_COPY_DISABLED    0xff

#endif /* _KER_NFNETLINK_LOG_H */

Tue Jul 19 12:40:55 PDT 2016
Fri Jul 22 15:51:19 PDT 2016
Sun, Jul 24, 2016  2:53:02 PM
Mon, Jul 25, 2016  9:28:18 PM
