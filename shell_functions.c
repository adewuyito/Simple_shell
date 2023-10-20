#include "shell.h"

/**
 * get_input - Read a line of text from standard input.
 * @cmd: The command data
 *
 * Return:
 * - The number of characters read (including the newline character).
 * - -1 if an error occurs or EOF.
 */
ssize_t get_input(UCommand *cmd)
{
	ssize_t chars_read;
	char *prompt = NULL;
	size_t len;

	/* Read a line of text from standard input using getline */
	chars_read = getline(&prompt, &len, stdin);
	if (chars_read == -1) /* Error condition or EOF */
	{
		if (feof(stdin))
		{
			free(prompt);
			return (-1);
		}
		else
		{
			perror("Error: Unable to read command");
			free(prompt);
			exit(EXIT_FAILURE);
		}
	}
	
	prompt[strcspn(prompt, "\n")] = '\0';
	cmd->prompt = strdup(prompt);
	free(prompt);

	return (chars_read);
}

/**
 * reallocArray - Reallocate an array of strings
 * @oldArray: Old array
 * @oldSize: Old size
 * @newSize: New size
 *
 * Return: New array
 */
char **reallocArray(char **oldArray, size_t oldSize, size_t newSize)
{
	size_t i;
	char **newArray = (char **)malloc(newSize * sizeof(char *));

	if (newArray == NULL)
	{
		perror("Error: Memory allocation failed");
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < oldSize && i < newSize; i++)
	{
		newArray[i] = oldArray[i];
	}

	free(oldArray);

	return (newArray);
}

/**
 * splitString - Split a string into an array of words
 * @cmd: The command data
 * @delimiters: Delimiters to split by
 *
 * Return: Array of words
 */
int splitString(UCommand *cmd, char *delimiters)
{
	char *token;
	int wordCount = 0;
	char *inputCopy = strdup(cmd->prompt);

	if (inputCopy == NULL || cmd->prompt == NULL)
	{
		perror("Error: Memory allocation failed");
		exit(EXIT_FAILURE);
	}

	token = strtok(inputCopy, delimiters);
	while (token != NULL && (strcmp(token, "#") != 0)) /* Handles comment */
	{
		wordCount++;
		cmd->av = reallocArray(cmd->av, wordCount - 1, wordCount);
		cmd->av[wordCount - 1] = strdup(token);
		if (cmd->av[wordCount - 1] == NULL)
		{
			int i;

			perror("Error: Memory allocation failed");

			for (i = 0; i < wordCount - 1; i++)
			{
				free(cmd->av[i]);
			}
			free(cmd->av);
			free(inputCopy);
			return (-1);
		}

		token = strtok(NULL, delimiters);
	}

	cmd->av = reallocArray(cmd->av, wordCount, wordCount + 1);
	cmd->av[wordCount] = NULL;
	cmd->ac = wordCount;

	free(inputCopy);
	return (wordCount);
}

/**
 * splitString2 - Split a string into an array of words
 * @cmd: The command data
 * @delimiters: Delimiters to split by
 *
 * Return: Array of words
 */
int splitString2(UCommand *cmd, char *delimiters)
{
	char *input_cpy = strdup(cmd->prompt);
	int i = 0;
	char **copy_string = NULL;

	copy_string = _my_strtok(input_cpy, delimiters);
	cmd->av = remove_comments(copy_string);
	i = string_array_len(cmd->av);
	cmd->ac = string_array_len(copy_string);

	free(input_cpy);
	return (i);
}

/**
 * free_cmd - Free an array of strings
 * @cmd: The command data
 */
void free_cmd(UCommand *cmd)
{
	if (cmd->shell_av != NULL)
		free_string(cmd->shell_av);
	if (cmd->av != NULL)
		free_string(cmd->av);
	if (cmd->prompt != NULL)
		free(cmd->prompt);
	if (cmd->path != NULL)
		free(cmd->path);
	cmd->is_path = 0;
	cmd->av = NULL;
	cmd->prompt = NULL;
	cmd->path = NULL;
}
