#include "main.h"

/**
 * print_diagonal - draws diagonal lines in the terminal
 * @n: 1st param
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j != i)
					_putchar(' ');
				else
					_putchar(92);
			}
			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
