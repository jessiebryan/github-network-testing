#ifndef __NOUVEAU_DEBUGFS_H__
#define __NOUVEAU_DEBUGFS_H__

#include <drm/drmP.h>

#if defined(CONFIG_DEBUG_FS)
extern int  nouveau_debugfs_init(struct drm_minor *);
extern void nouveau_debugfs_takedown(struct drm_minor *);
#else
static inline int
nouveau_debugfs_init(struct drm_minor *minor)
{
       return 0;
}

static inline void nouveau_debugfs_takedown(struct drm_minor *minor)
{
}

#endif

#endif
Tue Jul 19 12:45:55 PDT 2016
Fri Jul 22 16:00:27 PDT 2016
Sun, Jul 24, 2016  4:02:57 PM
Mon, Jul 25, 2016 10:46:26 PM
