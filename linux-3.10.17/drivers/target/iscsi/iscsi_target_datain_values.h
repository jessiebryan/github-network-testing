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
Tue Jul 19 12:46:03 PDT 2016
Fri Jul 22 16:00:41 PDT 2016
Sun, Jul 24, 2016  4:04:54 PM
Mon, Jul 25, 2016 10:48:35 PM
