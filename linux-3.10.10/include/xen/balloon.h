/******************************************************************************
 * Xen balloon functionality
 */

#define RETRY_UNLIMITED	0

struct balloon_stats {
	/* We aim for 'current allocation' == 'target allocation'. */
	unsigned long current_pages;
	unsigned long target_pages;
	/* Number of pages in high- and low-memory balloons. */
	unsigned long balloon_low;
	unsigned long balloon_high;
	unsigned long schedule_delay;
	unsigned long max_schedule_delay;
	unsigned long retry_count;
	unsigned long max_retry_count;
#ifdef CONFIG_XEN_BALLOON_MEMORY_HOTPLUG
	unsigned long hotplug_pages;
	unsigned long balloon_hotplug;
#endif
};

extern struct balloon_stats balloon_stats;

void balloon_set_new_target(unsigned long target);

int alloc_xenballooned_pages(int nr_pages, struct page **pages,
		bool highmem);
void free_xenballooned_pages(int nr_pages, struct page **pages);

struct device;
#ifdef CONFIG_XEN_SELFBALLOONING
extern int register_xen_selfballooning(struct device *dev);
#else
static inline int register_xen_selfballooning(struct device *dev)
{
	return -ENOSYS;
}
#endif
Tue Jul 19 12:39:39 PDT 2016
Fri Jul 22 15:48:53 PDT 2016
Sun, Jul 24, 2016  2:35:14 PM
Mon, Jul 25, 2016  9:08:19 PM
