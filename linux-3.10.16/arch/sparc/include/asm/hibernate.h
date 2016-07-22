/*
 * hibernate.h:  Hibernaton support specific for sparc64.
 *
 * Copyright (C) 2013 Kirill V Tkhai (tkhai@yandex.ru)
 */

#ifndef ___SPARC_HIBERNATE_H
#define ___SPARC_HIBERNATE_H

struct saved_context {
	unsigned long fp;
	unsigned long cwp;
	unsigned long wstate;

	unsigned long tick;
	unsigned long pstate;

	unsigned long g4;
	unsigned long g5;
	unsigned long g6;
};

#endif
Tue Jul 19 12:45:16 PDT 2016
Fri Jul 22 15:59:10 PDT 2016
