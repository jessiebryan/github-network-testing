#ifndef __SMC911X_H__
#define __SMC911X_H__

#define SMC911X_USE_16BIT (1 << 0)
#define SMC911X_USE_32BIT (1 << 1)

struct smc911x_platdata {
	unsigned long flags;
	unsigned long irq_flags; /* IRQF_... */
	int irq_polarity;
};

#endif /* __SMC911X_H__ */
Tue Jul 19 12:38:58 PDT 2016
Fri Jul 22 15:47:27 PDT 2016
Sun, Jul 24, 2016  2:25:03 PM
Mon, Jul 25, 2016  8:56:58 PM
