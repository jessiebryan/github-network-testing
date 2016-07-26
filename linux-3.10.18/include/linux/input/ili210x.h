#ifndef _ILI210X_H
#define _ILI210X_H

struct ili210x_platform_data {
	unsigned long irq_flags;
	unsigned int poll_period;
	bool (*get_pendown_state)(void);
};

#endif
Tue Jul 19 12:46:46 PDT 2016
Fri Jul 22 16:02:01 PDT 2016
Sun, Jul 24, 2016  4:15:05 PM
Mon, Jul 25, 2016 10:59:55 PM
