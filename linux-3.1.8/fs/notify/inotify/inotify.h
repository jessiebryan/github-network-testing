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
Tue Jul 19 12:37:39 PDT 2016
Fri Jul 22 15:44:59 PDT 2016
Sun, Jul 24, 2016  2:07:04 PM
Mon, Jul 25, 2016  8:36:56 PM
