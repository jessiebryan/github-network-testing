/*
 * Bug handling for PKUnity SoC and UniCore ISA
 *
 * Copyright (C) 2001-2012 GUAN Xue-tao
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __UNICORE_BUG_H__
#define __UNICORE_BUG_H__

#include <asm-generic/bug.h>

struct pt_regs;
struct siginfo;

extern void die(const char *msg, struct pt_regs *regs, int err);
extern void uc32_notify_die(const char *str, struct pt_regs *regs,
		struct siginfo *info, unsigned long err, unsigned long trap);

#endif /* __UNICORE_BUG_H__ */
Tue Jul 19 12:47:09 PDT 2016
Fri Jul 22 16:02:45 PDT 2016
Sun, Jul 24, 2016  4:20:45 PM
Mon, Jul 25, 2016 11:06:14 PM
