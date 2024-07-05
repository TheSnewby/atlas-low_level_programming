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
 * Return: value at bit or -1 if error 
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	char found = 'n';
	int found_index = 0;

	if (n == 0)
		return (0);
	for (i = 63; i >= 0; i--)
	{
		if (n & (1UL << i))
		{
			found = 'y';
			found_index = i;
			break;
		}
	}
	if ((int)index > found_index)
		return (-1);
	else if (found == 'y' && n & (1UL << index))
		return (1);
	else
		return (0);
}
