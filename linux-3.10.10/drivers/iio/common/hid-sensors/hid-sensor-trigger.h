/*
 * HID Sensors Driver
 * Copyright (c) 2012, Intel Corporation.
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
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */
#ifndef _HID_SENSOR_TRIGGER_H
#define _HID_SENSOR_TRIGGER_H

int hid_sensor_setup_trigger(struct iio_dev *indio_dev, const char *name,
				struct hid_sensor_common *attrb);
void hid_sensor_remove_trigger(struct iio_dev *indio_dev);

#endif
Tue Jul 19 12:39:21 PDT 2016
Fri Jul 22 15:48:16 PDT 2016
Sun, Jul 24, 2016  2:30:52 PM
Mon, Jul 25, 2016  9:03:27 PM
