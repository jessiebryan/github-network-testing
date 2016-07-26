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
Tue Jul 19 12:44:56 PDT 2016
Fri Jul 22 15:58:30 PDT 2016
Sun, Jul 24, 2016  3:47:41 PM
Mon, Jul 25, 2016 10:29:26 PM
