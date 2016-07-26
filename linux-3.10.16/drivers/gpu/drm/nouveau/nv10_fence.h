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
Tue Jul 19 12:45:19 PDT 2016
Fri Jul 22 15:59:17 PDT 2016
Sun, Jul 24, 2016  3:53:44 PM
Mon, Jul 25, 2016 10:36:11 PM
