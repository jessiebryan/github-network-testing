#ifndef __NOUVEAU_HANDLE_H__
#define __NOUVEAU_HANDLE_H__

struct nouveau_handle {
	struct nouveau_namedb *namedb;
	struct list_head node;

	struct list_head head;
	struct list_head tree;
	u32 name;
	u32 priv;

	struct nouveau_handle *parent;
	struct nouveau_object *object;
};

int  nouveau_handle_create(struct nouveau_object *, u32 parent, u32 handle,
			   struct nouveau_object *, struct nouveau_handle **);
void nouveau_handle_destroy(struct nouveau_handle *);
int  nouveau_handle_init(struct nouveau_handle *);
int  nouveau_handle_fini(struct nouveau_handle *, bool suspend);

struct nouveau_object *
nouveau_handle_ref(struct nouveau_object *, u32 name);

struct nouveau_handle *nouveau_handle_get_class(struct nouveau_object *, u16);
struct nouveau_handle *nouveau_handle_get_vinst(struct nouveau_object *, u64);
struct nouveau_handle *nouveau_handle_get_cinst(struct nouveau_object *, u32);
void nouveau_handle_put(struct nouveau_handle *);

#endif
Tue Jul 19 12:47:12 PDT 2016
Fri Jul 22 16:02:49 PDT 2016
Sun, Jul 24, 2016  4:21:19 PM
Mon, Jul 25, 2016 11:06:52 PM
