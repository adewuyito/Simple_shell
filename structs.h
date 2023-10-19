#ifndef STUCTS_H_
#define STUCTS_H_

/**
 * struct cmd_info - struct for command information
 * @prompt: User input
 * @shell_av: Shell arguments
 * @av: user input split into tokens
 * @path: Command path
 * @ac: number of tokens
 * @cmd_type: 0 if command is normal, 1 if command is OR, 2 if command is AND
 * @is_path: 1 if command is a path, 0 if not
 * @run_count: Number of times command has been run
 * @exit_state: Exit state
 * @exit_status: Exit status
 *
 */
typedef struct cmd_info
{
	char *prompt;
	char **shell_av;
	char **av;
	char *path;
	int ac;
	int cmd_type;
	int is_path;
	int run_count;
	int exit_state;
	int exit_status;
} UCommand;

#define CMD_NORM 0
#define CMD_OR 1
#define CMD_AND 2
#define CMD_CHAIN 3
#define CMD_BUILTIN 4

/**
 * struct builtin_s - struct for builtin utilities
 * @name: utility name
 * @func: function to call to execute the utility
 *
 */
typedef struct builtin_s
{
	char *name;					/* utility name */
	int (*func)(UCommand *cmd); /* function to call to execute the utility */
} Built_in;

/* shell builtin utilities */
int dump(UCommand *cmd);
int exit_shell(UCommand *cmd);
int _env(UCommand *cmd);
int clear_screen(UCommand *cmd);
int _cd(UCommand *cmd);
int set_env(UCommand *cmd);
int unset_env(UCommand *cmd);

#define COMMAND_INFO_INIT                        \
	{                                            \
		NULL, NULL, NULL, NULL, 0, 0, 1, 0, 0, 0 \
	}

#endif /* STUCTS_H_ */
