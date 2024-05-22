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

	for (i = 0; s[i] != '\0'; i++)
		length++;

	char *s_copy[length];

	for (i = 0; i < length; i++)
		s_copy[i] = s[i];
	for (i = 0; i < length; i++)
		s[i] = s_copy[length - i - 1];
}
