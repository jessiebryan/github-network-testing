#ifndef _KER_NFNETLINK_LOG_H
#define _KER_NFNETLINK_LOG_H

void
nfulnl_log_packet(u_int8_t pf,
		  unsigned int hooknum,
		  const struct sk_buff *skb,
		  const struct net_device *in,
		  const struct net_device *out,
		  const struct nf_loginfo *li_user,
		  const char *prefix);

#define NFULNL_COPY_DISABLED    0xff

#endif /* _KER_NFNETLINK_LOG_H */

Tue Jul 19 12:36:34 PDT 2016
Fri Jul 22 15:42:56 PDT 2016
Sun, Jul 24, 2016  1:51:59 PM
Mon, Jul 25, 2016  8:18:58 PM
