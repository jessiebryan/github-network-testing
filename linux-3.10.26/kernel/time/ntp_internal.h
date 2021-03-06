#ifndef _LINUX_NTP_INTERNAL_H
#define _LINUX_NTP_INTERNAL_H

extern void ntp_init(void);
extern void ntp_clear(void);
/* Returns how long ticks are at present, in ns / 2^NTP_SCALE_SHIFT. */
extern u64 ntp_tick_length(void);
extern int second_overflow(unsigned long secs);
extern int ntp_validate_timex(struct timex *);
extern int __do_adjtimex(struct timex *, struct timespec *, s32 *);
extern void __hardpps(const struct timespec *, const struct timespec *);
#endif /* _LINUX_NTP_INTERNAL_H */
Tue Jul 19 12:52:01 PDT 2016
Fri Jul 22 16:12:00 PDT 2016
Sun, Jul 24, 2016  5:30:51 PM
Tue, Jul 26, 2016 12:23:51 AM
