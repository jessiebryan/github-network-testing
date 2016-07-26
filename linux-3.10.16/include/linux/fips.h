#ifndef _FIPS_H
#define _FIPS_H

#ifdef CONFIG_CRYPTO_FIPS
extern int fips_enabled;
#else
#define fips_enabled 0
#endif

#endif
Tue Jul 19 12:45:30 PDT 2016
Fri Jul 22 15:59:38 PDT 2016
Sun, Jul 24, 2016  3:56:32 PM
Mon, Jul 25, 2016 10:39:16 PM
