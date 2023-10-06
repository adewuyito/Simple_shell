#include "shell.h"

/**
 * clear_screen - Clear the screen
 * @cmd: The command info
 *
 * Return: 0 on success, -1 on failure
 */
int clear_screen(UCommand * cmd __attribute__((unused)))
{
	char *clear = "\033[H\033[J";

	print(clear, STDOUT_FILENO);
	return (0);
}
