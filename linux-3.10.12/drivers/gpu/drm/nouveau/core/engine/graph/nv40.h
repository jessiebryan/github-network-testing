#ifndef __NV40_GRAPH_H__
#define __NV40_GRAPH_H__

/* returns 1 if device is one of the nv4x using the 0x4497 object class,
 * helpful to determine a number of other hardware features
 */
static inline int
nv44_graph_class(void *priv)
{
	struct nouveau_device *device = nv_device(priv);

	if ((device->chipset & 0xf0) == 0x60)
		return 1;

	return !(0x0baf & (1 << (device->chipset & 0x0f)));
}

int  nv40_grctx_init(struct nouveau_device *, u32 *size);
void nv40_grctx_fill(struct nouveau_device *, struct nouveau_gpuobj *);

#endif
Tue Jul 19 12:42:46 PDT 2016
Fri Jul 22 15:54:32 PDT 2016
Sun, Jul 24, 2016  3:16:46 PM
Mon, Jul 25, 2016  9:55:06 PM
