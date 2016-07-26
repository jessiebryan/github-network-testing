#ifndef SOUND_FIREWIRE_FCP_H_INCLUDED
#define SOUND_FIREWIRE_FCP_H_INCLUDED

struct fw_unit;

int fcp_avc_transaction(struct fw_unit *unit,
			const void *command, unsigned int command_size,
			void *response, unsigned int response_size,
			unsigned int response_match_bytes);
void fcp_bus_reset(struct fw_unit *unit);

#endif
Tue Jul 19 12:48:47 PDT 2016
Fri Jul 22 16:05:50 PDT 2016
Sun, Jul 24, 2016  4:44:35 PM
Mon, Jul 25, 2016 11:32:40 PM
