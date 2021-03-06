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
Tue Jul 19 12:44:42 PDT 2016
Fri Jul 22 15:58:05 PDT 2016
Sun, Jul 24, 2016  3:44:30 PM
Mon, Jul 25, 2016 10:25:54 PM
