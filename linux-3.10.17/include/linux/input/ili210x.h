#ifndef _ILI210X_H
#define _ILI210X_H

struct ili210x_platform_data {
	unsigned long irq_flags;
	unsigned int poll_period;
	bool (*get_pendown_state)(void);
};

#endif
Tue Jul 19 12:46:07 PDT 2016
Fri Jul 22 16:00:49 PDT 2016
Sun, Jul 24, 2016  4:05:52 PM
Mon, Jul 25, 2016 10:49:39 PM
