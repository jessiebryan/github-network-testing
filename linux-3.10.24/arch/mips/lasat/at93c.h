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
Tue Jul 19 12:50:17 PDT 2016
Fri Jul 22 16:08:38 PDT 2016
Sun, Jul 24, 2016  5:05:54 PM
Mon, Jul 25, 2016 11:56:19 PM
