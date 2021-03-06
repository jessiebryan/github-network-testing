#ifndef _INCLUDE_SOUND_ALC5623_H
#define _INCLUDE_SOUND_ALC5623_H
struct alc5623_platform_data {
	/* configure :                              */
	/* Lineout/Speaker Amps Vmid ratio control  */
	/* enable/disable adc/dac high pass filters */
	unsigned int add_ctrl;
	/* configure :                              */
	/* output to enable when jack is low        */
	/* output to enable when jack is high       */
	/* jack detect (gpio/nc/jack detect [12]    */
	unsigned int jack_det_ctrl;
};
#endif

Tue Jul 19 12:34:37 PDT 2016
Fri Jul 22 15:39:33 PDT 2016
Sun, Jul 24, 2016  1:27:21 PM
Mon, Jul 25, 2016  6:37:01 PM
Mon, Jul 25, 2016  7:49:56 PM
Tue, Jul 26, 2016  2:25:13 PM
