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
Tue Jul 19 12:39:35 PDT 2016
Fri Jul 22 15:48:44 PDT 2016
Sun, Jul 24, 2016  2:34:12 PM
Mon, Jul 25, 2016  9:07:10 PM
