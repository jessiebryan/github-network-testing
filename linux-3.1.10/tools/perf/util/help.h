#ifndef __PERF_HELP_H
#define __PERF_HELP_H

struct cmdnames {
	size_t alloc;
	size_t cnt;
	struct cmdname {
		size_t len; /* also used for similarity index in help.c */
		char name[FLEX_ARRAY];
	} **names;
};

static inline void mput_char(char c, unsigned int num)
{
	while(num--)
		putchar(c);
}

void load_command_list(const char *prefix,
		struct cmdnames *main_cmds,
		struct cmdnames *other_cmds);
void add_cmdname(struct cmdnames *cmds, const char *name, size_t len);
/* Here we require that excludes is a sorted list. */
void exclude_cmds(struct cmdnames *cmds, struct cmdnames *excludes);
int is_in_cmdlist(struct cmdnames *c, const char *s);
void list_commands(const char *title, struct cmdnames *main_cmds,
		   struct cmdnames *other_cmds);

#endif /* __PERF_HELP_H */
Tue Jul 19 12:33:47 PDT 2016
Fri Jul 22 15:38:33 PDT 2016
Sun, Jul 24, 2016  1:19:37 PM
Mon, Jul 25, 2016  6:27:44 PM
Mon, Jul 25, 2016  7:40:51 PM
Tue, Jul 26, 2016  2:16:37 PM
