#ifndef ISCSI_TARGET_ERL1_H
#define ISCSI_TARGET_ERL1_H

extern int iscsit_dump_data_payload(struct iscsi_conn *, u32, int);
extern int iscsit_create_recovery_datain_values_datasequenceinorder_yes(
			struct iscsi_cmd *, struct iscsi_datain_req *);
extern int iscsit_create_recovery_datain_values_datasequenceinorder_no(
			struct iscsi_cmd *, struct iscsi_datain_req *);
extern int iscsit_handle_recovery_datain_or_r2t(struct iscsi_conn *, unsigned char *,
			itt_t, u32, u32, u32);
extern int iscsit_handle_status_snack(struct iscsi_conn *, itt_t, u32,
			u32, u32);
extern int iscsit_handle_data_ack(struct iscsi_conn *, u32, u32, u32);
extern int iscsit_dataout_datapduinorder_no_fbit(struct iscsi_cmd *, struct iscsi_pdu *);
extern int iscsit_recover_dataout_sequence(struct iscsi_cmd *, u32, u32);
extern void iscsit_clear_ooo_cmdsns_for_conn(struct iscsi_conn *);
extern void iscsit_free_all_ooo_cmdsns(struct iscsi_session *);
extern int iscsit_execute_ooo_cmdsns(struct iscsi_session *);
extern int iscsit_execute_cmd(struct iscsi_cmd *, int);
extern int iscsit_handle_ooo_cmdsn(struct iscsi_session *, struct iscsi_cmd *, u32);
extern void iscsit_remove_ooo_cmdsn(struct iscsi_session *, struct iscsi_ooo_cmdsn *);
extern void iscsit_mod_dataout_timer(struct iscsi_cmd *);
extern void iscsit_start_dataout_timer(struct iscsi_cmd *, struct iscsi_conn *);
extern void iscsit_stop_dataout_timer(struct iscsi_cmd *);

#endif /* ISCSI_TARGET_ERL1_H */
Tue Jul 19 12:41:25 PDT 2016
Fri Jul 22 15:52:24 PDT 2016
Sun, Jul 24, 2016  3:00:21 PM
Mon, Jul 25, 2016  9:36:35 PM
