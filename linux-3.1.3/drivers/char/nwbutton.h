#ifndef __NWBUTTON_H
#define __NWBUTTON_H

/*
 * 	NetWinder Button Driver-
 *	Copyright (C) Alex Holden <alex@linuxhacker.org> 1998, 1999.
 */

#ifdef __NWBUTTON_C	/* Actually compiling the driver itself */

/* Various defines: */

#define NUM_PRESSES_REBOOT 2	/* How many presses to activate shutdown */
#define BUTTON_DELAY 30 	/* How many jiffies for sequence to end */
#define VERSION "0.3"		/* Driver version number */
#define BUTTON_MINOR 158	/* Major 10, Minor 158, /dev/nwbutton */

/* Structure definitions: */

struct button_callback {
	void (*callback) (void);
	int count;
};

/* Function prototypes: */

static void button_sequence_finished (unsigned long parameters);
static irqreturn_t button_handler (int irq, void *dev_id);
int button_init (void);
int button_add_callback (void (*callback) (void), int count);
int button_del_callback (void (*callback) (void));
static void button_consume_callbacks (int bpcount);

#else /* Not compiling the driver itself */

extern int button_add_callback (void (*callback) (void), int count);
extern int button_del_callback (void (*callback) (void));

#endif /* __NWBUTTON_C */
#endif /* __NWBUTTON_H */
Tue Jul 19 12:35:11 PDT 2016
Fri Jul 22 15:40:12 PDT 2016
Sun, Jul 24, 2016  1:31:55 PM
Mon, Jul 25, 2016  7:55:18 PM
Tue, Jul 26, 2016  2:30:17 PM
