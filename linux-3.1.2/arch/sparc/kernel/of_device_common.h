#ifndef _OF_DEVICE_COMMON_H
#define _OF_DEVICE_COMMON_H

static inline u64 of_read_addr(const u32 *cell, int size)
{
	u64 r = 0;
	while (size--)
		r = (r << 32) | *(cell++);
	return r;
}

void of_bus_default_count_cells(struct device_node *dev, int *addrc,
				int *sizec);
int of_out_of_range(const u32 *addr, const u32 *base,
		    const u32 *size, int na, int ns);
int of_bus_default_map(u32 *addr, const u32 *range, int na, int ns, int pna);
unsigned long of_bus_default_get_flags(const u32 *addr, unsigned long flags);

int of_bus_sbus_match(struct device_node *np);
void of_bus_sbus_count_cells(struct device_node *child, int *addrc, int *sizec);

/* Max address size we deal with */
#define OF_MAX_ADDR_CELLS	4

struct of_bus {
	const char	*name;
	const char	*addr_prop_name;
	int		(*match)(struct device_node *parent);
	void		(*count_cells)(struct device_node *child,
				       int *addrc, int *sizec);
	int		(*map)(u32 *addr, const u32 *range,
			       int na, int ns, int pna);
	unsigned long	(*get_flags)(const u32 *addr, unsigned long);
};

#endif /* _OF_DEVICE_COMMON_H */
Tue Jul 19 12:34:02 PDT 2016
Fri Jul 22 15:38:59 PDT 2016
Sun, Jul 24, 2016  1:23:06 PM
Mon, Jul 25, 2016  6:31:53 PM
Mon, Jul 25, 2016  7:44:56 PM
Tue, Jul 26, 2016  2:20:31 PM
