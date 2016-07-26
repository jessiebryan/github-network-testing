#ifndef _ILI210X_H
#define _ILI210X_H

struct ili210x_platform_data {
	unsigned long irq_flags;
	unsigned int poll_period;
	bool (*get_pendown_state)(void);
};

#endif
Tue Jul 19 12:45:31 PDT 2016
Fri Jul 22 15:59:39 PDT 2016
Sun, Jul 24, 2016  3:56:39 PM
Mon, Jul 25, 2016 10:39:24 PM
