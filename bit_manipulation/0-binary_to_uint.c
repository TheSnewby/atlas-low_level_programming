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
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0s and 1s
 *
 * Return: converted number or: 0 if (1) a char in b isn't a 0 or 1,
 * (2) b is null
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n = 0;
	unsigned int size = 0;

	if (b == NULL)
		return (n);

	while (b[size] != '\0')
	{
		if (b[size] != '0' && b[size] != '1')
			return (0);
		size++;
	}

	for (i = size - 1; i >= 0; i--)
		if (b[i] == '1')
			n += _pow(2, size - i - 1);

	return (n);
}
