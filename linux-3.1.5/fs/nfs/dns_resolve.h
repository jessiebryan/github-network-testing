/*
 * Resolve DNS hostnames into valid ip addresses
 */
#ifndef __LINUX_FS_NFS_DNS_RESOLVE_H
#define __LINUX_FS_NFS_DNS_RESOLVE_H

#define NFS_DNS_HOSTNAME_MAXLEN	(128)


#ifdef CONFIG_NFS_USE_KERNEL_DNS
static inline int nfs_dns_resolver_init(void)
{
	return 0;
}

static inline void nfs_dns_resolver_destroy(void)
{}
#else
extern int nfs_dns_resolver_init(void);
extern void nfs_dns_resolver_destroy(void);
#endif

extern ssize_t nfs_dns_resolve_name(char *name, size_t namelen,
		struct sockaddr *sa, size_t salen);

#endif
Tue Jul 19 12:36:28 PDT 2016
Fri Jul 22 15:42:44 PDT 2016
Sun, Jul 24, 2016  1:50:33 PM
Mon, Jul 25, 2016  8:17:16 PM
