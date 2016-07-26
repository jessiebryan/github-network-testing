#ifndef __LICENSE_H
#define __LICENSE_H

static inline int license_is_gpl_compatible(const char *license)
{
	return (strcmp(license, "GPL") == 0
		|| strcmp(license, "GPL v2") == 0
		|| strcmp(license, "GPL and additional rights") == 0
		|| strcmp(license, "Dual BSD/GPL") == 0
		|| strcmp(license, "Dual MIT/GPL") == 0
		|| strcmp(license, "Dual MPL/GPL") == 0);
}

#endif
Tue Jul 19 12:35:57 PDT 2016
Fri Jul 22 15:41:42 PDT 2016
Sun, Jul 24, 2016  1:43:00 PM
Mon, Jul 25, 2016  8:08:22 PM
Tue, Jul 26, 2016  2:42:31 PM
