#ifndef DECOMPRESS_UNLZO_H
#define DECOMPRESS_UNLZO_H

int unlzo(unsigned char *inbuf, int len,
	int(*fill)(void*, unsigned int),
	int(*flush)(void*, unsigned int),
	unsigned char *output,
	int *pos,
	void(*error)(char *x));
#endif
Tue Jul 19 12:50:36 PDT 2016
Fri Jul 22 16:09:14 PDT 2016
Sun, Jul 24, 2016  5:10:25 PM
Tue, Jul 26, 2016 12:01:18 AM
