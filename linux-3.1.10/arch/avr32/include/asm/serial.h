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
Tue Jul 19 12:33:16 PDT 2016
Fri Jul 22 15:37:36 PDT 2016
Sun, Jul 24, 2016  1:12:36 PM
Mon, Jul 25, 2016  6:19:20 PM
Mon, Jul 25, 2016  7:32:36 PM
