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

Tue Jul 19 12:48:17 PDT 2016
Fri Jul 22 16:04:51 PDT 2016
Sun, Jul 24, 2016  4:37:01 PM
Mon, Jul 25, 2016 11:24:16 PM
