#include "shell.h"

/**
 * hsh - Shell execution
 * @ucomd: Shell Information
 * @av: List of arguments
 */
void hsh(UCommand *ucomd, char **av)
{
	int flag = true, wordcount = 0, builtin = 1;

	flag = interactive(ucomd);
	while (1 && !ucomd->exit_state)
	{
		char *delim = " \n";
		ssize_t read;

		ucomd->run_count = ucomd->run_count + 1;
		ucomd->shell_av = copy_av(av);
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
		if (wordcount != -1)
			builtin = run_builtin(ucomd);
		if (ucomd->exit_state != 1 && builtin == -1 && wordcount != -1)
		{
			get_path(ucomd);
			if (ucomd->path != NULL)
				_execve(ucomd); /* Execute the command */
			else
			{
				print_error(ucomd);
			}
		}
		free_cmd(ucomd);
		if (!flag && feof(stdin))
			break;
	}
	if (!interactive(ucomd) && ucomd->status)
		exit(ucomd->status);
}

/**
 * copy_av - add to strings to av
 * @av: av
 *
 * Return: the new av
 */

char **copy_av(char **av)
{
	int size, i;
	char **avv;

	if (av == NULL)
	{
		return (NULL);
	}

	size = 0;
	while (av[size] != NULL)
	{
		size++;
	}

	avv = malloc((size + 1) * sizeof(char *));
	if (avv == NULL)
	{
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < size; i++)
	{
		avv[i] = strdup(av[i]);
		if (avv[i] == NULL)
		{
			perror("Memory allocation failed");
			exit(EXIT_FAILURE);
		}
	}

	avv[size] = NULL; /* NULL terminate the array */

	return (avv);
}

/**
 * print_error - print the shells name
 * @cmd: command
 *
 * Return: void
 */
void print_error(UCommand *cmd)
{
	char buffer[20];

	print(cmd->shell_av[0], STDERR_FILENO);
	print(": ", STDERR_FILENO);
	print(itoa(cmd->run_count, buffer, 10), STDERR_FILENO);
	print(": ", STDERR_FILENO);
	print(cmd->av[0], STDERR_FILENO);
	print(": ", STDERR_FILENO);
	perror("");
}

/**
 * print_cd_error - print the shells name
 * @cmd: command
 *
 * Return: void
 */
void print_custom_error(UCommand *cmd, char *string)
{
	char buffer[20];

	print(cmd->shell_av[0], STDERR_FILENO);
	print(": ", STDERR_FILENO);
	print(itoa(cmd->run_count, buffer, 10), STDERR_FILENO);
	print(": ", STDERR_FILENO);
	print(cmd->av[0], STDERR_FILENO);
	print(": ", STDERR_FILENO);
	print(string, STDERR_FILENO);
	print(cmd->av[1], STDERR_FILENO);
}

/**
 * itoa - convert int to string
 * @value: int to convert
 * @result: string to return
 * @base: base to convert to
 *
 * Return: string
 */
char *itoa(int value, char *result, int base)
{
	char *ptr, *ptr1, tmp_char;
	int tmp_value;

	if (base < 2 || base > 36)
	{
		*result = '\0';
		return (result);
	}

	ptr = result;
	ptr1 = result;
	do {
		tmp_value = value;
		value /= base;
		*ptr++ = "0123456789"[(tmp_value - value * base)];
	} while (value);

	if (tmp_value < 0)
		*ptr++ = '-';
	*ptr-- = '\0';

	while (ptr1 < ptr)
	{
		tmp_char = *ptr;
		*ptr-- = *ptr1;
		*ptr1++ = tmp_char;
	}
	return (result);
}
