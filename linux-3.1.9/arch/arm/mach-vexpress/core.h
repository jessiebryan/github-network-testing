#define __MMIO_P2V(x)	(((x) & 0xfffff) | (((x) & 0x0f000000) >> 4) | 0xf8000000)
#define MMIO_P2V(x)	((void __iomem *)__MMIO_P2V(x))

#define AMBA_DEVICE(name,busid,base,plat)	\
struct amba_device name##_device = {		\
	.dev		= {			\
		.coherent_dma_mask = ~0UL,	\
		.init_name = busid,		\
		.platform_data = plat,		\
	},					\
	.res		= {			\
		.start	= base,			\
		.end	= base + SZ_4K - 1,	\
		.flags	= IORESOURCE_MEM,	\
	},					\
	.dma_mask	= ~0UL,			\
	.irq		= IRQ_##base,		\
	/* .dma		= DMA_##base,*/		\
}
Tue Jul 19 12:37:54 PDT 2016
Fri Jul 22 15:45:23 PDT 2016
Sun, Jul 24, 2016  2:10:04 PM
Mon, Jul 25, 2016  8:40:19 PM
