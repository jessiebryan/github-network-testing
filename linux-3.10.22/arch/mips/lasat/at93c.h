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
Tue Jul 19 12:48:59 PDT 2016
Fri Jul 22 16:06:12 PDT 2016
Sun, Jul 24, 2016  4:47:20 PM
Mon, Jul 25, 2016 11:35:46 PM
