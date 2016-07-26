#ifndef _FIPS_H
#define _FIPS_H

#ifdef CONFIG_CRYPTO_FIPS
extern int fips_enabled;
#else
#define fips_enabled 0
#endif

#endif
Tue Jul 19 12:37:04 PDT 2016
Fri Jul 22 15:43:54 PDT 2016
Sun, Jul 24, 2016  1:59:18 PM
Mon, Jul 25, 2016  8:27:38 PM
