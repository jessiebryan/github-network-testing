/*
 * debug levels control file for the i2400m module's
 */
#ifndef __debug_levels__h__
#define __debug_levels__h__

/* Maximum compile and run time debug level for all submodules */
#define D_MODULENAME i2400m_sdio
#define D_MASTER CONFIG_WIMAX_I2400M_DEBUG_LEVEL

#include <linux/wimax/debug.h>

/* List of all the enabled modules */
enum d_module {
	D_SUBMODULE_DECLARE(main),
	D_SUBMODULE_DECLARE(tx),
	D_SUBMODULE_DECLARE(rx),
	D_SUBMODULE_DECLARE(fw)
};


#endif /* #ifndef __debug_levels__h__ */
Tue Jul 19 12:37:32 PDT 2016
Fri Jul 22 15:44:48 PDT 2016
Sun, Jul 24, 2016  2:05:44 PM
Mon, Jul 25, 2016  8:35:19 PM
