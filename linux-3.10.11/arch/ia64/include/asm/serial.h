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
Tue Jul 19 12:41:48 PDT 2016
Fri Jul 22 15:53:01 PDT 2016
Sun, Jul 24, 2016  3:05:02 PM
Mon, Jul 25, 2016  9:41:51 PM
