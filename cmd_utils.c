#include "shell.h"

/**
 * join_path - Join a path with command
 * @path: Path
 * @command: Command
 * Return: Full path
 */
char *join_path(char *path, const char *command)
{
	size_t path_len = strlen(path);
	size_t command_len = strlen(command);
	size_t full_path_len = path_len + 1 + command_len + 1;

	char *full_path = malloc(full_path_len);

	if (full_path == NULL)
	{
		perror("Error: join_path failed");
		return (NULL);
	}

	strcpy(full_path, path);
	strcat(full_path, "/");
	strcat(full_path, command);

	return (full_path);
}

/**
 * get_path - Get the path of the command
 * @cmd: Command
 *
 * Return: The path of the command
 */
int get_path(UCommand *cmd)
{
	char *path = get_symtab_path();
	char *full_path = NULL, *token = NULL, *path_cpy = NULL;

	if (path == NULL)
	{
		perror("Error: Could not get path");
		return (1);
	}
	path_cpy = _strdup(path);
	if (path_cpy == NULL)
		return (1);
	token = strtok(path_cpy, ":");
	while (token != NULL)
	{
		full_path = join_path(token, cmd->av[0]);
		if (full_path == NULL)
		{
			free(path);
			free(path_cpy);
			return (1);
		}
		if (access(full_path, F_OK) == 0)
		{
			cmd->path = _strdup(full_path);
			free(full_path);
			cmd->is_path = 1;
			break;
		}
		free(full_path);
		token = strtok(NULL, ":");
	}
	if (access(cmd->av[0], F_OK) == 0)
	{
		cmd->path = _strdup(cmd->av[0]); /* Update prompt */
		cmd->is_path = 1;
	}

	free(path);
	free(path_cpy);
	return (0);
}


/**
 * get_path2 - Get the path of the command
 * @command: Command
 *
 * Return: The path of the command
 */
char *get_path2(char *command)
{
	char *path = NULL;
	char *token = NULL;
	char *path_cpy = NULL;
	char *full_path = NULL;

	path = getenv("PATH"); /* Get Environment path */
	if (path == NULL)
	{
		perror("Error: ");
		return (NULL);
	}
	path_cpy = _strdup(path);
	if (path_cpy == NULL) /* Error check */
		return (NULL);

	token = strtok(path_cpy, ":"); /* Split path */
	while (token != NULL)
	{
		full_path = join_path(token, command);
		if (full_path == NULL) /* Error check */
		{
			free(path_cpy); /* Free the copied path */
			return (NULL);
		}
		if (access(full_path, F_OK) == 0) /* Check if command exists */
		{
			free(path_cpy); /* Free the copied path */
			return (full_path);
		}
		free(full_path); /* Free the full_path */
		token = strtok(NULL, ":");
	}
	free(path_cpy);					/* Free the copied path */
	if (access(command, F_OK) == 0) /* Check if command exists */
		return (command);

	return (NULL); /* Return NULL if the command is not found */
}


