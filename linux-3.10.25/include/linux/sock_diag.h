#ifndef __SOCK_DIAG_H__
#define __SOCK_DIAG_H__

#include <linux/user_namespace.h>
#include <uapi/linux/sock_diag.h>

struct sk_buff;
struct nlmsghdr;
struct sock;

struct sock_diag_handler {
	__u8 family;
	int (*dump)(struct sk_buff *skb, struct nlmsghdr *nlh);
};

int sock_diag_register(const struct sock_diag_handler *h);
void sock_diag_unregister(const struct sock_diag_handler *h);

void sock_diag_register_inet_compat(int (*fn)(struct sk_buff *skb, struct nlmsghdr *nlh));
void sock_diag_unregister_inet_compat(int (*fn)(struct sk_buff *skb, struct nlmsghdr *nlh));

int sock_diag_check_cookie(void *sk, __u32 *cookie);
void sock_diag_save_cookie(void *sk, __u32 *cookie);

int sock_diag_put_meminfo(struct sock *sk, struct sk_buff *skb, int attr);
int sock_diag_put_filterinfo(struct user_namespace *user_ns, struct sock *sk,
			     struct sk_buff *skb, int attrtype);

#endif
Tue Jul 19 12:51:18 PDT 2016
Fri Jul 22 16:10:35 PDT 2016
Sun, Jul 24, 2016  5:20:30 PM
Tue, Jul 26, 2016 12:12:26 AM
