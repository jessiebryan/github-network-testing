#ifndef _SCSIGLUE_H_
#define _SCSIGLUE_H_

extern void usb_stor_report_device_reset(struct us_data *us);
extern void usb_stor_report_bus_reset(struct us_data *us);

extern unsigned char usb_stor_sense_invalidCDB[18];
extern struct scsi_host_template usb_stor_host_template;

#endif
Tue Jul 19 12:33:34 PDT 2016
Fri Jul 22 15:38:11 PDT 2016
Sun, Jul 24, 2016  1:16:55 PM
Mon, Jul 25, 2016  6:24:29 PM
Mon, Jul 25, 2016  7:37:40 PM
Tue, Jul 26, 2016  2:13:35 PM
