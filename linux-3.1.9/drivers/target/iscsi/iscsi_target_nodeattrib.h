#ifndef ISCSI_TARGET_NODEATTRIB_H
#define ISCSI_TARGET_NODEATTRIB_H

extern void iscsit_set_default_node_attribues(struct iscsi_node_acl *);
extern int iscsit_na_dataout_timeout(struct iscsi_node_acl *, u32);
extern int iscsit_na_dataout_timeout_retries(struct iscsi_node_acl *, u32);
extern int iscsit_na_nopin_timeout(struct iscsi_node_acl *, u32);
extern int iscsit_na_nopin_response_timeout(struct iscsi_node_acl *, u32);
extern int iscsit_na_random_datain_pdu_offsets(struct iscsi_node_acl *, u32);
extern int iscsit_na_random_datain_seq_offsets(struct iscsi_node_acl *, u32);
extern int iscsit_na_random_r2t_offsets(struct iscsi_node_acl *, u32);
extern int iscsit_na_default_erl(struct iscsi_node_acl *, u32);

#endif /* ISCSI_TARGET_NODEATTRIB_H */
Tue Jul 19 12:38:15 PDT 2016
Fri Jul 22 15:46:02 PDT 2016
Sun, Jul 24, 2016  2:14:58 PM
Mon, Jul 25, 2016  8:45:44 PM
