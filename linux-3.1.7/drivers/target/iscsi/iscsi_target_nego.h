#ifndef ISCSI_TARGET_NEGO_H
#define ISCSI_TARGET_NEGO_H

#define DECIMAL         0
#define HEX             1

extern void convert_null_to_semi(char *, int);
extern int extract_param(const char *, const char *, unsigned int, char *,
		unsigned char *);
extern struct iscsi_login *iscsi_target_init_negotiation(
		struct iscsi_np *, struct iscsi_conn *, char *);
extern int iscsi_target_start_negotiation(
		struct iscsi_login *, struct iscsi_conn *);
extern void iscsi_target_nego_release(
		struct iscsi_login *, struct iscsi_conn *);

#endif /* ISCSI_TARGET_NEGO_H */
Tue Jul 19 12:37:00 PDT 2016
Fri Jul 22 15:43:48 PDT 2016
Sun, Jul 24, 2016  1:58:29 PM
Mon, Jul 25, 2016  8:26:40 PM
