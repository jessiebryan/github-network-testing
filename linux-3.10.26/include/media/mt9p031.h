#ifndef MT9P031_H
#define MT9P031_H

struct v4l2_subdev;

/*
 * struct mt9p031_platform_data - MT9P031 platform data
 * @reset: Chip reset GPIO (set to -1 if not used)
 * @ext_freq: Input clock frequency
 * @target_freq: Pixel clock frequency
 */
struct mt9p031_platform_data {
	int reset;
	int ext_freq;
	int target_freq;
};

#endif
Tue Jul 19 12:51:58 PDT 2016
Fri Jul 22 16:11:54 PDT 2016
Sun, Jul 24, 2016  5:30:01 PM
Tue, Jul 26, 2016 12:22:57 AM
