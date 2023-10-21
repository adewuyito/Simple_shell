#include "shell.h"

/**
 * _strchr - locates a character in a string
 * @string: string
 * @c: character
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 *		- NULL if the character is not found.
 */
char *_strchr(char *string, int c)
{
	while (*string != '\0')
	{
		if (*string == c)
			return ((char *)string);
		string++;
	}
	return (NULL);
}

/**
 * _atoi - convert a string to an integer
 *
 * @s: string to convert
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (isspace(s[i]))
	{
		i++;
	}

	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}

	while (isdigit(s[i]))
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	while (s[i] != '\0')
	{
		if (!isdigit(s[i]))
		{
			return (-2);
		}
		i++;
	}

	return (result * sign);
}

/**
 * trim_string - Removes space from the 
 * @str: string to trim
 */
void trimString(char *str)
{
	size_t len;

    while (isspace((unsigned char)*str)) {
        str++;
    }

    len = strlen(str);
    while (len > 0 && isspace((unsigned char)str[len - 1])) {
        len--;
    }

    str[len] = '\0';
}
