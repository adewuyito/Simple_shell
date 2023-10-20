#include "shell.h"

/**
 * _execve - Execute command
 * @cmd: The command data
 *
 * Return: 0 on success, -1 on failure
 */
void _execve(UCommand *cmd)
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

		wait(&(cmd->status));
		if (WIFEXITED(cmd->status))
		{
			cmd->status = WEXITSTATUS(cmd->status);
			if (cmd->status == 126)
				print("Permission denied\n", STDERR_FILENO);
		}
	}
}
