#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: 1st param
 *
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
