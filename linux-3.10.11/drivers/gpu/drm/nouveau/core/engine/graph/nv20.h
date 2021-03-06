#ifndef __NV20_GRAPH_H__
#define __NV20_GRAPH_H__

#include <core/enum.h>

#include <engine/graph.h>
#include <engine/fifo.h>

struct nv20_graph_priv {
	struct nouveau_graph base;
	struct nouveau_gpuobj *ctxtab;
};

struct nv20_graph_chan {
	struct nouveau_graph_chan base;
	int chid;
};

extern struct nouveau_oclass nv25_graph_sclass[];
int  nv20_graph_context_init(struct nouveau_object *);
int  nv20_graph_context_fini(struct nouveau_object *, bool);

void nv20_graph_tile_prog(struct nouveau_engine *, int);
void nv20_graph_intr(struct nouveau_subdev *);

void nv20_graph_dtor(struct nouveau_object *);
int  nv20_graph_init(struct nouveau_object *);

int  nv30_graph_init(struct nouveau_object *);

#endif
Tue Jul 19 12:42:02 PDT 2016
Fri Jul 22 15:53:20 PDT 2016
Sun, Jul 24, 2016  3:07:34 PM
Mon, Jul 25, 2016  9:44:43 PM
