/*
 * public include for LM8333 keypad driver - same license as driver
 * Copyright (C) 2012 Wolfram Sang, Pengutronix <w.sang@pengutronix.de>
 */

#ifndef _LM8333_H
#define _LM8333_H

struct lm8333;

struct lm8333_platform_data {
	/* Keymap data */
	const struct matrix_keymap_data *matrix_data;
	/* Active timeout before enter HALT mode in microseconds */
	unsigned active_time;
	/* Debounce interval in microseconds */
	unsigned debounce_time;
};

extern int lm8333_read8(struct lm8333 *lm8333, u8 cmd);
extern int lm8333_write8(struct lm8333 *lm8333, u8 cmd, u8 val);
extern int lm8333_read_block(struct lm8333 *lm8333, u8 cmd, u8 len, u8 *buf);

#endif /* _LM8333_H */
Tue Jul 19 12:49:58 PDT 2016
Fri Jul 22 16:08:01 PDT 2016
Sun, Jul 24, 2016  5:01:16 PM
Mon, Jul 25, 2016 11:51:15 PM
