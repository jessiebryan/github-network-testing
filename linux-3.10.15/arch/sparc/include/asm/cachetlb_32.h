#ifndef _SPARC_CACHETLB_H
#define _SPARC_CACHETLB_H

struct mm_struct;
struct vm_area_struct;

struct sparc32_cachetlb_ops {
	void (*cache_all)(void);
	void (*cache_mm)(struct mm_struct *);
	void (*cache_range)(struct vm_area_struct *, unsigned long,
			    unsigned long);
	void (*cache_page)(struct vm_area_struct *, unsigned long);

	void (*tlb_all)(void);
	void (*tlb_mm)(struct mm_struct *);
	void (*tlb_range)(struct vm_area_struct *, unsigned long,
			  unsigned long);
	void (*tlb_page)(struct vm_area_struct *, unsigned long);

	void (*page_to_ram)(unsigned long);
	void (*sig_insns)(struct mm_struct *, unsigned long);
	void (*page_for_dma)(unsigned long);
};
extern const struct sparc32_cachetlb_ops *sparc32_cachetlb_ops;
#ifdef CONFIG_SMP
extern const struct sparc32_cachetlb_ops *local_ops;
#endif

#endif /* SPARC_CACHETLB_H */
Tue Jul 19 12:44:37 PDT 2016
Fri Jul 22 15:57:58 PDT 2016
Sun, Jul 24, 2016  3:43:34 PM
Mon, Jul 25, 2016 10:24:52 PM
