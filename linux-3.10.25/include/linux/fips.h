#ifndef _FIPS_H
#define _FIPS_H

#ifdef CONFIG_CRYPTO_FIPS
extern int fips_enabled;
#else
#define fips_enabled 0
#endif

#endif
Tue Jul 19 12:51:15 PDT 2016
Fri Jul 22 16:10:29 PDT 2016
Sun, Jul 24, 2016  5:19:47 PM
Tue, Jul 26, 2016 12:11:40 AM
