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
	ucomd.fdd = fill_fd(fd);
	if (ac == 2)
	{
		ucomd.shell_av = av;
	}

	hsh(&ucomd, av);
	free_symtab(symtab_stack.global_symtab);
	exit(ucomd.exit_status % 256);
}
