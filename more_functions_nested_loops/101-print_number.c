#include <limits.h>
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: 1st param
 *
 * Return: none
 */

void print_number(int n)
{
	if (n == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n / 10 > 0)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
/*
int main(void)
{
	int x = -55;
	print_number(x);
	return (0);
}
*/
