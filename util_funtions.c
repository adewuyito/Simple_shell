#include "shell.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 *
 * Return: 0 if strings are equal, otherwise the difference
 */
int _strcmp(const char *s1, const char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

/**
 * _strdup - Duplicate a string and return a pointer to the new copy.
 * @s: The input string to duplicate.
 *
 * Return: A pointer to the duplicated string
 */
char *_strdup(const char *s)
{
	char *p = malloc(strlen(s) + 1);

	if (p)
	{
		char *p_copy = p;

		while (*s)
		{
			*p++ = *s++;
		}
		*p = '\0';
		return (p_copy);
	}
	return (NULL);
}

/**
 * print - prints a string
 * @str: string
 * @fd: file descriptor
 */
void print(char *str, int fd)
{
	ssize_t len = 0;

	len = _strlen(str);
	write(fd, str, len);
}

/**
 * _strlen - returns the length of a string
 * @str: string
 *
 * Return: length of string
 */
ssize_t _strlen(char *str)
{
	ssize_t len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * free_string - frees a string of strings
 * @pp: string of strings
 */
void free_string(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}
