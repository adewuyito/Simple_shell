#include "shell.h"

/**
 * _env - Print the environment
 * @cmd: The command info
 *
 * Return: 0 on success, -1 on failure
 *
 */
int _env(UCommand * cmd __attribute__((unused)))
{
	char **env = NULL;

	for (env = environ; *env; ++env)
	{
		if (env == NULL)
		{
			perror("./shell");
			return (1);
		}
		else
		{
			print(*env, STDOUT_FILENO);
			print("\n", STDOUT_FILENO);
		}
	}

	return (0);
}

/**
 * interactive - Check if the shell is interactive
 * @flag: The flag to set
 *
 */
void interactive(int *flag)
{
	if (isatty(STDIN_FILENO) == 0)
		*flag = !flag;
}
