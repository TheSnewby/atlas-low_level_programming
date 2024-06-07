#include "main.h"

/**
 * _sqrt_recursion_helper - helper function to find a natural sqrt
 * @i: natural numbers to check if sqrt
 * @value: original value to compared against
 *
 * Return: -1 if no natural sqrt, otherwise the value
 */

int _sqrt_recursion_helper(int i, int value)
{
	if (i * i == value)
		return (i);
	else if (i > value / 2)
		return (-1);
	return(_sqrt_recursion_helper(i + 1, value));
}

/**
 * _sqrt_recursion - recursively find the natural sqrt of a number
 * @n: number
 *
 * Return: -1 if no natural sqrt, otherwise the value
*/

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(1, n));
}
