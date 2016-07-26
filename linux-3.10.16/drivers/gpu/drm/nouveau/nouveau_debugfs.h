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
Tue Jul 19 12:45:19 PDT 2016
Fri Jul 22 15:59:17 PDT 2016
Sun, Jul 24, 2016  3:53:44 PM
Mon, Jul 25, 2016 10:36:10 PM
