#ifndef __NV04_VMMGR_PRIV__
#define __NV04_VMMGR_PRIV__

#include <subdev/vm.h>

struct nv04_vmmgr_priv {
	struct nouveau_vmmgr base;
	struct nouveau_vm *vm;
	dma_addr_t null;
	void *nullp;
};

static inline struct nv04_vmmgr_priv *
nv04_vmmgr(void *obj)
{
	return (void *)nouveau_vmmgr(obj);
}

#endif
Tue Jul 19 12:49:07 PDT 2016
Fri Jul 22 16:06:26 PDT 2016
Sun, Jul 24, 2016  4:49:05 PM
Mon, Jul 25, 2016 11:37:43 PM
