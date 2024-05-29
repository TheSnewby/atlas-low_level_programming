#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: 1st param
 *
 * Return: string
*/

char *leet(char *c)
{
	int i, j;
	char leetletter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leetnum[] = {'4', '3', '0', '7', '1'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == leetletter[j])
			{
				c[i] = leetnum[j / 2];
			}
		}
	}
	return (c);
}
