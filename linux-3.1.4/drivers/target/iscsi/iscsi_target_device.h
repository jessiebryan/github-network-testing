#ifndef ISCSI_TARGET_DEVICE_H
#define ISCSI_TARGET_DEVICE_H

extern int iscsit_get_lun_for_tmr(struct iscsi_cmd *, u64);
extern int iscsit_get_lun_for_cmd(struct iscsi_cmd *, unsigned char *, u64);
extern void iscsit_determine_maxcmdsn(struct iscsi_session *);
extern void iscsit_increment_maxcmdsn(struct iscsi_cmd *, struct iscsi_session *);

#endif /* ISCSI_TARGET_DEVICE_H */
Tue Jul 19 12:35:53 PDT 2016
Fri Jul 22 15:41:35 PDT 2016
Sun, Jul 24, 2016  1:41:59 PM
Mon, Jul 25, 2016  8:07:11 PM
