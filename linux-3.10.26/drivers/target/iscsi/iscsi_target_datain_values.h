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
Tue Jul 19 12:51:51 PDT 2016
Fri Jul 22 16:11:40 PDT 2016
Sun, Jul 24, 2016  5:28:15 PM
Tue, Jul 26, 2016 12:20:58 AM
