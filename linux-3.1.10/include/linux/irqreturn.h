#ifndef _LINUX_IRQRETURN_H
#define _LINUX_IRQRETURN_H

/**
 * enum irqreturn
 * @IRQ_NONE		interrupt was not from this device
 * @IRQ_HANDLED		interrupt was handled by this device
 * @IRQ_WAKE_THREAD	handler requests to wake the handler thread
 */
enum irqreturn {
	IRQ_NONE		= (0 << 0),
	IRQ_HANDLED		= (1 << 0),
	IRQ_WAKE_THREAD		= (1 << 1),
};

typedef enum irqreturn irqreturn_t;
#define IRQ_RETVAL(x)	((x) != IRQ_NONE)

#endif
Tue Jul 19 12:33:39 PDT 2016
Fri Jul 22 15:38:21 PDT 2016
Sun, Jul 24, 2016  1:18:11 PM
Mon, Jul 25, 2016  6:26:01 PM
Mon, Jul 25, 2016  7:39:10 PM
Tue, Jul 26, 2016  2:15:02 PM
