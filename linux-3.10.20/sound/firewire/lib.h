#ifndef SOUND_FIREWIRE_LIB_H_INCLUDED
#define SOUND_FIREWIRE_LIB_H_INCLUDED

#include <linux/firewire-constants.h>
#include <linux/types.h>

struct fw_unit;

int snd_fw_transaction(struct fw_unit *unit, int tcode,
		       u64 offset, void *buffer, size_t length);

/* returns true if retrying the transaction would not make sense */
static inline bool rcode_is_permanent_error(int rcode)
{
	return rcode == RCODE_TYPE_ERROR || rcode == RCODE_ADDRESS_ERROR;
}

#endif
Tue Jul 19 12:48:09 PDT 2016
Fri Jul 22 16:04:38 PDT 2016
Sun, Jul 24, 2016  4:35:21 PM
Mon, Jul 25, 2016 11:22:25 PM
