#include <scsi/scsi_tgt.h>

#ifdef CONFIG_SCSI_FC_TGT_ATTRS
static inline int fc_tgt_it_nexus_create(struct Scsi_Host *shost, u64 itn_id,
					 char *initiator)
{
	return scsi_tgt_it_nexus_create(shost, itn_id, initiator);
}

static inline int fc_tgt_it_nexus_destroy(struct Scsi_Host *shost, u64 itn_id)
{
	return scsi_tgt_it_nexus_destroy(shost, itn_id);
}
#else
static inline int fc_tgt_it_nexus_create(struct Scsi_Host *shost, u64 itn_id,
					 char *initiator)
{
	return 0;
}

static inline int fc_tgt_it_nexus_destroy(struct Scsi_Host *shost, u64 itn_id)
{
	return 0;
}

#endif
Tue Jul 19 12:38:13 PDT 2016
Fri Jul 22 15:45:57 PDT 2016
Sun, Jul 24, 2016  2:14:24 PM
Mon, Jul 25, 2016  8:45:07 PM
