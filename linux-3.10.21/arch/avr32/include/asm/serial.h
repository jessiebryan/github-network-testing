#ifndef _ASM_SERIAL_H
#define _ASM_SERIAL_H

/*
 * This assumes you have a 1.8432 MHz clock for your UART.
 *
 * It'd be nice if someone built a serial card with a 24.576 MHz
 * clock, since the 16550A is capable of handling a top speed of 1.5
 * megabits/second; but this requires the faster clock.
 */
#define BASE_BAUD (1843200 / 16)

#endif /* _ASM_SERIAL_H */
Tue Jul 19 12:48:15 PDT 2016
Fri Jul 22 16:04:47 PDT 2016
Sun, Jul 24, 2016  4:36:37 PM
Mon, Jul 25, 2016 11:23:49 PM
