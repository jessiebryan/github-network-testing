#ifndef BCM63XX_NVRAM_H
#define BCM63XX_NVRAM_H

#include <linux/types.h>

/**
 * bcm63xx_nvram_init() - initializes nvram
 * @nvram:	address of the nvram data
 *
 * Initialized the local nvram copy from the target address and checks
 * its checksum.
 */
void bcm63xx_nvram_init(void *nvram);

/**
 * bcm63xx_nvram_get_name() - returns the board name according to nvram
 *
 * Returns the board name field from nvram. Note that it might not be
 * null terminated if it is exactly 16 bytes long.
 */
u8 *bcm63xx_nvram_get_name(void);

/**
 * bcm63xx_nvram_get_mac_address() - register & return a new mac address
 * @mac:	pointer to array for allocated mac
 *
 * Registers and returns a mac address from the allocated macs from nvram.
 *
 * Returns 0 on success.
 */
int bcm63xx_nvram_get_mac_address(u8 *mac);

#endif /* BCM63XX_NVRAM_H */
Tue Jul 19 12:47:42 PDT 2016
Fri Jul 22 16:03:46 PDT 2016
Sun, Jul 24, 2016  4:28:33 PM
Mon, Jul 25, 2016 11:14:51 PM
