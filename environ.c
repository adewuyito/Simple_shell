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

/**
 * set_env - Set a new environment variable or update an existing one
 * @cmd: Command
 *
 * Return: 0 on success, -1 on failure
 */
int set_env(UCommand *cmd)
{
	char *env_var = NULL;
	char *env_val = NULL;
	ST_entry *entry = NULL;

	env_var = strdup(cmd->av[1]);
	env_val = strdup(cmd->av[2]);
	if (env_var == NULL)
	{
		perror("could not get environment variable");
		free(env_val);
		free(env_var);
		return (-1);
	}
	if (env_val == NULL)
	{
		perror("could not set environment variable");
		free(env_var);
		free(env_val);
		return (-1);
	}
	entry = get_symtab_entry(env_var);
	if (entry == NULL)
	{
		entry = add_to_symtab(env_var);
	}
	symtab_entry_setval(entry, env_val);
	free(env_var);
	free(env_val);

	return (0);
}

/**
 * unsetenv - Removes a variable from path
 * @cmd: Command
 *
 * Return: 0 on success, -1 from path
 */
int unset_env(UCommand *cmd)
{
	char *env_var = NULL;
	ST_entry *entry = NULL;
	ST_strc *symtab = NULL;

	env_var = strdup(cmd->av[1]);
	entry = do_lookup(env_var, symtab_stack.global_symtab);
	if (env_var == NULL)
	{
		perror("could not get environment variable");
		free(env_var);
		return (-1);
	}
	if (entry == NULL)
	{
		perror("could remove environment variable");
		free(env_var);
		return (-1);
	}
	rem_from_symtab(entry, symtab_stack.global_symtab);

	free(env_var);
	return (0);
}

/**
 * get_symtab_path - Get the val from the symtab
 *
 * Return: NULL on error or the path variable
 */
char *get_symtab_path(void)
{
	ST_entry *symtab;
	char *path;

	symtab = get_symtab_entry("PATH");
	if (symtab != NULL)
	{
		path = strdup(symtab->val);
		return (path);
	}

	return (NULL);
}
