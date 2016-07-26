#ifndef __CGROUP_H__
#define __CGROUP_H__

struct option;

struct cgroup_sel {
	char *name;
	int fd;
	int refcnt;
};


extern int nr_cgroups; /* number of explicit cgroups defined */
extern void close_cgroup(struct cgroup_sel *cgrp);
extern int parse_cgroups(const struct option *opt, const char *str, int unset);

#endif /* __CGROUP_H__ */
Tue Jul 19 12:37:10 PDT 2016
Fri Jul 22 15:44:07 PDT 2016
Sun, Jul 24, 2016  2:00:52 PM
Mon, Jul 25, 2016  8:29:30 PM
