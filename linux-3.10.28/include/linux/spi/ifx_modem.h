#ifndef LINUX_IFX_MODEM_H
#define LINUX_IFX_MODEM_H

struct ifx_modem_platform_data {
	unsigned short rst_out;		/* modem reset out */
	unsigned short pwr_on;		/* power on */
	unsigned short rst_pmu;		/* reset modem */
	unsigned short tx_pwr;		/* modem power threshold */
	unsigned short srdy;		/* SRDY */
	unsigned short mrdy;		/* MRDY */
	unsigned char modem_type;	/* Modem type */
	unsigned long max_hz;		/* max SPI frequency */
	unsigned short use_dma:1;	/* spi protocol driver supplies
					   dma-able addrs */
};
#define IFX_MODEM_6160	1
#define IFX_MODEM_6260	2

#endif
Tue Jul 19 12:53:15 PDT 2016
Fri Jul 22 16:14:24 PDT 2016
Sun, Jul 24, 2016  5:48:27 PM
Tue, Jul 26, 2016 12:43:14 AM
