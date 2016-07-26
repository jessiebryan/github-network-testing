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
Tue Jul 19 12:34:04 PDT 2016
Fri Jul 22 15:39:04 PDT 2016
Sun, Jul 24, 2016  1:23:38 PM
Mon, Jul 25, 2016  6:32:34 PM
Mon, Jul 25, 2016  7:45:34 PM
Tue, Jul 26, 2016  2:21:08 PM
