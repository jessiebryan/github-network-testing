#ifndef _TCP_MEMCG_H
#define _TCP_MEMCG_H

struct tcp_memcontrol {
	struct cg_proto cg_proto;
	/* per-cgroup tcp memory pressure knobs */
	struct res_counter tcp_memory_allocated;
	struct percpu_counter tcp_sockets_allocated;
	/* those two are read-mostly, leave them at the end */
	long tcp_prot_mem[3];
	int tcp_memory_pressure;
};

struct cg_proto *tcp_proto_cgroup(struct mem_cgroup *memcg);
int tcp_init_cgroup(struct mem_cgroup *memcg, struct cgroup_subsys *ss);
void tcp_destroy_cgroup(struct mem_cgroup *memcg);
unsigned long long tcp_max_memory(const struct mem_cgroup *memcg);
void tcp_prot_mem(struct mem_cgroup *memcg, long val, int idx);
#endif /* _TCP_MEMCG_H */
Tue Jul 19 12:43:40 PDT 2016
Fri Jul 22 15:56:12 PDT 2016
Sun, Jul 24, 2016  3:29:57 PM
Mon, Jul 25, 2016 10:09:43 PM
