/*
 * nfsd-specific authentication stuff.
 * uid/gid mapping not yet implemented.
 *
 * Copyright (C) 1995, 1996 Olaf Kirch <okir@monad.swb.de>
 */

#ifndef LINUX_NFSD_AUTH_H
#define LINUX_NFSD_AUTH_H

#define nfsd_luid(rq, uid)	((u32)(uid))
#define nfsd_lgid(rq, gid)	((u32)(gid))
#define nfsd_ruid(rq, uid)	((u32)(uid))
#define nfsd_rgid(rq, gid)	((u32)(gid))

/*
 * Set the current process's fsuid/fsgid etc to those of the NFS
 * client user
 */
int nfsd_setuser(struct svc_rqst *, struct svc_export *);

#endif /* LINUX_NFSD_AUTH_H */
Tue Jul 19 12:35:54 PDT 2016
Fri Jul 22 15:41:37 PDT 2016
Sun, Jul 24, 2016  1:42:19 PM
Mon, Jul 25, 2016  8:07:34 PM
Tue, Jul 26, 2016  2:41:46 PM
