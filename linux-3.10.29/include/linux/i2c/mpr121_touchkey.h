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
Tue Jul 19 12:53:51 PDT 2016
Fri Jul 22 16:15:34 PDT 2016
Sun, Jul 24, 2016  5:57:06 PM
Tue, Jul 26, 2016 12:52:50 AM
