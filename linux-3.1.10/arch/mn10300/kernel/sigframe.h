/* MN10300 Signal frame definitions
 *
 * Copyright (C) 2007 Matsushita Electric Industrial Co., Ltd.
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 */

struct sigframe
{
	void (*pretcode)(void);
	int sig;
	struct sigcontext *psc;
	struct sigcontext sc;
	struct fpucontext fpuctx;
	unsigned long extramask[_NSIG_WORDS-1];
	char retcode[8];
};

struct rt_sigframe
{
	void (*pretcode)(void);
	int sig;
	struct siginfo *pinfo;
	void *puc;
	struct siginfo info;
	struct ucontext uc;
	struct fpucontext fpuctx;
	char retcode[8];
};
Tue Jul 19 12:33:22 PDT 2016
Fri Jul 22 15:37:48 PDT 2016
Sun, Jul 24, 2016  1:13:57 PM
Mon, Jul 25, 2016  6:20:57 PM
Mon, Jul 25, 2016  7:34:12 PM
Tue, Jul 26, 2016  2:10:17 PM
