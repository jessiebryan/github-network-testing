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
Tue Jul 19 12:37:08 PDT 2016
Fri Jul 22 15:44:03 PDT 2016
Sun, Jul 24, 2016  2:00:22 PM
Mon, Jul 25, 2016  8:28:54 PM
