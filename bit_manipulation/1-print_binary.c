#include "main.h"

/**
 * prints the binary representation of a number
 * @n: unsigned long int to be printed
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int pmax = 64; /* assume ul max is 2^32 -1 for now */
	int i;
	char c = 'n'; /* flag to find beginning */

	if (n == 0)
		putchar('0');
	else
	{
		for (i = pmax; i >= 0; i--)
		{
			if (n & (1 << i))
			{
				putchar('1');
				if (c == 'n')
					c = 'y';
			}
			else if (c == 'y')
				putchar('0');
		}
	}
	/* find what 2^p add up to equal it? can't use a malloc though */
	/* consider a LIFO linked list (added at head) of chars */
	/* linked lists require malloc, which isn't allowed here */
}
