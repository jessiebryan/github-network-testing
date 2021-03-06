#ifndef B43_RADIO_2059_H_
#define B43_RADIO_2059_H_

#include <linux/types.h>

#include "phy_ht.h"

#define R2059_SYN			0x000
#define R2059_TXRX0			0x400
#define R2059_RXRX1			0x800
#define R2059_ALL			0xC00

/* Values for various registers uploaded on channel switching */
struct b43_phy_ht_channeltab_e_radio2059 {
	/* The channel frequency in MHz */
	u16 freq;
	/* Values for radio registers */
	u8 radio_syn16;
	u8 radio_syn17;
	u8 radio_syn22;
	u8 radio_syn25;
	u8 radio_syn27;
	u8 radio_syn28;
	u8 radio_syn29;
	u8 radio_syn2c;
	u8 radio_syn2d;
	u8 radio_syn37;
	u8 radio_syn41;
	u8 radio_syn43;
	u8 radio_syn47;
	u8 radio_syn4a;
	u8 radio_syn58;
	u8 radio_syn5a;
	u8 radio_syn6a;
	u8 radio_syn6d;
	u8 radio_syn6e;
	u8 radio_syn92;
	u8 radio_syn98;
	u8 radio_rxtx4a;
	u8 radio_rxtx58;
	u8 radio_rxtx5a;
	u8 radio_rxtx6a;
	u8 radio_rxtx6d;
	u8 radio_rxtx6e;
	u8 radio_rxtx92;
	u8 radio_rxtx98;
	/* Values for PHY registers */
	struct b43_phy_ht_channeltab_e_phy phy_regs;
};

const struct b43_phy_ht_channeltab_e_radio2059
*b43_phy_ht_get_channeltab_e_r2059(struct b43_wldev *dev, u16 freq);

#endif /* B43_RADIO_2059_H_ */
Tue Jul 19 12:34:09 PDT 2016
Fri Jul 22 15:39:11 PDT 2016
Sun, Jul 24, 2016  1:24:33 PM
Mon, Jul 25, 2016  6:33:39 PM
Mon, Jul 25, 2016  7:46:38 PM
Tue, Jul 26, 2016  2:22:08 PM
