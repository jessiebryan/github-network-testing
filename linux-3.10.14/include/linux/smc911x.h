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
Tue Jul 19 12:44:17 PDT 2016
Fri Jul 22 15:57:22 PDT 2016
Sun, Jul 24, 2016  3:38:45 PM
Mon, Jul 25, 2016 10:19:31 PM
