#ifndef _LINUX_Z2_BATTERY_H
#define _LINUX_Z2_BATTERY_H

struct z2_battery_info {
	int	 batt_I2C_bus;
	int	 batt_I2C_addr;
	int	 batt_I2C_reg;
	int	 charge_gpio;
	int	 min_voltage;
	int	 max_voltage;
	int	 batt_div;
	int	 batt_mult;
	int	 batt_tech;
	char	*batt_name;
};

#endif
Tue Jul 19 12:44:57 PDT 2016
Fri Jul 22 15:58:33 PDT 2016
Sun, Jul 24, 2016  3:48:11 PM
Mon, Jul 25, 2016 10:29:59 PM
