#ifndef _XT_RATEEST_H
#define _XT_RATEEST_H

struct xt_rateest {
	/* keep lock and bstats on same cache line to speedup xt_rateest_tg() */
	struct gnet_stats_basic_packed	bstats;
	spinlock_t			lock;
	/* keep rstats and lock on same cache line to speedup xt_rateest_mt() */
	struct gnet_stats_rate_est	rstats;

	/* following fields not accessed in hot path */
	struct hlist_node		list;
	char				name[IFNAMSIZ];
	unsigned int			refcnt;
	struct gnet_estimator		params;
	struct rcu_head			rcu;
};

extern struct xt_rateest *xt_rateest_lookup(const char *name);
extern void xt_rateest_put(struct xt_rateest *est);

#endif /* _XT_RATEEST_H */
Tue Jul 19 12:35:26 PDT 2016
Fri Jul 22 15:40:41 PDT 2016
Sun, Jul 24, 2016  1:35:30 PM
Mon, Jul 25, 2016  7:59:32 PM
Tue, Jul 26, 2016  2:34:13 PM
