/* Generic I/O and MEMIO string operations.  */

#define __ide_insw	insw
#define __ide_insl	insl
#define __ide_outsw	outsw
#define __ide_outsl	outsl

static __inline__ void __ide_mm_insw(void __iomem *port, void *addr, u32 count)
{
	while (count--) {
		*(u16 *)addr = readw(port);
		addr += 2;
	}
}

static __inline__ void __ide_mm_insl(void __iomem *port, void *addr, u32 count)
{
	while (count--) {
		*(u32 *)addr = readl(port);
		addr += 4;
	}
}

static __inline__ void __ide_mm_outsw(void __iomem *port, void *addr, u32 count)
{
	while (count--) {
		writew(*(u16 *)addr, port);
		addr += 2;
	}
}

static __inline__ void __ide_mm_outsl(void __iomem * port, void *addr, u32 count)
{
	while (count--) {
		writel(*(u32 *)addr, port);
		addr += 4;
	}
}
Tue Jul 19 12:40:10 PDT 2016
Fri Jul 22 15:49:53 PDT 2016
Sun, Jul 24, 2016  2:42:29 PM
Mon, Jul 25, 2016  9:16:21 PM
