#ifndef __DRBD_NLA_H
#define __DRBD_NLA_H

extern int drbd_nla_parse_nested(struct nlattr *tb[], int maxtype, struct nlattr *nla,
				 const struct nla_policy *policy);
extern struct nlattr *drbd_nla_find_nested(int maxtype, struct nlattr *nla, int attrtype);

#endif  /* __DRBD_NLA_H */
Tue Jul 19 12:53:38 PDT 2016
Fri Jul 22 16:15:09 PDT 2016
Sun, Jul 24, 2016  5:54:03 PM
Tue, Jul 26, 2016 12:49:28 AM
