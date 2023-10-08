#ifndef STUCTS_H_
#define STUCTS_H_

/**
 * struct cmd_info - struct for command information
 * @prompt: User input
 * @av: user input split into tokens
 * @ac: number of tokens
 * @is_path: 1 if command is a path, 0 if not
 * @path: Command path
 * @evn: Environment variables
 * @exit_state: Exit state
 * @exit_status: Exit status
 *
 */
typedef struct cmd_info
{
	char *prompt;
	char **av;
	char *path;
	char **evn;
	int ac;
	int is_path;
	int exit_state;
	int exit_status;
} UCommand;


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


#define COMMAND_INFO_INIT                  \
	{                                      \
		NULL, NULL, NULL, NULL, 0, 1, 0, 0 \
	}

#endif /* STUCTS_H_ */
