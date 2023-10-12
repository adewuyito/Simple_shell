#include "shell.h"

/**
 * with_builtin - Check if the command is a builtin
 * @prompt: The command to check
 *
 * Return: 1 if builtin, 0 if not
 */
int with_builtin(char *prompt)
{
	if (_strcmp(prompt, "\n") == 0) /* Restart on Enter press */
	{
		free(prompt);
		return (1);
	}

	return (0);
}

/**
 * run_builtin - Run a builtin command
 * @cmd: The command to info
 *
 * Return: -1 if command is not builtin, 0 on success, 1 on failure,
 */
int run_builtin(UCommand *cmd)
{
	char **av = cmd->av;
	int i, ret = -1;

	Built_in builtins[] = {
		{"cd", _cd},
		{"dump", dump},
		{"exit", exit_shell},
		{"env", _env},
		{"clear", clear_screen},
		{"setenv", set_env},
		{"unsetenv", unset_env},
		{NULL, NULL},
	};

	for (i = 0; builtins[i].name; i++)
	{
		if (_strcmp(av[0], builtins[i].name) == 0)
		{
			ret = builtins[i].func(cmd);
			break;
		}
	}
	return (ret);
}

/**
 * would_exit - Check if the user would like to exit the shell
 * @cmd: The command data
 *
 * Return: Exit status
 */
void would_exit(UCommand *cmd)
{

	for (cmd->ac = 0; cmd->av[cmd->ac] != NULL; cmd->ac++)
		;
	/* Exit the shell on exit call */
	if ((strcmp(cmd->av[0], "exit\0") == 0) && (cmd->ac == 1))
	{
		cmd->exit_state = 1;
		cmd->exit_status = 0;
	}
	else if ((strcmp(cmd->av[0], "exit\0") == 0) && (cmd->ac > 1))
	{
		cmd->exit_state = 1;
		cmd->exit_status = atoi(cmd->av[1]);
	}
}
