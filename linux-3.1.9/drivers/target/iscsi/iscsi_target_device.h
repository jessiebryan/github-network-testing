#ifndef ISCSI_TARGET_DEVICE_H
#define ISCSI_TARGET_DEVICE_H

extern int iscsit_get_lun_for_tmr(struct iscsi_cmd *, u64);
extern int iscsit_get_lun_for_cmd(struct iscsi_cmd *, unsigned char *, u64);
extern void iscsit_determine_maxcmdsn(struct iscsi_session *);
extern void iscsit_increment_maxcmdsn(struct iscsi_cmd *, struct iscsi_session *);

#endif /* ISCSI_TARGET_DEVICE_H */
Tue Jul 19 12:38:15 PDT 2016
Fri Jul 22 15:46:02 PDT 2016
Sun, Jul 24, 2016  2:14:58 PM
Mon, Jul 25, 2016  8:45:44 PM
