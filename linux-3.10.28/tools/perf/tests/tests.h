#ifndef TESTS_H
#define TESTS_H

enum {
	TEST_OK   =  0,
	TEST_FAIL = -1,
	TEST_SKIP = -2,
};

/* Tests */
int test__vmlinux_matches_kallsyms(void);
int test__open_syscall_event(void);
int test__open_syscall_event_on_all_cpus(void);
int test__basic_mmap(void);
int test__PERF_RECORD(void);
int test__rdpmc(void);
int test__perf_evsel__roundtrip_name_test(void);
int test__perf_evsel__tp_sched_test(void);
int test__syscall_open_tp_fields(void);
int test__pmu(void);
int test__attr(void);
int test__dso_data(void);
int test__parse_events(void);
int test__hists_link(void);
int test__python_use(void);
int test__bp_signal(void);
int test__bp_signal_overflow(void);
int test__task_exit(void);
int test__sw_clock_freq(void);

#endif /* TESTS_H */
Tue Jul 19 12:53:21 PDT 2016
Fri Jul 22 16:14:35 PDT 2016
Sun, Jul 24, 2016  5:49:55 PM
Tue, Jul 26, 2016 12:44:50 AM
