#ifndef __NOUVEAU_TTM_H__
#define __NOUVEAU_TTM_H__

static inline struct nouveau_drm *
nouveau_bdev(struct ttm_bo_device *bd)
{
	return container_of(bd, struct nouveau_drm, ttm.bdev);
}

extern const struct ttm_mem_type_manager_func nouveau_vram_manager;
extern const struct ttm_mem_type_manager_func nouveau_gart_manager;
extern const struct ttm_mem_type_manager_func nv04_gart_manager;

struct ttm_tt *nouveau_sgdma_create_ttm(struct ttm_bo_device *,
					unsigned long size, u32 page_flags,
					struct page *dummy_read_page);

int  nouveau_ttm_init(struct nouveau_drm *drm);
void nouveau_ttm_fini(struct nouveau_drm *drm);
int  nouveau_ttm_mmap(struct file *, struct vm_area_struct *);

int  nouveau_ttm_global_init(struct nouveau_drm *);
void nouveau_ttm_global_release(struct nouveau_drm *);

#endif
Tue Jul 19 12:38:43 PDT 2016
Fri Jul 22 15:46:58 PDT 2016
Sun, Jul 24, 2016  2:21:35 PM
Mon, Jul 25, 2016  8:53:06 PM
