#include "shell.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, 1 on failure
 */
int main(void)
{
	UCommand ucomd = COMMAND_INFO_INIT;
	int flag = true, wait_status = 0, wordcount = 0, builtin = 1;

	initsh();
	while (1 && !ucomd.exit_state && flag)
	{
		char *delim = " \n";
		ssize_t read;

		interactive(&flag);
		(flag == true) ? print_prompt1() : print("", STDOUT_FILENO);
		read = get_input(&ucomd);	 /* Get input from user */
		if (read == -1 || read == 0) /* Error checker */
			break;
		wordcount = splitString(&ucomd, delim);
		if (wordcount == 0)
		{
			free_cmd(&ucomd);
			continue;
		}
		builtin = run_builtin(&ucomd);
		if (builtin == -1)
			_execve(&ucomd, wait_status); /* Execute the command */
		else if (builtin == 1)
			print("\n", STDERR_FILENO); /* Error checker */
		free_cmd(&ucomd);
	}
	free_symtab(symtab_stack.global_symtab);
	exit(ucomd.exit_status % 256);
}
