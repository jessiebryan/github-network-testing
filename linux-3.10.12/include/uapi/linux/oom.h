#ifndef _UAPI__INCLUDE_LINUX_OOM_H
#define _UAPI__INCLUDE_LINUX_OOM_H

/*
 * /proc/<pid>/oom_score_adj set to OOM_SCORE_ADJ_MIN disables oom killing for
 * pid.
 */
#define OOM_SCORE_ADJ_MIN	(-1000)
#define OOM_SCORE_ADJ_MAX	1000

/*
 * /proc/<pid>/oom_adj set to -17 protects from the oom killer for legacy
 * purposes.
 */
#define OOM_DISABLE (-17)
/* inclusive */
#define OOM_ADJUST_MIN (-16)
#define OOM_ADJUST_MAX 15

#endif /* _UAPI__INCLUDE_LINUX_OOM_H */
Tue Jul 19 12:43:04 PDT 2016
Fri Jul 22 15:55:05 PDT 2016
Sun, Jul 24, 2016  3:21:09 PM
Mon, Jul 25, 2016  9:59:57 PM
