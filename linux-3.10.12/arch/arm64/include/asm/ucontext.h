/*
 * Copyright (C) 2012 ARM Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __ASM_UCONTEXT_H
#define __ASM_UCONTEXT_H

struct ucontext {
	unsigned long	  uc_flags;
	struct ucontext	 *uc_link;
	stack_t		  uc_stack;
	sigset_t	  uc_sigmask;
	/* glibc uses a 1024-bit sigset_t */
	__u8		  __unused[1024 / 8 - sizeof(sigset_t)];
	/* last for future expansion */
	struct sigcontext uc_mcontext;
};

#endif /* __ASM_UCONTEXT_H */
Tue Jul 19 12:42:31 PDT 2016
Fri Jul 22 15:54:07 PDT 2016
Sun, Jul 24, 2016  3:13:33 PM
Mon, Jul 25, 2016  9:51:27 PM
