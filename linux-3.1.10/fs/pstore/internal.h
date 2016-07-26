extern void	pstore_set_kmsg_bytes(int);
extern void	pstore_get_records(void);
extern int	pstore_mkfile(enum pstore_type_id, char *psname, u64 id,
			      char *data, size_t size,
			      struct timespec time, struct pstore_info *psi);
extern int	pstore_is_mounted(void);
Tue Jul 19 12:33:37 PDT 2016
Fri Jul 22 15:38:17 PDT 2016
Sun, Jul 24, 2016  1:17:38 PM
Mon, Jul 25, 2016  6:25:21 PM
Mon, Jul 25, 2016  7:38:31 PM
Tue, Jul 26, 2016  2:14:24 PM
