/* Header file for Freescale MPR121 Capacitive Touch Sensor */

#ifndef _MPR121_TOUCHKEY_H
#define _MPR121_TOUCHKEY_H

/**
 * struct mpr121_platform_data - platform data for mpr121 sensor
 * @keymap: pointer to array of KEY_* values representing keymap
 * @keymap_size: size of the keymap
 * @wakeup: configure the button as a wake-up source
 * @vdd_uv: VDD voltage in uV
 */
struct mpr121_platform_data {
	const unsigned short *keymap;
	unsigned int keymap_size;
	bool wakeup;
	int vdd_uv;
};

#endif /* _MPR121_TOUCHKEY_H */
Tue Jul 19 12:35:56 PDT 2016
Fri Jul 22 15:41:41 PDT 2016
Sun, Jul 24, 2016  1:42:52 PM
Mon, Jul 25, 2016  8:08:13 PM
Tue, Jul 26, 2016  2:42:22 PM
