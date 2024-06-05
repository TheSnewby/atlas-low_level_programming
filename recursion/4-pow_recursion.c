#include "main.h"

/**
 * _pow_recursion - recursively returns x ^ y
 * @x: base int
 * @y: power int
 *
 * Return: int
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	y--;
	return (x * (_pow_recursion(x, y)));
}
