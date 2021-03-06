#ifndef ISCSI_TARGET_LOGIN_H
#define ISCSI_TARGET_LOGIN_H

extern int iscsi_login_setup_crypto(struct iscsi_conn *);
extern int iscsi_check_for_session_reinstatement(struct iscsi_conn *);
extern int iscsi_login_post_auth_non_zero_tsih(struct iscsi_conn *, u16, u32);
extern int iscsit_setup_np(struct iscsi_np *,
				struct __kernel_sockaddr_storage *);
extern int iscsi_target_setup_login_socket(struct iscsi_np *,
				struct __kernel_sockaddr_storage *);
extern int iscsit_accept_np(struct iscsi_np *, struct iscsi_conn *);
extern int iscsit_get_login_rx(struct iscsi_conn *, struct iscsi_login *);
extern int iscsit_put_login_tx(struct iscsi_conn *, struct iscsi_login *, u32);
extern void iscsit_free_conn(struct iscsi_np *, struct iscsi_conn *);
extern int iscsi_target_login_thread(void *);
extern int iscsi_login_disable_FIM_keys(struct iscsi_param_list *, struct iscsi_conn *);

#endif   /*** ISCSI_TARGET_LOGIN_H ***/
Tue Jul 19 12:42:13 PDT 2016
Fri Jul 22 15:53:37 PDT 2016
Sun, Jul 24, 2016  3:09:35 PM
Mon, Jul 25, 2016  9:46:58 PM
