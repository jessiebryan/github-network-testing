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
Tue Jul 19 12:33:45 PDT 2016
Fri Jul 22 15:38:31 PDT 2016
Sun, Jul 24, 2016  1:19:25 PM
Mon, Jul 25, 2016  6:27:29 PM
Mon, Jul 25, 2016  7:40:37 PM
Tue, Jul 26, 2016  2:16:23 PM
