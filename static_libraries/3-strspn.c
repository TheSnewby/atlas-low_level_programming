#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: other string
 *
 * Return: number of bytes containing only accept chars
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;
	int found; /* 0 true, 1 false */

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 1; /* default false */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 0; /* true */
				count++;
				break;
			}
		}

		if (found == 1)
			break;
	}
	return (count);
}
