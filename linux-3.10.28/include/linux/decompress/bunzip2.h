#ifndef DECOMPRESS_BUNZIP2_H
#define DECOMPRESS_BUNZIP2_H

int bunzip2(unsigned char *inbuf, int len,
	    int(*fill)(void*, unsigned int),
	    int(*flush)(void*, unsigned int),
	    unsigned char *output,
	    int *pos,
	    void(*error)(char *x));
#endif
Tue Jul 19 12:53:12 PDT 2016
Fri Jul 22 16:14:18 PDT 2016
Sun, Jul 24, 2016  5:47:40 PM
Tue, Jul 26, 2016 12:42:23 AM
