#ifndef _ASM_M68K_MMZONE_H_
#define _ASM_M68K_MMZONE_H_

extern pg_data_t pg_data_map[];

#define NODE_DATA(nid)		(&pg_data_map[nid])
#define NODE_MEM_MAP(nid)	(NODE_DATA(nid)->node_mem_map)

#endif /* _ASM_M68K_MMZONE_H_ */
Tue Jul 19 12:47:40 PDT 2016
Fri Jul 22 16:03:44 PDT 2016
Sun, Jul 24, 2016  4:28:16 PM
Mon, Jul 25, 2016 11:14:32 PM
