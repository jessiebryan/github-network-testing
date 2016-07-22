/*
 * Copyright 2004-2009 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#define BITS_PER_UNIT  8
#define SI_TYPE_SIZE (sizeof (SItype) * BITS_PER_UNIT)

typedef unsigned int UQItype __attribute__ ((mode(QI)));
typedef int SItype __attribute__ ((mode(SI)));
typedef unsigned int USItype __attribute__ ((mode(SI)));
typedef int DItype __attribute__ ((mode(DI)));
typedef int word_type __attribute__ ((mode(__word__)));
typedef unsigned int UDItype __attribute__ ((mode(DI)));

struct DIstruct {
	SItype low, high;
};

typedef union {
	struct DIstruct s;
	DItype ll;
} DIunion;
Tue Jul 19 12:43:11 PDT 2016
Fri Jul 22 15:55:18 PDT 2016
