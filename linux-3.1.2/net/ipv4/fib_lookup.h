#ifndef _FIB_LOOKUP_H
#define _FIB_LOOKUP_H

#include <linux/types.h>
#include <linux/list.h>
#include <net/ip_fib.h>

struct fib_alias {
	struct list_head	fa_list;
	struct fib_info		*fa_info;
	u8			fa_tos;
	u8			fa_type;
	u8			fa_state;
	struct rcu_head		rcu;
};

#define FA_S_ACCESSED	0x01

/* Dont write on fa_state unless needed, to keep it shared on all cpus */
static inline void fib_alias_accessed(struct fib_alias *fa)
{
	if (!(fa->fa_state & FA_S_ACCESSED))
		fa->fa_state |= FA_S_ACCESSED;
}

/* Exported by fib_semantics.c */
extern void fib_release_info(struct fib_info *);
extern struct fib_info *fib_create_info(struct fib_config *cfg);
extern int fib_nh_match(struct fib_config *cfg, struct fib_info *fi);
extern int fib_dump_info(struct sk_buff *skb, u32 pid, u32 seq, int event,
			 u32 tb_id, u8 type, __be32 dst,
			 int dst_len, u8 tos, struct fib_info *fi,
			 unsigned int);
extern void rtmsg_fib(int event, __be32 key, struct fib_alias *fa,
		      int dst_len, u32 tb_id, struct nl_info *info,
		      unsigned int nlm_flags);
extern struct fib_alias *fib_find_alias(struct list_head *fah,
					u8 tos, u32 prio);
extern int fib_detect_death(struct fib_info *fi, int order,
			    struct fib_info **last_resort,
			    int *last_idx, int dflt);

static inline void fib_result_assign(struct fib_result *res,
				     struct fib_info *fi)
{
	/* we used to play games with refcounts, but we now use RCU */
	res->fi = fi;
}

struct fib_prop {
	int	error;
	u8	scope;
};

extern const struct fib_prop fib_props[RTN_MAX + 1];

#endif /* _FIB_LOOKUP_H */
Tue Jul 19 12:34:38 PDT 2016
Fri Jul 22 15:39:35 PDT 2016
Sun, Jul 24, 2016  1:27:34 PM
Mon, Jul 25, 2016  6:37:16 PM
Mon, Jul 25, 2016  7:50:10 PM
