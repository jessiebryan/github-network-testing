#include <scsi/scsi_tgt.h>

#ifdef CONFIG_SCSI_SRP_TGT_ATTRS
static inline int srp_tgt_it_nexus_create(struct Scsi_Host *shost, u64 itn_id,
					  char *initiator)
{
	return scsi_tgt_it_nexus_create(shost, itn_id, initiator);
}

static inline int srp_tgt_it_nexus_destroy(struct Scsi_Host *shost, u64 itn_id)
{
	return scsi_tgt_it_nexus_destroy(shost, itn_id);
}

#else
static inline int srp_tgt_it_nexus_create(struct Scsi_Host *shost, u64 itn_id,
					  char *initiator)
{
	return 0;
}
static inline int srp_tgt_it_nexus_destroy(struct Scsi_Host *shost, u64 itn_id)
{
	return 0;
}
#endif
Tue Jul 19 12:48:34 PDT 2016
Fri Jul 22 16:05:25 PDT 2016
Sun, Jul 24, 2016  4:41:21 PM
Mon, Jul 25, 2016 11:29:04 PM
