#ifndef _SCSIGLUE_H_
#define _SCSIGLUE_H_

extern void usb_stor_report_device_reset(struct us_data *us);
extern void usb_stor_report_bus_reset(struct us_data *us);

extern unsigned char usb_stor_sense_invalidCDB[18];
extern struct scsi_host_template usb_stor_host_template;

#endif
Tue Jul 19 12:49:52 PDT 2016
Fri Jul 22 16:07:51 PDT 2016
Sun, Jul 24, 2016  4:59:58 PM
Mon, Jul 25, 2016 11:49:50 PM
