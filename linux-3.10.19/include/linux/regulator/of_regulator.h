/*
 * OpenFirmware regulator support routines
 *
 */

#ifndef __LINUX_OF_REG_H
#define __LINUX_OF_REG_H

struct of_regulator_match {
	const char *name;
	void *driver_data;
	struct regulator_init_data *init_data;
	struct device_node *of_node;
};

#if defined(CONFIG_OF)
extern struct regulator_init_data
	*of_get_regulator_init_data(struct device *dev,
				    struct device_node *node);
extern int of_regulator_match(struct device *dev, struct device_node *node,
			      struct of_regulator_match *matches,
			      unsigned int num_matches);
#else
static inline struct regulator_init_data
	*of_get_regulator_init_data(struct device *dev,
				    struct device_node *node)
{
	return NULL;
}

static inline int of_regulator_match(struct device *dev,
				     struct device_node *node,
				     struct of_regulator_match *matches,
				     unsigned int num_matches)
{
	return 0;
}
#endif /* CONFIG_OF */

#endif /* __LINUX_OF_REG_H */
Tue Jul 19 12:47:26 PDT 2016
Fri Jul 22 16:03:16 PDT 2016
Sun, Jul 24, 2016  4:24:50 PM
Mon, Jul 25, 2016 11:10:43 PM
