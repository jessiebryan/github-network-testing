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
Tue Jul 19 12:38:43 PDT 2016
Fri Jul 22 15:46:58 PDT 2016
Sun, Jul 24, 2016  2:21:35 PM
Mon, Jul 25, 2016  8:53:06 PM
