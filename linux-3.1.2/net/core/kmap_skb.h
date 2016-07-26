#include <linux/highmem.h>

static inline void *kmap_skb_frag(const skb_frag_t *frag)
{
#ifdef CONFIG_HIGHMEM
	BUG_ON(in_irq());

	local_bh_disable();
#endif
	return kmap_atomic(frag->page, KM_SKB_DATA_SOFTIRQ);
}

static inline void kunmap_skb_frag(void *vaddr)
{
	kunmap_atomic(vaddr, KM_SKB_DATA_SOFTIRQ);
#ifdef CONFIG_HIGHMEM
	local_bh_enable();
#endif
}
Tue Jul 19 12:34:38 PDT 2016
Fri Jul 22 15:39:35 PDT 2016
Sun, Jul 24, 2016  1:27:33 PM
Mon, Jul 25, 2016  6:37:15 PM
Mon, Jul 25, 2016  7:50:09 PM
Tue, Jul 26, 2016  2:25:26 PM
