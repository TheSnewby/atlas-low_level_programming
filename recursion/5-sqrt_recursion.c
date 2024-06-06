#include "main.h"

/**
 * _sqrt_recursion - recursively find the natural sqrt of a number
 * @n: number
 *
 * Return: int
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (-1);
	return (n * _sqrt_recursion(n - 1));
}
