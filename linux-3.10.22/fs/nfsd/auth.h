/*
 * nfsd-specific authentication stuff.
 *
 * Copyright (C) 1995, 1996 Olaf Kirch <okir@monad.swb.de>
 */

#ifndef LINUX_NFSD_AUTH_H
#define LINUX_NFSD_AUTH_H

/*
 * Set the current process's fsuid/fsgid etc to those of the NFS
 * client user
 */
int nfsd_setuser(struct svc_rqst *, struct svc_export *);

#endif /* LINUX_NFSD_AUTH_H */
Tue Jul 19 12:49:16 PDT 2016
Fri Jul 22 16:06:44 PDT 2016
Sun, Jul 24, 2016  4:51:23 PM
Mon, Jul 25, 2016 11:40:19 PM
