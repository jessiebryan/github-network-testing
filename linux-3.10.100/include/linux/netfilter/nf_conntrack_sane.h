#ifndef _NF_CONNTRACK_SANE_H
#define _NF_CONNTRACK_SANE_H
/* SANE tracking. */

#ifdef __KERNEL__

#define SANE_PORT	6566

enum sane_state {
	SANE_STATE_NORMAL,
	SANE_STATE_START_REQUESTED,
};

/* This structure exists only once per master */
struct nf_ct_sane_master {
	enum sane_state state;
};

#endif /* __KERNEL__ */

#endif /* _NF_CONNTRACK_SANE_H */
Tue Jul 19 12:40:13 PDT 2016
Fri Jul 22 15:49:58 PDT 2016
Sun, Jul 24, 2016  2:43:09 PM
Mon, Jul 25, 2016  9:17:07 PM
