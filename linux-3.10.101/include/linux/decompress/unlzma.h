#ifndef DECOMPRESS_UNLZMA_H
#define DECOMPRESS_UNLZMA_H

int unlzma(unsigned char *, int,
	   int(*fill)(void*, unsigned int),
	   int(*flush)(void*, unsigned int),
	   unsigned char *output,
	   int *posp,
	   void(*error)(char *x)
	);

#endif
Tue Jul 19 12:40:50 PDT 2016
Fri Jul 22 15:51:10 PDT 2016
Sun, Jul 24, 2016  2:51:55 PM
Mon, Jul 25, 2016  9:27:02 PM
