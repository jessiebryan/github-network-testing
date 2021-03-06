#ifndef __CPUPOWER_HELPERS_SYSFS_H__
#define __CPUPOWER_HELPERS_SYSFS_H__

#define PATH_TO_CPU "/sys/devices/system/cpu/"
#define MAX_LINE_LEN 255
#define SYSFS_PATH_MAX 255

extern unsigned int sysfs_read_file(const char *path, char *buf, size_t buflen);

extern int sysfs_is_cpu_online(unsigned int cpu);

extern unsigned long sysfs_get_idlestate_latency(unsigned int cpu,
						unsigned int idlestate);
extern unsigned long sysfs_get_idlestate_usage(unsigned int cpu,
					unsigned int idlestate);
extern unsigned long long sysfs_get_idlestate_time(unsigned int cpu,
						unsigned int idlestate);
extern char *sysfs_get_idlestate_name(unsigned int cpu,
				unsigned int idlestate);
extern char *sysfs_get_idlestate_desc(unsigned int cpu,
				unsigned int idlestate);
extern int sysfs_get_idlestate_count(unsigned int cpu);

extern char *sysfs_get_cpuidle_governor(void);
extern char *sysfs_get_cpuidle_driver(void);

extern int sysfs_get_sched(const char *smt_mc);
extern int sysfs_set_sched(const char *smt_mc, int val);

#endif /* __CPUPOWER_HELPERS_SYSFS_H__ */
Tue Jul 19 12:48:49 PDT 2016
Fri Jul 22 16:05:52 PDT 2016
Sun, Jul 24, 2016  4:44:53 PM
Mon, Jul 25, 2016 11:33:00 PM
