#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: 0 if equal, < 0 if s1 < s2, > 0 otherwise
*/

int _strcmp(char *s1, char *s2)
{
	int diff = 0;
	int i;
	int s1end = 1;
	int s2end = 1;

	for (i = 0; s1end != 0 && s2end != 0; i++)
	{
		if (s1[i] == '\0')
			s1end = 0;
		if (s2[i] == '\0')
			s2end = 0;
		diff += s1[i] - s2[i];
	}

	return (diff);
}
