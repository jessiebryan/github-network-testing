#ifndef SOUND_FIREWIRE_LIB_H_INCLUDED
#define SOUND_FIREWIRE_LIB_H_INCLUDED

#include <linux/firewire-constants.h>
#include <linux/types.h>

struct fw_unit;

int snd_fw_transaction(struct fw_unit *unit, int tcode,
		       u64 offset, void *buffer, size_t length);
const char *rcode_string(unsigned int rcode);

/* returns true if retrying the transaction would not make sense */
static inline bool rcode_is_permanent_error(int rcode)
{
	return rcode == RCODE_TYPE_ERROR || rcode == RCODE_ADDRESS_ERROR;
}

#endif
Tue Jul 19 12:36:35 PDT 2016
Fri Jul 22 15:43:00 PDT 2016
Sun, Jul 24, 2016  1:52:25 PM
Mon, Jul 25, 2016  8:19:29 PM
