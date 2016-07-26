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
Tue Jul 19 12:41:17 PDT 2016
Fri Jul 22 15:52:07 PDT 2016
Sun, Jul 24, 2016  2:58:24 PM
Mon, Jul 25, 2016  9:34:23 PM
