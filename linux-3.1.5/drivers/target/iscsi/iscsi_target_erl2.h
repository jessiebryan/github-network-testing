#ifndef ISCSI_TARGET_ERL2_H
#define ISCSI_TARGET_ERL2_H

extern void iscsit_create_conn_recovery_datain_values(struct iscsi_cmd *, u32);
extern void iscsit_create_conn_recovery_dataout_values(struct iscsi_cmd *);
extern struct iscsi_conn_recovery *iscsit_get_inactive_connection_recovery_entry(
			struct iscsi_session *, u16);
extern void iscsit_free_connection_recovery_entires(struct iscsi_session *);
extern int iscsit_remove_active_connection_recovery_entry(
			struct iscsi_conn_recovery *, struct iscsi_session *);
extern int iscsit_remove_cmd_from_connection_recovery(struct iscsi_cmd *,
			struct iscsi_session *);
extern void iscsit_discard_cr_cmds_by_expstatsn(struct iscsi_conn_recovery *, u32);
extern int iscsit_discard_unacknowledged_ooo_cmdsns_for_conn(struct iscsi_conn *);
extern int iscsit_prepare_cmds_for_realligance(struct iscsi_conn *);
extern int iscsit_connection_recovery_transport_reset(struct iscsi_conn *);

#endif /*** ISCSI_TARGET_ERL2_H ***/
Tue Jul 19 12:36:27 PDT 2016
Fri Jul 22 15:42:41 PDT 2016
Sun, Jul 24, 2016  1:50:14 PM
Mon, Jul 25, 2016  8:16:54 PM
