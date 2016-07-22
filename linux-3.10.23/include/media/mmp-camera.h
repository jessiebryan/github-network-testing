/*
 * Information for the Marvell Armada MMP camera
 */

struct mmp_camera_platform_data {
	struct platform_device *i2c_device;
	int sensor_power_gpio;
	int sensor_reset_gpio;
};
Tue Jul 19 12:50:01 PDT 2016
Fri Jul 22 16:08:08 PDT 2016
