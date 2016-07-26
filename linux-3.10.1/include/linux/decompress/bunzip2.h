#ifndef DECOMPRESS_BUNZIP2_H
#define DECOMPRESS_BUNZIP2_H

int bunzip2(unsigned char *inbuf, int len,
	    int(*fill)(void*, unsigned int),
	    int(*flush)(void*, unsigned int),
	    unsigned char *output,
	    int *pos,
	    void(*error)(char *x));
#endif
Tue Jul 19 12:38:55 PDT 2016
Fri Jul 22 15:47:21 PDT 2016
Sun, Jul 24, 2016  2:24:18 PM
Mon, Jul 25, 2016  8:56:07 PM
