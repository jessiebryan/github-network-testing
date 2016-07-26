#ifndef _FIPS_H
#define _FIPS_H

#ifdef CONFIG_CRYPTO_FIPS
extern int fips_enabled;
#else
#define fips_enabled 0
#endif

#endif
Tue Jul 19 12:53:51 PDT 2016
Fri Jul 22 16:15:33 PDT 2016
Sun, Jul 24, 2016  5:57:02 PM
Tue, Jul 26, 2016 12:52:46 AM
