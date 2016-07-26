/*
 * Atmel AT93C46 serial eeprom driver
 *
 * Brian Murphy <brian.murphy@eicon.com>
 *
 */

extern struct at93c_defs {
	volatile u32 *reg;
	volatile u32 *rdata_reg;
	int rdata_shift;
	int wdata_shift;
	u32 cs;
	u32 clk;
} *at93c;

u8 at93c_read(u8 addr);
void at93c_write(u8 addr, u8 data);
Tue Jul 19 12:33:58 PDT 2016
Fri Jul 22 15:38:52 PDT 2016
Sun, Jul 24, 2016  1:22:07 PM
Mon, Jul 25, 2016  6:30:44 PM
Mon, Jul 25, 2016  7:43:48 PM
Tue, Jul 26, 2016  2:19:27 PM
