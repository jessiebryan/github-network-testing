#ifndef ISCSI_TARGET_ERL0_H
#define ISCSI_TARGET_ERL0_H

extern void iscsit_set_dataout_sequence_values(struct iscsi_cmd *);
extern int iscsit_check_pre_dataout(struct iscsi_cmd *, unsigned char *);
extern int iscsit_check_post_dataout(struct iscsi_cmd *, unsigned char *, u8);
extern void iscsit_start_time2retain_handler(struct iscsi_session *);
extern int iscsit_stop_time2retain_timer(struct iscsi_session *);
extern void iscsit_connection_reinstatement_rcfr(struct iscsi_conn *);
extern void iscsit_cause_connection_reinstatement(struct iscsi_conn *, int);
extern void iscsit_fall_back_to_erl0(struct iscsi_session *);
extern void iscsit_take_action_for_connection_exit(struct iscsi_conn *);
extern int iscsit_recover_from_unknown_opcode(struct iscsi_conn *);

#endif   /*** ISCSI_TARGET_ERL0_H ***/
Tue Jul 19 12:44:50 PDT 2016
Fri Jul 22 15:58:21 PDT 2016
Sun, Jul 24, 2016  3:46:28 PM
Mon, Jul 25, 2016 10:28:04 PM
