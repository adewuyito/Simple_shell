#include "shell.h"

/**
 * main - Entry point
 * @ac: argument number
 * @av: list of arguments
 * Return: 0 on success, 1 on failure
 */
int main(int ac, char **av)
{
	UCommand ucomd = COMMAND_INFO_INIT;
	int fd = 0;

	initsh();
	if (ac == 2)
	{
		fill_fd(fd);
		ucomd.shell_av = av;
	}

	hsh(&ucomd);
	free_symtab(symtab_stack.global_symtab);
	exit(ucomd.exit_status % 256);
}
