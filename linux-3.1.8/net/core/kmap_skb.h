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
Tue Jul 19 12:37:48 PDT 2016
Fri Jul 22 15:45:12 PDT 2016
Sun, Jul 24, 2016  2:08:47 PM
Mon, Jul 25, 2016  8:38:53 PM
