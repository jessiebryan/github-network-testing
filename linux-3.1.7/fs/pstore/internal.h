extern void	pstore_set_kmsg_bytes(int);
extern void	pstore_get_records(void);
extern int	pstore_mkfile(enum pstore_type_id, char *psname, u64 id,
			      char *data, size_t size,
			      struct timespec time, struct pstore_info *psi);
extern int	pstore_is_mounted(void);
Tue Jul 19 12:37:02 PDT 2016
Fri Jul 22 15:43:51 PDT 2016
Sun, Jul 24, 2016  1:58:53 PM
