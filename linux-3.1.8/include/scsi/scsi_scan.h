#ifndef _SCSI_SCSI_SCAN_H
#define _SCSI_SCSI_SCAN_H

#ifdef CONFIG_SCSI
/* drivers/scsi/scsi_scan.c */
extern int scsi_complete_async_scans(void);
#else
static inline int scsi_complete_async_scans(void) { return 0; }
#endif

#endif /* _SCSI_SCSI_SCAN_H */
Tue Jul 19 12:37:47 PDT 2016
Fri Jul 22 15:45:11 PDT 2016
Sun, Jul 24, 2016  2:08:34 PM
Mon, Jul 25, 2016  8:38:39 PM
