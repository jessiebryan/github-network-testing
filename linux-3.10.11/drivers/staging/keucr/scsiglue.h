#ifndef _SCSIGLUE_H_
#define _SCSIGLUE_H_

extern void usb_stor_report_device_reset(struct us_data *us);
extern void usb_stor_report_bus_reset(struct us_data *us);

extern unsigned char usb_stor_sense_invalidCDB[18];
extern struct scsi_host_template usb_stor_host_template;

#endif
Tue Jul 19 12:42:11 PDT 2016
Fri Jul 22 15:53:34 PDT 2016
Sun, Jul 24, 2016  3:09:16 PM
Mon, Jul 25, 2016  9:46:37 PM
