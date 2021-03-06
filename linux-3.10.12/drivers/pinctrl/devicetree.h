/*
 * Internal interface to pinctrl device tree integration
 *
 * Copyright (C) 2012 NVIDIA CORPORATION. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef CONFIG_OF

void pinctrl_dt_free_maps(struct pinctrl *p);
int pinctrl_dt_to_map(struct pinctrl *p);

#else

static inline int pinctrl_dt_to_map(struct pinctrl *p)
{
	return 0;
}

static inline void pinctrl_dt_free_maps(struct pinctrl *p)
{
}

#endif
Tue Jul 19 12:42:51 PDT 2016
Fri Jul 22 15:54:42 PDT 2016
Sun, Jul 24, 2016  3:18:04 PM
Mon, Jul 25, 2016  9:56:32 PM
