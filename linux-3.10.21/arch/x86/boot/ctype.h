#ifndef BOOT_ISDIGIT_H

#define BOOT_ISDIGIT_H

static inline int isdigit(int ch)
{
	return (ch >= '0') && (ch <= '9');
}

static inline int isxdigit(int ch)
{
	if (isdigit(ch))
		return true;

	if ((ch >= 'a') && (ch <= 'f'))
		return true;

	return (ch >= 'A') && (ch <= 'F');
}

#endif
Tue Jul 19 12:48:26 PDT 2016
Fri Jul 22 16:05:08 PDT 2016
Sun, Jul 24, 2016  4:39:18 PM
Mon, Jul 25, 2016 11:26:48 PM
