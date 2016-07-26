#ifndef ISCSI_TARGET_LOGIN_H
#define ISCSI_TARGET_LOGIN_H

extern int iscsi_login_setup_crypto(struct iscsi_conn *);
extern int iscsi_check_for_session_reinstatement(struct iscsi_conn *);
extern int iscsi_login_post_auth_non_zero_tsih(struct iscsi_conn *, u16, u32);
extern int iscsi_target_setup_login_socket(struct iscsi_np *,
				struct __kernel_sockaddr_storage *);
extern int iscsi_target_login_thread(void *);
extern int iscsi_login_disable_FIM_keys(struct iscsi_param_list *, struct iscsi_conn *);

#endif   /*** ISCSI_TARGET_LOGIN_H ***/
Tue Jul 19 12:35:53 PDT 2016
Fri Jul 22 15:41:35 PDT 2016
Sun, Jul 24, 2016  1:41:59 PM
Mon, Jul 25, 2016  8:07:11 PM
Tue, Jul 26, 2016  2:41:24 PM
