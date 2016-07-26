#ifndef _GDTH_PROC_H
#define _GDTH_PROC_H

/* gdth_proc.h 
 * $Id: gdth_proc.h,v 1.16 2004/01/14 13:09:01 achim Exp $
 */

int gdth_execute(struct Scsi_Host *shost, gdth_cmd_str *gdtcmd, char *cmnd,
                 int timeout, u32 *info);

static int gdth_set_asc_info(struct Scsi_Host *host, char *buffer,
                             int length, gdth_ha_str *ha);

static char *gdth_ioctl_alloc(gdth_ha_str *ha, int size, int scratch,
                              u64 *paddr);
static void gdth_ioctl_free(gdth_ha_str *ha, int size, char *buf, u64 paddr);
static void gdth_wait_completion(gdth_ha_str *ha, int busnum, int id);

#endif

Tue Jul 19 12:53:45 PDT 2016
Fri Jul 22 16:15:22 PDT 2016
Sun, Jul 24, 2016  5:55:38 PM
Tue, Jul 26, 2016 12:51:12 AM
