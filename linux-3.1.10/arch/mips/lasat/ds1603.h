/*
 * Dallas Semiconductors 1603 RTC driver
 *
 * Brian Murphy <brian@murphy.dk>
 *
 */
#ifndef __DS1603_H
#define __DS1603_H

struct ds_defs {
	volatile u32 *reg;
	volatile u32 *data_reg;
	u32 rst;
	u32 clk;
	u32 data;
	u32 data_read_shift;
	char data_reversed;
	u32 huge_delay;
};

extern struct ds_defs *ds1603;

void ds1603_set_trimmer(unsigned int);
void ds1603_enable(void);
void ds1603_disable(void);
void ds1603_init(struct ds_defs *);

#define TRIMMER_DEFAULT	3
#define TRIMMER_DISABLE_RTC 0

#endif
Tue Jul 19 12:33:22 PDT 2016
Fri Jul 22 15:37:47 PDT 2016
Sun, Jul 24, 2016  1:13:52 PM
Mon, Jul 25, 2016  6:20:51 PM
Mon, Jul 25, 2016  7:34:06 PM
Tue, Jul 26, 2016  2:10:12 PM
