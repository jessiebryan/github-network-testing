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
Tue Jul 19 12:52:33 PDT 2016
Fri Jul 22 16:13:01 PDT 2016
Sun, Jul 24, 2016  5:38:21 PM
Tue, Jul 26, 2016 12:32:08 AM
