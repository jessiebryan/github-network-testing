#ifndef _FIPS_H
#define _FIPS_H

#ifdef CONFIG_CRYPTO_FIPS
extern int fips_enabled;
#else
#define fips_enabled 0
#endif

#endif
Tue Jul 19 12:38:19 PDT 2016
Fri Jul 22 15:46:09 PDT 2016
Sun, Jul 24, 2016  2:15:47 PM
Mon, Jul 25, 2016  8:46:38 PM
