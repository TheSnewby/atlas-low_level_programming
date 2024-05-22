#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int length = 0;
	char *s_copy = s;
	char swap;

	for (i = 0; s[i] != '\0'; i++)
		length++;

	for (i = 0; i < length / 2; i++)
	{
		swap = s[i];
		s[i] = s_copy[length - i - 1];
		s_copy[length - i - 1] = swap;
	}
}
