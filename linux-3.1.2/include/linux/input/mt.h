#ifndef _INPUT_MT_H
#define _INPUT_MT_H

/*
 * Input Multitouch Library
 *
 * Copyright (c) 2010 Henrik Rydberg
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 */

#include <linux/input.h>

#define TRKID_MAX	0xffff

/**
 * struct input_mt_slot - represents the state of an input MT slot
 * @abs: holds current values of ABS_MT axes for this slot
 */
struct input_mt_slot {
	int abs[ABS_MT_LAST - ABS_MT_FIRST + 1];
};

static inline void input_mt_set_value(struct input_mt_slot *slot,
				      unsigned code, int value)
{
	slot->abs[code - ABS_MT_FIRST] = value;
}

static inline int input_mt_get_value(const struct input_mt_slot *slot,
				     unsigned code)
{
	return slot->abs[code - ABS_MT_FIRST];
}

int input_mt_init_slots(struct input_dev *dev, unsigned int num_slots);
void input_mt_destroy_slots(struct input_dev *dev);

static inline int input_mt_new_trkid(struct input_dev *dev)
{
	return dev->trkid++ & TRKID_MAX;
}

static inline void input_mt_slot(struct input_dev *dev, int slot)
{
	input_event(dev, EV_ABS, ABS_MT_SLOT, slot);
}

static inline bool input_is_mt_axis(int axis)
{
	return axis == ABS_MT_SLOT ||
		(axis >= ABS_MT_FIRST && axis <= ABS_MT_LAST);
}

void input_mt_report_slot_state(struct input_dev *dev,
				unsigned int tool_type, bool active);

void input_mt_report_finger_count(struct input_dev *dev, int count);
void input_mt_report_pointer_emulation(struct input_dev *dev, bool use_count);

#endif
Tue Jul 19 12:34:25 PDT 2016
Fri Jul 22 15:39:26 PDT 2016
Sun, Jul 24, 2016  1:26:25 PM
Mon, Jul 25, 2016  6:35:54 PM
Mon, Jul 25, 2016  7:48:50 PM
Tue, Jul 26, 2016  2:24:11 PM
