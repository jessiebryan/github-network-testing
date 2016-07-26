#ifndef __LINUX_PLATFORM_DATA_AD7791__
#define __LINUX_PLATFORM_DATA_AD7791__

/**
 * struct ad7791_platform_data - AD7791 device platform data
 * @buffered: If set to true configure the device for buffered input mode.
 * @burnout_current: If set to true the 100mA burnout current is enabled.
 * @unipolar: If set to true sample in unipolar mode, if set to false sample in
 *		bipolar mode.
 */
struct ad7791_platform_data {
	bool buffered;
	bool burnout_current;
	bool unipolar;
};

#endif
Tue Jul 19 12:40:52 PDT 2016
Fri Jul 22 15:51:14 PDT 2016
Sun, Jul 24, 2016  2:52:27 PM
Mon, Jul 25, 2016  9:27:38 PM
