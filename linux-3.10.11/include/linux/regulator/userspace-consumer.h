#ifndef __REGULATOR_PLATFORM_CONSUMER_H_
#define __REGULATOR_PLATFORM_CONSUMER_H_

struct regulator_consumer_supply;

/**
 * struct regulator_userspace_consumer_data - line consumer
 * initialisation data.
 *
 * @name: Name for the consumer line
 * @num_supplies: Number of supplies feeding the line
 * @supplies: Supplies configuration.
 * @init_on: Set if the regulators supplying the line should be
 *           enabled during initialisation
 */
struct regulator_userspace_consumer_data {
	const char *name;

	int num_supplies;
	struct regulator_bulk_data *supplies;

	bool init_on;
};

#endif /* __REGULATOR_PLATFORM_CONSUMER_H_ */
Tue Jul 19 12:42:21 PDT 2016
Fri Jul 22 15:53:48 PDT 2016
Sun, Jul 24, 2016  3:11:03 PM
Mon, Jul 25, 2016  9:48:38 PM
