#ifndef __DRBD_NLA_H
#define __DRBD_NLA_H

extern int drbd_nla_parse_nested(struct nlattr *tb[], int maxtype, struct nlattr *nla,
				 const struct nla_policy *policy);
extern struct nlattr *drbd_nla_find_nested(int maxtype, struct nlattr *nla, int attrtype);

#endif  /* __DRBD_NLA_H */
Tue Jul 19 12:51:42 PDT 2016
Fri Jul 22 16:11:20 PDT 2016
Sun, Jul 24, 2016  5:26:06 PM
Tue, Jul 26, 2016 12:18:37 AM
