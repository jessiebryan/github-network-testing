#ifndef _ILI210X_H
#define _ILI210X_H

struct ili210x_platform_data {
	unsigned long irq_flags;
	unsigned int poll_period;
	bool (*get_pendown_state)(void);
};

#endif
Tue Jul 19 12:48:02 PDT 2016
Fri Jul 22 16:04:24 PDT 2016
Sun, Jul 24, 2016  4:33:33 PM
Mon, Jul 25, 2016 11:20:25 PM
