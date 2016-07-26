/*
 * Derived from the i386 version.
 */

/*
 * This assumes you have a 1.8432 MHz clock for your UART.
 *
 * It'd be nice if someone built a serial card with a 24.576 MHz
 * clock, since the 16550A is capable of handling a top speed of 1.5
 * megabits/second; but this requires the faster clock.
 */
#define BASE_BAUD ( 1843200 / 16 )

/*
 * All legacy serial ports should be enumerated via ACPI namespace, so
 * we need not list them here.
 */
Tue Jul 19 12:33:19 PDT 2016
Fri Jul 22 15:37:41 PDT 2016
Sun, Jul 24, 2016  1:13:09 PM
Mon, Jul 25, 2016  6:20:00 PM
Mon, Jul 25, 2016  7:33:15 PM
Tue, Jul 26, 2016  2:09:24 PM
