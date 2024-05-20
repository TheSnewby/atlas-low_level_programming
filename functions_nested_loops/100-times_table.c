#include "main.h"
#include <unistd.h>

/**
 * print_times_table - prints a formated n times table
 * @n: param
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, ij  = 0;

	for (i = 0; ((i <= n) && (n <= 15)); i++)
	{
		for (j = 0; j <= n; j++)
		{
			ij = i * j;

			if (j != 0) /* formats delimeters between numbers*/
			{
				_putchar(',');
				_putchar(' ');
				if (ij < 10)
					_putchar(' ');
				if (ij < 100)
					_putchar(' ');
			}

			if (ij < 10) /*if-else on formatting number output*/
			{
				_putchar('0' + ij);
			} else if (ij < 100)
			{
				_putchar('0' + (ij / 10 % 10));
				_putchar('0' + (ij % 10));
			} else
			{
				_putchar('0' + (ij / 100 % 10));
				_putchar('0' + (ij / 10 % 10));
				_putchar('0' + (ij % 10));
			}

			if (j == n) /*EOL*/
			{
				_putchar('\n');
			}
		}
	}
}
