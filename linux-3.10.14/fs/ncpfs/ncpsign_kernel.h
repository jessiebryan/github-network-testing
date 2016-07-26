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
Tue Jul 19 12:44:12 PDT 2016
Fri Jul 22 15:57:13 PDT 2016
Sun, Jul 24, 2016  3:37:34 PM
Mon, Jul 25, 2016 10:18:12 PM
