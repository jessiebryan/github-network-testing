/* RS-485 structures */

/* Used with ioctl() TIOCSERSETRS485 for backward compatibility!
 * XXX: Do not use it for new code!
 */
struct rs485_control {
        unsigned short rts_on_send;
        unsigned short rts_after_sent;
        unsigned long delay_rts_before_send;
        unsigned short enabled;
};

/* Used with ioctl() TIOCSERWRRS485 */
struct rs485_write {
        unsigned short outc_size;
        unsigned char *outc;
};

Tue Jul 19 12:39:09 PDT 2016
Fri Jul 22 15:47:51 PDT 2016
Sun, Jul 24, 2016  2:27:56 PM
Mon, Jul 25, 2016  9:00:11 PM
