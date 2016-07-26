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
Tue Jul 19 12:52:36 PDT 2016
Fri Jul 22 16:13:07 PDT 2016
Sun, Jul 24, 2016  5:39:04 PM
Tue, Jul 26, 2016 12:32:55 AM
