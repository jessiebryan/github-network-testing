#ifndef _XEN_DEBUGFS_H
#define _XEN_DEBUGFS_H

struct dentry * __init xen_init_debugfs(void);

struct dentry *xen_debugfs_create_u32_array(const char *name, mode_t mode,
					    struct dentry *parent,
					    u32 *array, unsigned elements);

#endif /* _XEN_DEBUGFS_H */
Tue Jul 19 12:35:45 PDT 2016
Fri Jul 22 15:41:19 PDT 2016
Sun, Jul 24, 2016  1:40:02 PM
Mon, Jul 25, 2016  8:04:53 PM
