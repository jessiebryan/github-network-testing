#ifndef __NOUVEAU_CLIENT_H__
#define __NOUVEAU_CLIENT_H__

#include <core/namedb.h>

struct nouveau_client {
	struct nouveau_namedb base;
	struct nouveau_handle *root;
	struct nouveau_object *device;
	char name[32];
	u32 debug;
	struct nouveau_vm *vm;
};

static inline struct nouveau_client *
nv_client(void *obj)
{
#if CONFIG_NOUVEAU_DEBUG >= NV_DBG_PARANOIA
	if (unlikely(!nv_iclass(obj, NV_CLIENT_CLASS)))
		nv_assert("BAD CAST -> NvClient, %08x", nv_hclass(obj));
#endif
	return obj;
}

static inline struct nouveau_client *
nouveau_client(void *obj)
{
	struct nouveau_object *client = nv_object(obj);
	while (client && !(nv_iclass(client, NV_CLIENT_CLASS)))
		client = client->parent;
	return (void *)client;
}

#define nouveau_client_create(n,c,oc,od,d)                                     \
	nouveau_client_create_((n), (c), (oc), (od), sizeof(**d), (void **)d)

int  nouveau_client_create_(const char *name, u64 device, const char *cfg,
			    const char *dbg, int, void **);
#define nouveau_client_destroy(p)                                              \
	nouveau_namedb_destroy(&(p)->base)

int  nouveau_client_init(struct nouveau_client *);
int  nouveau_client_fini(struct nouveau_client *, bool suspend);
const char *nouveau_client_name(void *obj);

#endif
Tue Jul 19 12:45:19 PDT 2016
Fri Jul 22 15:59:16 PDT 2016
Sun, Jul 24, 2016  3:53:41 PM
Mon, Jul 25, 2016 10:36:07 PM
