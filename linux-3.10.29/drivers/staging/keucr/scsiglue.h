#ifndef _SCSIGLUE_H_
#define _SCSIGLUE_H_

extern void usb_stor_report_device_reset(struct us_data *us);
extern void usb_stor_report_bus_reset(struct us_data *us);

extern unsigned char usb_stor_sense_invalidCDB[18];
extern struct scsi_host_template usb_stor_host_template;

#endif
Tue Jul 19 12:53:46 PDT 2016
Fri Jul 22 16:15:24 PDT 2016
Sun, Jul 24, 2016  5:55:53 PM
Tue, Jul 26, 2016 12:51:29 AM
