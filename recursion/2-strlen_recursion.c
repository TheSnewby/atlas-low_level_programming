#include "main.h"

/**
 * _strlen_recursion - recursively return the length of a string
 * @s: the string
 *
 * Return: int
*/

int _strlen_recursion(char *s)
{
	static int sum = 1; /* betty doesn't want 0 */

	if (*s == '\0')
		return (sum - 1);
	sum++;
	return(_strlen_recursion(s + 1));
}
