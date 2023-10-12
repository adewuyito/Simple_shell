#include "shell.h"


/**
 * hsh - Shell execution
 * @ucomd: Shell Information
 */
void hsh(UCommand *ucomd)
{
	int flag = true, wait_status = 0, wordcount = 0, builtin = 1;

	while (1 && !ucomd->exit_state && flag)
	{
		char *delim = " \n";
		ssize_t read;

		interactive(&flag);
		(flag == true) ? print_prompt1() : print("", STDOUT_FILENO);
		read = get_input(ucomd);	 /* Get input from user */
		if (read == -1 || read == 0) /* Error checker */
			break;
		wordcount = splitString2(ucomd, delim);
		if (wordcount == 0)
		{
			free_cmd(ucomd);
			continue;
		}
		builtin = run_builtin(ucomd);
		if (ucomd->exit_state != 1 && builtin == -1)
		{
			get_path(ucomd);
			if (ucomd->path != NULL)
				_execve(ucomd, wait_status); /* Execute the command */
			else
				perror(ucomd->shell_av[0]);
		}
		else if (builtin == 1)
			print("\n", STDOUT_FILENO); /* Error checker */
		free_cmd(ucomd);
	}
}
