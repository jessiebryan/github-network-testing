#ifndef _L3_H_
#define _L3_H_ 1

struct l3_pins {
	void (*setdat)(int);
	void (*setclk)(int);
	void (*setmode)(int);
	int data_hold;
	int data_setup;
	int clock_high;
	int mode_hold;
	int mode;
	int mode_setup;
};

int l3_write(struct l3_pins *adap, u8 addr, u8 *data, int len);

#endif
Tue Jul 19 12:45:35 PDT 2016
Fri Jul 22 15:59:47 PDT 2016
Sun, Jul 24, 2016  3:57:43 PM
Mon, Jul 25, 2016 10:40:36 PM
