#include "main.h"

/**
 * _strlen_recursion - recursively return the length of a string
 * @s: the string
 *
 * Return: int
*/

int _strlen_recursion(char *s)
{
	static int sum = 1;

	if (*s == '\0')
		return (sum);
	sum++;
	_strlen_recursion(s + 1);
}
