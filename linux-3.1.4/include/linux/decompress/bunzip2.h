#ifndef DECOMPRESS_BUNZIP2_H
#define DECOMPRESS_BUNZIP2_H

int bunzip2(unsigned char *inbuf, int len,
	    int(*fill)(void*, unsigned int),
	    int(*flush)(void*, unsigned int),
	    unsigned char *output,
	    int *pos,
	    void(*error)(char *x));
#endif
Tue Jul 19 12:35:56 PDT 2016
Fri Jul 22 15:41:40 PDT 2016
Sun, Jul 24, 2016  1:42:45 PM
Mon, Jul 25, 2016  8:08:04 PM
Tue, Jul 26, 2016  2:42:14 PM
