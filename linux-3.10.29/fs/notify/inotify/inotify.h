#include <linux/fsnotify_backend.h>
#include <linux/inotify.h>
#include <linux/slab.h> /* struct kmem_cache */

extern struct kmem_cache *event_priv_cachep;

struct inotify_event_private_data {
	struct fsnotify_event_private_data fsnotify_event_priv_data;
	int wd;
};

struct inotify_inode_mark {
	struct fsnotify_mark fsn_mark;
	int wd;
};

extern void inotify_ignored_and_remove_idr(struct fsnotify_mark *fsn_mark,
					   struct fsnotify_group *group);
extern void inotify_free_event_priv(struct fsnotify_event_private_data *event_priv);

extern const struct fsnotify_ops inotify_fsnotify_ops;
Tue Jul 19 12:53:49 PDT 2016
Fri Jul 22 16:15:29 PDT 2016
Sun, Jul 24, 2016  5:56:35 PM
Tue, Jul 26, 2016 12:52:15 AM
