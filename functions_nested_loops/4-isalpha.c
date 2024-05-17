#include "main.h"

/**
 * _isalpha - checks if an input is in the alphabet
 * @c: first param
 *
 * Return: 1 if letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >=65 && c <= 90) || (c >=97 && c <=122))
		return (1);
	return (0);
}
