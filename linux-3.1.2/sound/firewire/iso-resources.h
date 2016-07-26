#ifndef SOUND_FIREWIRE_ISO_RESOURCES_H_INCLUDED
#define SOUND_FIREWIRE_ISO_RESOURCES_H_INCLUDED

#include <linux/mutex.h>
#include <linux/types.h>

struct fw_unit;

/**
 * struct fw_iso_resources - manages channel/bandwidth allocation
 * @channels_mask: if the device does not support all channel numbers, set this
 *                 bit mask to something else than the default (all ones)
 *
 * This structure manages (de)allocation of isochronous resources (channel and
 * bandwidth) for one isochronous stream.
 */
struct fw_iso_resources {
	u64 channels_mask;
	/* private: */
	struct fw_unit *unit;
	struct mutex mutex;
	unsigned int channel;
	unsigned int bandwidth; /* in bandwidth units, without overhead */
	unsigned int bandwidth_overhead;
	int generation; /* in which allocation is valid */
	bool allocated;
};

int fw_iso_resources_init(struct fw_iso_resources *r,
			  struct fw_unit *unit);
void fw_iso_resources_destroy(struct fw_iso_resources *r);

int fw_iso_resources_allocate(struct fw_iso_resources *r,
			      unsigned int max_payload_bytes, int speed);
int fw_iso_resources_update(struct fw_iso_resources *r);
void fw_iso_resources_free(struct fw_iso_resources *r);

#endif
Tue Jul 19 12:34:39 PDT 2016
Fri Jul 22 15:39:36 PDT 2016
Sun, Jul 24, 2016  1:27:40 PM
Mon, Jul 25, 2016  6:37:24 PM
Mon, Jul 25, 2016  7:50:18 PM
