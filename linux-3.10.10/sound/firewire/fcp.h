#ifndef SOUND_FIREWIRE_FCP_H_INCLUDED
#define SOUND_FIREWIRE_FCP_H_INCLUDED

struct fw_unit;

int fcp_avc_transaction(struct fw_unit *unit,
			const void *command, unsigned int command_size,
			void *response, unsigned int response_size,
			unsigned int response_match_bytes);
void fcp_bus_reset(struct fw_unit *unit);

#endif
Tue Jul 19 12:39:40 PDT 2016
Fri Jul 22 15:48:55 PDT 2016
Sun, Jul 24, 2016  2:35:28 PM
Mon, Jul 25, 2016  9:08:34 PM
