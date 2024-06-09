#include <main.h>

/**
 * wildcmp - recursively compares two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: 1 if identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 +2));
	else
		return (0);
}
