#ifndef __LINUX_SLOB_DEF_H
#define __LINUX_SLOB_DEF_H

void *kmem_cache_alloc_node(struct kmem_cache *, gfp_t flags, int node);

static __always_inline void *kmem_cache_alloc(struct kmem_cache *cachep,
					      gfp_t flags)
{
	return kmem_cache_alloc_node(cachep, flags, -1);
}

void *__kmalloc_node(size_t size, gfp_t flags, int node);

static __always_inline void *kmalloc_node(size_t size, gfp_t flags, int node)
{
	return __kmalloc_node(size, flags, node);
}

/**
 * kmalloc - allocate memory
 * @size: how many bytes of memory are required.
 * @flags: the type of memory to allocate (see kcalloc).
 *
 * kmalloc is the normal method of allocating memory
 * in the kernel.
 */
static __always_inline void *kmalloc(size_t size, gfp_t flags)
{
	return __kmalloc_node(size, flags, -1);
}

static __always_inline void *__kmalloc(size_t size, gfp_t flags)
{
	return kmalloc(size, flags);
}

#endif /* __LINUX_SLOB_DEF_H */
Tue Jul 19 12:33:41 PDT 2016
Fri Jul 22 15:38:25 PDT 2016
Sun, Jul 24, 2016  1:18:38 PM
Mon, Jul 25, 2016  6:26:33 PM
Mon, Jul 25, 2016  7:39:42 PM
Tue, Jul 26, 2016  2:15:32 PM
