#ifndef SUN3X_TIME_H
#define SUN3X_TIME_H

extern int sun3x_hwclk(int set, struct rtc_time *t);
u32 sun3x_gettimeoffset(void);
void sun3x_sched_init(irq_handler_t vector);

struct mostek_dt {
	volatile unsigned char csr;
	volatile unsigned char sec;
	volatile unsigned char min;
	volatile unsigned char hour;
	volatile unsigned char wday;
	volatile unsigned char mday;
	volatile unsigned char month;
	volatile unsigned char year;
};

#endif
Tue Jul 19 12:45:10 PDT 2016
Fri Jul 22 15:58:58 PDT 2016
Sun, Jul 24, 2016  3:51:25 PM
Mon, Jul 25, 2016 10:33:36 PM
