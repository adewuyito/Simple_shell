#include "shell.h"

/**
 * what_node - Get the command type
 * @av: Av command
 *
 * Return: The command mode
 */
/*int what_node(char **av)
{
	int i = 0, mode = CMD_NORM;

	for (i = 0; cmd[i] != NULL; i++)
	{
		if (strcmp(cmd[i], "||") == 0)
			made = CMD_OR;
		else if (strcmp(cmd[i], "&&") == 0)
			made = CMD_AND;
		else if (strcmp(cmd[i], ";") == 0)
			made = CMD_CHAIN;
		else
			made = CMD_NORM;
	}

	return (mode);
}*/

/**
 * _execve - Execute command
 * @cmd: The command data
 * @wait_status: The wait status
 *
 * Return: 0 on success, -1 on failure
 */
void _execve(UCommand *cmd, int wait_status)
{
	char **av = cmd->av;
	char *full_path = NULL;
	pid_t pid;

	pid = fork(); /* Fork a child process */
	if (av)
	{
		/* Execute the command */
		full_path = cmd->path;
		if (pid == 0)
		{
			if (execve(full_path, av, NULL) == -1)
			{
				perror("Error: command executionn failed");
			}
		}

		wait(&wait_status);
	}
}
