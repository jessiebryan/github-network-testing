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
Tue Jul 19 12:34:50 PDT 2016
Fri Jul 22 15:39:53 PDT 2016
Sun, Jul 24, 2016  1:29:40 PM
Mon, Jul 25, 2016  6:39:46 PM
Mon, Jul 25, 2016  7:52:38 PM
Tue, Jul 26, 2016  2:27:47 PM
