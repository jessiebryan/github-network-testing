#ifndef __PERF_EXEC_CMD_H
#define __PERF_EXEC_CMD_H

extern void perf_set_argv_exec_path(const char *exec_path);
extern const char *perf_extract_argv0_path(const char *path);
extern const char *perf_exec_path(void);
extern void setup_path(void);
extern int execv_perf_cmd(const char **argv); /* NULL terminated */
extern int execl_perf_cmd(const char *cmd, ...);
extern const char *system_path(const char *path);

#endif /* __PERF_EXEC_CMD_H */
Tue Jul 19 12:33:47 PDT 2016
Fri Jul 22 15:38:33 PDT 2016
Sun, Jul 24, 2016  1:19:37 PM
Mon, Jul 25, 2016  6:27:44 PM
Mon, Jul 25, 2016  7:40:51 PM
Tue, Jul 26, 2016  2:16:37 PM
