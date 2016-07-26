#ifndef ISCSI_TARGET_TMR_H
#define ISCSI_TARGET_TMR_H

extern u8 iscsit_tmr_abort_task(struct iscsi_cmd *, unsigned char *);
extern int iscsit_tmr_task_warm_reset(struct iscsi_conn *, struct iscsi_tmr_req *,
			unsigned char *);
extern int iscsit_tmr_task_cold_reset(struct iscsi_conn *, struct iscsi_tmr_req *,
			unsigned char *);
extern u8 iscsit_tmr_task_reassign(struct iscsi_cmd *, unsigned char *);
extern int iscsit_tmr_post_handler(struct iscsi_cmd *, struct iscsi_conn *);
extern int iscsit_check_task_reassign_expdatasn(struct iscsi_tmr_req *,
			struct iscsi_conn *);

#endif /* ISCSI_TARGET_TMR_H */
Tue Jul 19 12:34:18 PDT 2016
Fri Jul 22 15:39:19 PDT 2016
Sun, Jul 24, 2016  1:25:30 PM
Mon, Jul 25, 2016  6:34:47 PM
Mon, Jul 25, 2016  7:47:45 PM
Tue, Jul 26, 2016  2:23:10 PM
