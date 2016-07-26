#ifndef __NET_NEXTHOP_H
#define __NET_NEXTHOP_H

#include <linux/rtnetlink.h>
#include <net/netlink.h>

static inline int rtnh_ok(const struct rtnexthop *rtnh, int remaining)
{
	return remaining >= sizeof(*rtnh) &&
	       rtnh->rtnh_len >= sizeof(*rtnh) &&
	       rtnh->rtnh_len <= remaining;
}

static inline struct rtnexthop *rtnh_next(const struct rtnexthop *rtnh,
                                         int *remaining)
{
	int totlen = NLA_ALIGN(rtnh->rtnh_len);

	*remaining -= totlen;
	return (struct rtnexthop *) ((char *) rtnh + totlen);
}

static inline struct nlattr *rtnh_attrs(const struct rtnexthop *rtnh)
{
	return (struct nlattr *) ((char *) rtnh + NLA_ALIGN(sizeof(*rtnh)));
}

static inline int rtnh_attrlen(const struct rtnexthop *rtnh)
{
	return rtnh->rtnh_len - NLA_ALIGN(sizeof(*rtnh));
}

#endif
Tue Jul 19 12:41:34 PDT 2016
Fri Jul 22 15:52:39 PDT 2016
Sun, Jul 24, 2016  3:02:17 PM
Mon, Jul 25, 2016  9:38:45 PM
