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
Tue Jul 19 12:34:37 PDT 2016
Fri Jul 22 15:39:33 PDT 2016
Sun, Jul 24, 2016  1:27:23 PM
Mon, Jul 25, 2016  6:37:03 PM
Mon, Jul 25, 2016  7:49:57 PM
Tue, Jul 26, 2016  2:25:14 PM
