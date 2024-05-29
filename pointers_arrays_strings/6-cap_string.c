#include "main.h"

/**
 * cap_string - capitalizes the first letter in every word of string
 * @c: string
 *
 * Return: string
*/

char *cap_string(char *c)
{
	int i;
	int prev = 1; /* 0 if true, 1 if false */

	for (i = 0; c[i] != '\0'; i++)
	{
		if (i == 0 && (c[i] >= 97 && c[i] <= 122))
			c[i] -= 32;
		else if (prev == 0 && (c[i] >= 97 && c[i] <= 122))
		{
			c[i] -= 32;
			prev = 1;
		}
		else if (prev == 0)
			prev = 1;

		switch (c[i]) /* checks if current char signals new word */
		{
			case ' ':
				prev = 0;
				break;
			case '\n':
				prev = 0;
				break;
			case '\t':
				prev = 0;
				break;
			case '.':
				prev = 0;
				break;
		}
	}
	return (c);
}
