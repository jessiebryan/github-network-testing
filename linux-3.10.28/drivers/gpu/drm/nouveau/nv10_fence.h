#ifndef __NV10_FENCE_H_
#define __NV10_FENCE_H_

#include <core/os.h>
#include "nouveau_fence.h"
#include "nouveau_bo.h"

struct nv10_fence_chan {
	struct nouveau_fence_chan base;
};

struct nv10_fence_priv {
	struct nouveau_fence_priv base;
	struct nouveau_bo *bo;
	spinlock_t lock;
	u32 sequence;
};

#endif
Tue Jul 19 12:53:00 PDT 2016
Fri Jul 22 16:13:56 PDT 2016
Sun, Jul 24, 2016  5:44:55 PM
Tue, Jul 26, 2016 12:39:22 AM
