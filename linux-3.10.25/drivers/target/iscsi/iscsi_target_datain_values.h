#ifndef ISCSI_TARGET_DATAIN_VALUES_H
#define ISCSI_TARGET_DATAIN_VALUES_H

extern struct iscsi_datain_req *iscsit_allocate_datain_req(void);
extern void iscsit_attach_datain_req(struct iscsi_cmd *, struct iscsi_datain_req *);
extern void iscsit_free_datain_req(struct iscsi_cmd *, struct iscsi_datain_req *);
extern void iscsit_free_all_datain_reqs(struct iscsi_cmd *);
extern struct iscsi_datain_req *iscsit_get_datain_req(struct iscsi_cmd *);
extern struct iscsi_datain_req *iscsit_get_datain_values(struct iscsi_cmd *,
			struct iscsi_datain *);

#endif   /*** ISCSI_TARGET_DATAIN_VALUES_H ***/
Tue Jul 19 12:51:12 PDT 2016
Fri Jul 22 16:10:23 PDT 2016
Sun, Jul 24, 2016  5:18:57 PM
Tue, Jul 26, 2016 12:10:44 AM
