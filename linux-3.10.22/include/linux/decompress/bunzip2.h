#ifndef DECOMPRESS_BUNZIP2_H
#define DECOMPRESS_BUNZIP2_H

int bunzip2(unsigned char *inbuf, int len,
	    int(*fill)(void*, unsigned int),
	    int(*flush)(void*, unsigned int),
	    unsigned char *output,
	    int *pos,
	    void(*error)(char *x));
#endif
Tue Jul 19 12:49:19 PDT 2016
Fri Jul 22 16:06:47 PDT 2016
Sun, Jul 24, 2016  4:51:48 PM
Mon, Jul 25, 2016 11:40:47 PM
