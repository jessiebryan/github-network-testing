/*
 *  ncpsign_kernel.h
 *
 *  Arne de Bruijn (arne@knoware.nl), 1997
 *
 */
 
#ifndef _NCPSIGN_KERNEL_H
#define _NCPSIGN_KERNEL_H

#ifdef CONFIG_NCPFS_PACKET_SIGNING
void __sign_packet(struct ncp_server *server, const char *data, size_t size, __u32 totalsize, void *sign_buff);
int sign_verify_reply(struct ncp_server *server, const char *data, size_t size, __u32 totalsize, const void *sign_buff);
#endif

static inline size_t sign_packet(struct ncp_server *server, const char *data, size_t size, __u32 totalsize, void *sign_buff) {
#ifdef CONFIG_NCPFS_PACKET_SIGNING
	if (server->sign_active) {
		__sign_packet(server, data, size, totalsize, sign_buff);
		return 8;
	}
#endif
	return 0;
}

#endif
Tue Jul 19 12:34:22 PDT 2016
Fri Jul 22 15:39:21 PDT 2016
Sun, Jul 24, 2016  1:25:48 PM
Mon, Jul 25, 2016  6:35:10 PM
Mon, Jul 25, 2016  7:48:06 PM
Tue, Jul 26, 2016  2:23:30 PM
