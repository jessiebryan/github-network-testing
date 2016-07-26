#ifndef DECOMPRESS_BUNZIP2_H
#define DECOMPRESS_BUNZIP2_H

int bunzip2(unsigned char *inbuf, int len,
	    int(*fill)(void*, unsigned int),
	    int(*flush)(void*, unsigned int),
	    unsigned char *output,
	    int *pos,
	    void(*error)(char *x));
#endif
Tue Jul 19 12:33:39 PDT 2016
Fri Jul 22 15:38:20 PDT 2016
Sun, Jul 24, 2016  1:17:59 PM
Mon, Jul 25, 2016  6:25:46 PM
Mon, Jul 25, 2016  7:38:56 PM
