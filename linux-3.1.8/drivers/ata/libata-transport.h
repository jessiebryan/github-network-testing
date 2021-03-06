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
Tue Jul 19 12:37:28 PDT 2016
Fri Jul 22 15:44:40 PDT 2016
Sun, Jul 24, 2016  2:04:52 PM
Mon, Jul 25, 2016  8:34:17 PM
