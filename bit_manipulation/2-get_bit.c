#include "main.h"
/**
 * _pow - recursively returns x ^ y
 * @x: base int
 * @y: power int
 *
 * Return: int
*/

int _pow(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	y--;
	return (x * (_pow(x, y)));
}

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long value
 * @index: target bit index in n
 *
 * Return: value at bit or -1 if index out of range
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	char found = 'n';
	int pmax = 64;

	if ((int)index > pmax)
		return (-1);
	if (n == 0)
		return (0);
	for (i = pmax - 1; i >= 0; i--)
	{
		if (n & (1UL << i))
		{
			found = 'y';
			break;
		}
	}
	if (found == 'y' && n & (1UL << index))
		return (1);
	else
		return (0);
}
