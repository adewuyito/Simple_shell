#include "shell.h"
#include "symtab.h"

/**
 * dump - Dump the symbol table
 * @cmd: The command data
 *
 * Return: 0
 */
int dump(UCommand * cmd __attribute__((unused)))
{
	dump_local_symtab();
	return (0);
}

/**
 * exit_shell - Exit the shell
 * @cmd: The command data
 *
 * Return: 0 on success, 1 on failure
 */
int exit_shell(UCommand *cmd)
{
	if (cmd->ac > 1)
	{
		cmd->exit_status = _atoi(cmd->av[1]);
		if (cmd->exit_status == -2)
		{
			cmd->exit_status = 2;
			print("exit: Illegal number: ", STDERR_FILENO);
			print(cmd->av[1], STDERR_FILENO);
			print("\n", STDERR_FILENO);
			return (1);
		}
		cmd->exit_state = 1;
	}
	else if (cmd->ac == 1)
	{
		cmd->exit_status = 0;
		cmd->exit_state = 1;
	}

	return (0);
}

/**
 * _cd - Change the current working directory
 * @cmd: The command data
 *
 * Return: 0 on success, 1 on failure
 */
int _cd(UCommand *cmd)
{
	ST_entry *entry;
	int ret;
	char *home = NULL, *oldpwd = NULL, *pwd = NULL, buf[1024];

	entry = get_symtab_entry("PWD");
	if (entry == NULL)
		return (1);
	pwd = entry->val;

	entry = get_symtab_entry("OLDPWD");
	if (entry == NULL)
		return (1);
	oldpwd = entry->val;

	entry = get_symtab_entry("HOME");
	if (entry == NULL)
		return (1);
	home = entry->val;

	if (!cmd->av[1])
		ret = chdir(home);
	else if (_strcmp(cmd->av[1], "-") == 0)
		ret = chdir(oldpwd);
	else
		ret = chdir(cmd->av[1]);

	if (ret == -1)
	{
		perror("can't change directory");
		return (1);
	}
	else
	{
		symtab_entry_setval(get_symtab_entry("OLDPWD"), pwd);
		symtab_entry_setval(get_symtab_entry("PWD"), getcwd(buf, 1024));
	}

	return (ret);
}

/**
 * remove_comments - Remove comment
 * @cmd: string to check
 *
 * Return: The changed command
 */
char **remove_comments(char **cmd)
{
	int i = 0;

	for (i = 0; cmd[i] != NULL; i++)
	{
		if (strcmp(cmd[i], "#") == 0)
		{
			int j;

			for (j = i; cmd[j] != NULL; j++)
			{
				free(cmd[j]);
				cmd[j] = NULL;
			}
		}
	}

	return (cmd);
}
