#ifndef _LINUX_GETOPT_H
#define _LINUX_GETOPT_H

#define OPT_NOPARAM	1
#define OPT_INT		2
#define OPT_STRING	4
struct ncp_option {
	const char *name;
	unsigned int has_arg;
	int val;
};

extern int ncp_getopt(const char *caller, char **options, const struct ncp_option *opts,
		      char **optopt, char **optarg, unsigned long *value);

#endif /* _LINUX_GETOPT_H */
Tue Jul 19 12:42:56 PDT 2016
Fri Jul 22 15:54:50 PDT 2016
Sun, Jul 24, 2016  3:19:07 PM
Mon, Jul 25, 2016  9:57:42 PM
