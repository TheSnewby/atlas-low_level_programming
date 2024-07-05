#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int to be printed
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int pmax = 64; /* assume ul max is 2^64 -1 for now */
	int i;
	char c = 'n'; /* flag to find beginning */

	if (n == 0)
		putchar('0');
	else
	{
		for (i = pmax - 1; i >= 0; i--)
		{
			if (n & (1UL << i))
			{
				putchar('1');
				if (c == 'n')
					c = 'y';
			}
			else if (c == 'y')
				putchar('0');
		}
	}
}
