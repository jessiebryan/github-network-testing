#ifndef _SCSIGLUE_H_
#define _SCSIGLUE_H_

extern void usb_stor_report_device_reset(struct us_data *us);
extern void usb_stor_report_bus_reset(struct us_data *us);

extern unsigned char usb_stor_sense_invalidCDB[18];
extern struct scsi_host_template usb_stor_host_template;

#endif
Tue Jul 19 12:49:14 PDT 2016
Fri Jul 22 16:06:39 PDT 2016
Sun, Jul 24, 2016  4:50:43 PM
Mon, Jul 25, 2016 11:39:33 PM
