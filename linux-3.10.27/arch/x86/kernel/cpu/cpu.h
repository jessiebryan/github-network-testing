#ifndef ARCH_X86_CPU_H
#define ARCH_X86_CPU_H

struct cpu_model_info {
	int		vendor;
	int		family;
	const char	*model_names[16];
};

/* attempt to consolidate cpu attributes */
struct cpu_dev {
	const char	*c_vendor;

	/* some have two possibilities for cpuid string */
	const char	*c_ident[2];

	struct		cpu_model_info c_models[4];

	void            (*c_early_init)(struct cpuinfo_x86 *);
	void		(*c_bsp_init)(struct cpuinfo_x86 *);
	void		(*c_init)(struct cpuinfo_x86 *);
	void		(*c_identify)(struct cpuinfo_x86 *);
	void		(*c_detect_tlb)(struct cpuinfo_x86 *);
	unsigned int	(*c_size_cache)(struct cpuinfo_x86 *, unsigned int);
	int		c_x86_vendor;
};

struct _tlb_table {
	unsigned char descriptor;
	char tlb_type;
	unsigned int entries;
	/* unsigned int ways; */
	char info[128];
};

#define cpu_dev_register(cpu_devX) \
	static const struct cpu_dev *const __cpu_dev_##cpu_devX __used \
	__attribute__((__section__(".x86_cpu_dev.init"))) = \
	&cpu_devX;

extern const struct cpu_dev *const __x86_cpu_dev_start[],
			    *const __x86_cpu_dev_end[];

extern void get_cpu_cap(struct cpuinfo_x86 *c);
extern void cpu_detect_cache_sizes(struct cpuinfo_x86 *c);
#endif /* ARCH_X86_CPU_H */
Tue Jul 19 12:52:19 PDT 2016
Fri Jul 22 16:12:36 PDT 2016
Sun, Jul 24, 2016  5:35:14 PM
Tue, Jul 26, 2016 12:28:42 AM
