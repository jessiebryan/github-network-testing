/*
	Copyright (C) 2004 - 2009 Ivo van Doorn <IvDoorn@gmail.com>
	<http://rt2x00.serialmonkey.com>

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the
	Free Software Foundation, Inc.,
	59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

/*
	Module: rt2x00soc
	Abstract: Data structures for the rt2x00soc module.
 */

#ifndef RT2X00SOC_H
#define RT2X00SOC_H

/*
 * SoC driver handlers.
 */
int rt2x00soc_probe(struct platform_device *pdev, const struct rt2x00_ops *ops);
int rt2x00soc_remove(struct platform_device *pdev);
#ifdef CONFIG_PM
int rt2x00soc_suspend(struct platform_device *pdev, pm_message_t state);
int rt2x00soc_resume(struct platform_device *pdev);
#else
#define rt2x00soc_suspend	NULL
#define rt2x00soc_resume	NULL
#endif /* CONFIG_PM */

#endif /* RT2X00SOC_H */
Tue Jul 19 12:34:09 PDT 2016
Fri Jul 22 15:39:12 PDT 2016
Sun, Jul 24, 2016  1:24:39 PM
Mon, Jul 25, 2016  6:33:46 PM
Mon, Jul 25, 2016  7:46:45 PM
Tue, Jul 26, 2016  2:22:14 PM
