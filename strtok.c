#include "shell.h"

/**
 * _my_strtok - splits a string into words.
 * @str: the input string
 * @d: the delimeter string
 *
 * Return: a pointer to an array of strings, or NULL on failure
 */

char **_my_strtok(char *str, char *d)
{
	int i, j, k, m, number_of_words = 0;
	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);
	if (!d)
		d = " ";
	for (i = 0; str[i] != '\0'; i++)
		if (!is_delim(str[i], d) && (is_delim(str[i + 1], d) || !str[i + 1]))
			number_of_words++;

	if (number_of_words == 0)
		return (NULL);
	s = malloc((1 + number_of_words) * sizeof(char *));
	if (!s)
		return (NULL);
	for (i = 0, j = 0; j < number_of_words; j++)
	{
		while (is_delim(str[i], d))
			i++;
		k = 0;
		while (!is_delim(str[i + k], d) && str[i + k])
			k++;
		s[j] = malloc((k + 1) * sizeof(char));
		if (!s[j])
		{
			for (k = 0; k < j; k++)
				free(s[k]);
			free(s);
			return (NULL);
		}
		for (m = 0; m < k; m++)
			s[j][m] = str[i++];
		s[j][m] = 0;
	}
	s[j] = NULL;
	return (s);
}

/**
 * is_delim - checks if character is a delimeter
 * @c: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * string_array_len - Gets the lenght of a string array
 * @av: The array
 *
 * Return: The lenght
 */
int string_array_len(char **av)
{
	int i = 0;

	for (i = 0; av[i] != NULL; i++)
		;

	return (i);
}
