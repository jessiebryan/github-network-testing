#ifndef _SCSI_SCSI_SCAN_H
#define _SCSI_SCSI_SCAN_H

#ifdef CONFIG_SCSI
/* drivers/scsi/scsi_scan.c */
extern int scsi_complete_async_scans(void);
#else
static inline int scsi_complete_async_scans(void) { return 0; }
#endif

#endif /* _SCSI_SCSI_SCAN_H */
Tue Jul 19 12:38:23 PDT 2016
Fri Jul 22 15:46:17 PDT 2016
Sun, Jul 24, 2016  2:16:49 PM
Mon, Jul 25, 2016  8:47:46 PM
