#ifndef _ILI210X_H
#define _ILI210X_H

struct ili210x_platform_data {
	unsigned long irq_flags;
	unsigned int poll_period;
	bool (*get_pendown_state)(void);
};

#endif
Tue Jul 19 12:40:12 PDT 2016
Fri Jul 22 15:49:56 PDT 2016
Sun, Jul 24, 2016  2:42:54 PM
Mon, Jul 25, 2016  9:16:49 PM
