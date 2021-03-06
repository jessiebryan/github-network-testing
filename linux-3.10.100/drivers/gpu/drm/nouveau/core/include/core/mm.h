#ifndef __NOUVEAU_MM_H__
#define __NOUVEAU_MM_H__

struct nouveau_mm_node {
	struct list_head nl_entry;
	struct list_head fl_entry;
	struct list_head rl_entry;

	u8  type;
	u32 offset;
	u32 length;
};

struct nouveau_mm {
	struct list_head nodes;
	struct list_head free;

	struct mutex mutex;

	u32 block_size;
	int heap_nodes;
};

static inline bool
nouveau_mm_initialised(struct nouveau_mm *mm)
{
	return mm->block_size != 0;
}

int  nouveau_mm_init(struct nouveau_mm *, u32 offset, u32 length, u32 block);
int  nouveau_mm_fini(struct nouveau_mm *);
int  nouveau_mm_head(struct nouveau_mm *, u8 type, u32 size_max, u32 size_min,
		     u32 align, struct nouveau_mm_node **);
int  nouveau_mm_tail(struct nouveau_mm *, u8 type, u32 size_max, u32 size_min,
		     u32 align, struct nouveau_mm_node **);
void nouveau_mm_free(struct nouveau_mm *, struct nouveau_mm_node **);

#endif
Tue Jul 19 12:39:59 PDT 2016
Fri Jul 22 15:49:32 PDT 2016
Sun, Jul 24, 2016  2:39:56 PM
Mon, Jul 25, 2016  9:13:32 PM
