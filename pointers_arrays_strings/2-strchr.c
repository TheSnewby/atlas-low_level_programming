#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: pointer or NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\n'; i++)
	{
		if (s[i] == c)
			return (c);
	}

	return (NULL);
}
