#ifndef _LIBATA_TRANSPORT_H
#define _LIBATA_TRANSPORT_H


extern struct scsi_transport_template *ata_scsi_transport_template;

int ata_tlink_add(struct ata_link *link);
void ata_tlink_delete(struct ata_link *link);

int ata_tport_add(struct device *parent, struct ata_port *ap);
void ata_tport_delete(struct ata_port *ap);

struct scsi_transport_template *ata_attach_transport(void);
void ata_release_transport(struct scsi_transport_template *t);

__init int libata_transport_init(void);
void __exit libata_transport_exit(void);
#endif
Tue Jul 19 12:47:11 PDT 2016
Fri Jul 22 16:02:48 PDT 2016
Sun, Jul 24, 2016  4:21:10 PM
Mon, Jul 25, 2016 11:06:42 PM
