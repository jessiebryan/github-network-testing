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
Tue Jul 19 12:41:27 PDT 2016
Fri Jul 22 15:52:27 PDT 2016
Sun, Jul 24, 2016  3:00:42 PM
Mon, Jul 25, 2016  9:36:59 PM
