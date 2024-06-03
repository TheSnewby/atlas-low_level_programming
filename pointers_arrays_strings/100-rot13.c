#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string being encoded
 *
 * Return: string pointer
*/

char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
				str[i] += 13;
			else
				str[i] -= 13;
		}
	}
	return (str);
}