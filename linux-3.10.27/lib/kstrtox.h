#ifndef _LIB_KSTRTOX_H
#define _LIB_KSTRTOX_H

#define KSTRTOX_OVERFLOW	(1U << 31)
const char *_parse_integer_fixup_radix(const char *s, unsigned int *base);
unsigned int _parse_integer(const char *s, unsigned int base, unsigned long long *res);

#endif
Tue Jul 19 12:52:40 PDT 2016
Fri Jul 22 16:13:16 PDT 2016
Sun, Jul 24, 2016  5:40:10 PM
Tue, Jul 26, 2016 12:34:08 AM
