#ifdef CONFIG_ATAGS_PROC
extern void save_atags(struct tag *tags);
#else
static inline void save_atags(struct tag *tags) { }
#endif

void convert_to_tag_list(struct tag *tags);

#ifdef CONFIG_ATAGS
struct machine_desc *setup_machine_tags(phys_addr_t __atags_pointer, unsigned int machine_nr);
#else
static inline struct machine_desc *
setup_machine_tags(phys_addr_t __atags_pointer, unsigned int machine_nr)
{
	early_print("no ATAGS support: can't continue\n");
	while (true);
	unreachable();
}
#endif
Tue Jul 19 12:39:05 PDT 2016
Fri Jul 22 15:47:41 PDT 2016
