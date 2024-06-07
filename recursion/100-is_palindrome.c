#include "main.h"

/**
 * is_palindrome_helper - recursively check a string for being a palindrome
 * @s: string
 * @size: length of string
 *
 * Return: 1 if palindrome, otherwise 0
 */

int is_palindrome_helper(char *s, int size)
{
	if (size < 2)
	{
		(void)(s);
		return (1);
	}
	else
	{
		if (s[0] == s[size - 1])
			return (is_palindrome_helper(&s[1], size - 2));
		else
			return (0);
	}
}

/**
 * is_palindrome - check a string for being a palindrome
 * @s: string
 *
 * Return: 1 if a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int size = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		size++;
		i++;
	}
	if (size == 0)
		return (1);
	return (is_palindrome_helper(s, size));
}
