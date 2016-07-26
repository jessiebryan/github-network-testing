#ifndef _XT_TEE_TARGET_H
#define _XT_TEE_TARGET_H

struct xt_tee_tginfo {
	union nf_inet_addr gw;
	char oif[16];

	/* used internally by the kernel */
	struct xt_tee_priv *priv __attribute__((aligned(8)));
};

#endif /* _XT_TEE_TARGET_H */
Tue Jul 19 12:51:22 PDT 2016
Fri Jul 22 16:10:41 PDT 2016
Sun, Jul 24, 2016  5:21:18 PM
Tue, Jul 26, 2016 12:13:19 AM
