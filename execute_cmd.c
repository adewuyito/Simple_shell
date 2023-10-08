#include "shell.h"

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

	if (av && cmd->exit_state != 1)
	{
		get_path(cmd);
		if (cmd->path != NULL)
		{
			pid = fork(); /* Fork a child process */
			/* Execute the command */
			full_path = cmd->path;
			if (pid == 0)
			{
				if (execve(full_path, av, NULL) == -1)
					perror("Error: command executionn failed");
			}
			else
				wait(&wait_status);
		}
		else
			perror("./shell");
	}
}
