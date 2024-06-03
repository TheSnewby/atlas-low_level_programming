#include "main.h"
#include <limits.h>

/**
 * print_number - prints an integer
 * @n: integer
 *
 * Return: void
*/

void print_number(int n)
{
	int ismin = 0;

	if (n == INT_MIN)
	{
		ismin = 1;
		n = INT_MIN / 10;
	}

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	if (n > 10)
	{
		printf("if statement run\n");
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
	if (ismin == 1)
		_putchar(8 + '0');
}
