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
Tue Jul 19 12:54:00 PDT 2016
Fri Jul 22 16:15:51 PDT 2016
Sun, Jul 24, 2016  5:59:14 PM
Tue, Jul 26, 2016 12:55:10 AM
