#include "shell.h"

/**
 * _strtok - function that splits a string into tokens
 * @str: string to be splitted
 * @delim: delimiter
 * @saveptr: pointer to a char * variable that is used internally by strtok
 *
 * Return: pointer to the next token, or NULL if there are no more tokens
 */
char *_strtok(char *str, char *delim, char **saveptr)
{
	char *token;

	if (delim == NULL || saveptr == NULL)
		return (NULL);

	if (str != NULL)
		*saveptr = str;

	while (**saveptr && _strchr(delim, **saveptr))
		(*saveptr)++;

	if (**saveptr == '\0')
		return (NULL);

	token = *saveptr;
	/*  Find the end of the token */
	while (**saveptr && !_strchr(delim, **saveptr))
		(*saveptr)++;

	if (**saveptr)
		*(*saveptr)++ = '\0';
	else
		*saveptr = NULL;

	return (token);
}

