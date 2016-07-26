#ifndef _FIPS_H
#define _FIPS_H

#ifdef CONFIG_CRYPTO_FIPS
extern int fips_enabled;
#else
#define fips_enabled 0
#endif

#endif
Tue Jul 19 12:44:54 PDT 2016
Fri Jul 22 15:58:27 PDT 2016
Sun, Jul 24, 2016  3:47:18 PM
Mon, Jul 25, 2016 10:29:00 PM
