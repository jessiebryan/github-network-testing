#ifndef _XT_TEE_TARGET_H
#define _XT_TEE_TARGET_H

struct xt_tee_tginfo {
	union nf_inet_addr gw;
	char oif[16];

	/* used internally by the kernel */
	struct xt_tee_priv *priv __attribute__((aligned(8)));
};

#endif /* _XT_TEE_TARGET_H */
Tue Jul 19 12:36:32 PDT 2016
Fri Jul 22 15:42:52 PDT 2016
Sun, Jul 24, 2016  1:51:26 PM
Mon, Jul 25, 2016  8:18:19 PM
