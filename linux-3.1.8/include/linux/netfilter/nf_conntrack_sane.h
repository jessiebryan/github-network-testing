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
Tue Jul 19 12:37:43 PDT 2016
Fri Jul 22 15:45:05 PDT 2016
Sun, Jul 24, 2016  2:07:54 PM
Mon, Jul 25, 2016  8:37:52 PM
