/*
 * i2c-ocores.h - definitions for the i2c-ocores interface
 *
 * Peter Korsgaard <jacmet@sunsite.dk>
 *
 * This file is licensed under the terms of the GNU General Public License
 * version 2.  This program is licensed "as is" without any warranty of any
 * kind, whether express or implied.
 */

#ifndef _LINUX_I2C_OCORES_H
#define _LINUX_I2C_OCORES_H

struct ocores_i2c_platform_data {
	u32 regstep;   /* distance between registers */
	u32 clock_khz; /* input clock in kHz */
	u8 num_devices; /* number of devices in the devices list */
	struct i2c_board_info const *devices; /* devices connected to the bus */
};

#endif /* _LINUX_I2C_OCORES_H */
Tue Jul 19 12:38:19 PDT 2016
Fri Jul 22 15:46:10 PDT 2016
Sun, Jul 24, 2016  2:15:51 PM
Mon, Jul 25, 2016  8:46:42 PM
