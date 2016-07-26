#ifndef TARGET_CORE_FABRIC_LIB_H
#define TARGET_CORE_FABRIC_LIB_H

extern u8 sas_get_fabric_proto_ident(struct se_portal_group *);
extern u32 sas_get_pr_transport_id(struct se_portal_group *, struct se_node_acl *,
			struct t10_pr_registration *, int *, unsigned char *);
extern u32 sas_get_pr_transport_id_len(struct se_portal_group *, struct se_node_acl *,
			struct t10_pr_registration *, int *);
extern char *sas_parse_pr_out_transport_id(struct se_portal_group *,
			const char *, u32 *, char **);

extern u8 fc_get_fabric_proto_ident(struct se_portal_group *);
extern u32 fc_get_pr_transport_id(struct se_portal_group *, struct se_node_acl *,
			struct t10_pr_registration *, int *, unsigned char *);
extern u32 fc_get_pr_transport_id_len(struct se_portal_group *, struct se_node_acl *,
			struct t10_pr_registration *, int *);
extern char *fc_parse_pr_out_transport_id(struct se_portal_group *,
			const char *, u32 *, char **);

extern u8 iscsi_get_fabric_proto_ident(struct se_portal_group *);
extern u32 iscsi_get_pr_transport_id(struct se_portal_group *, struct se_node_acl *,
			struct t10_pr_registration *, int *, unsigned char *);
extern u32 iscsi_get_pr_transport_id_len(struct se_portal_group *, struct se_node_acl *,
			struct t10_pr_registration *, int *);
extern char *iscsi_parse_pr_out_transport_id(struct se_portal_group *,
			const char *, u32 *, char **);

#endif /* TARGET_CORE_FABRIC_LIB_H */
Tue Jul 19 12:34:37 PDT 2016
Fri Jul 22 15:39:34 PDT 2016
Sun, Jul 24, 2016  1:27:25 PM
Mon, Jul 25, 2016  6:37:05 PM
Mon, Jul 25, 2016  7:50:00 PM
Tue, Jul 26, 2016  2:25:17 PM
