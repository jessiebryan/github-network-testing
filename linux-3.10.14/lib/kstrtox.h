#ifndef _LIB_KSTRTOX_H
#define _LIB_KSTRTOX_H

#define KSTRTOX_OVERFLOW	(1U << 31)
const char *_parse_integer_fixup_radix(const char *s, unsigned int *base);
unsigned int _parse_integer(const char *s, unsigned int base, unsigned long long *res);

#endif
Tue Jul 19 12:44:22 PDT 2016
Fri Jul 22 15:57:29 PDT 2016
Sun, Jul 24, 2016  3:39:50 PM
Mon, Jul 25, 2016 10:20:40 PM
