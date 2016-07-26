#ifndef _ASM_M68K_MMZONE_H_
#define _ASM_M68K_MMZONE_H_

extern pg_data_t pg_data_map[];

#define NODE_DATA(nid)		(&pg_data_map[nid])
#define NODE_MEM_MAP(nid)	(NODE_DATA(nid)->node_mem_map)

#endif /* _ASM_M68K_MMZONE_H_ */
Tue Jul 19 12:34:54 PDT 2016
Fri Jul 22 15:39:55 PDT 2016
Sun, Jul 24, 2016  1:29:53 PM
Mon, Jul 25, 2016  6:40:02 PM
Mon, Jul 25, 2016  7:52:53 PM
Tue, Jul 26, 2016  2:28:01 PM
