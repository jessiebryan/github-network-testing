#define TARGET_CORE_CONFIGFS_VERSION TARGET_CORE_MOD_VERSION

#define TARGET_CORE_CONFIG_ROOT	"/sys/kernel/config"

#define TARGET_CORE_NAME_MAX_LEN	64
#define TARGET_FABRIC_NAME_SIZE		32

extern struct target_fabric_configfs *target_fabric_configfs_init(
				struct module *, const char *);
extern void target_fabric_configfs_free(struct target_fabric_configfs *);
extern int target_fabric_configfs_register(struct target_fabric_configfs *);
extern void target_fabric_configfs_deregister(struct target_fabric_configfs *);

struct target_fabric_configfs_template {
	struct config_item_type tfc_discovery_cit;
	struct config_item_type	tfc_wwn_cit;
	struct config_item_type tfc_wwn_fabric_stats_cit;
	struct config_item_type tfc_tpg_cit;
	struct config_item_type tfc_tpg_base_cit;
	struct config_item_type tfc_tpg_lun_cit;
	struct config_item_type tfc_tpg_port_cit;
	struct config_item_type tfc_tpg_port_stat_cit;
	struct config_item_type tfc_tpg_np_cit;
	struct config_item_type tfc_tpg_np_base_cit;
	struct config_item_type tfc_tpg_attrib_cit;
	struct config_item_type tfc_tpg_param_cit;
	struct config_item_type tfc_tpg_nacl_cit;
	struct config_item_type tfc_tpg_nacl_base_cit;
	struct config_item_type tfc_tpg_nacl_attrib_cit;
	struct config_item_type tfc_tpg_nacl_auth_cit;
	struct config_item_type tfc_tpg_nacl_param_cit;
	struct config_item_type tfc_tpg_nacl_stat_cit;
	struct config_item_type tfc_tpg_mappedlun_cit;
	struct config_item_type tfc_tpg_mappedlun_stat_cit;
};

struct target_fabric_configfs {
	char			tf_name[TARGET_FABRIC_NAME_SIZE];
	atomic_t		tf_access_cnt;
	struct list_head	tf_list;
	struct config_group	tf_group;
	struct config_group	tf_disc_group;
	struct config_group	*tf_default_groups[2];
	/* Pointer to fabric's config_item */
	struct config_item	*tf_fabric;
	/* Passed from fabric modules */
	struct config_item_type	*tf_fabric_cit;
	/* Pointer to target core subsystem */
	struct configfs_subsystem *tf_subsys;
	/* Pointer to fabric's struct module */
	struct module *tf_module;
	struct target_core_fabric_ops tf_ops;
	struct target_fabric_configfs_template tf_cit_tmpl;
};

#define TF_CIT_TMPL(tf) (&(tf)->tf_cit_tmpl)
Tue Jul 19 12:36:34 PDT 2016
Fri Jul 22 15:42:58 PDT 2016
Sun, Jul 24, 2016  1:52:09 PM
Mon, Jul 25, 2016  8:19:10 PM
