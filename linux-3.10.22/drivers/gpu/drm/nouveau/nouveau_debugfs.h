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
Tue Jul 19 12:49:07 PDT 2016
Fri Jul 22 16:06:26 PDT 2016
Sun, Jul 24, 2016  4:49:06 PM
Mon, Jul 25, 2016 11:37:44 PM
