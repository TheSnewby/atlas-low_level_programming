#include "main.h"

/**
 * print_last_digit - returns the vbalue of the alst digit
 * @i: first param
 *
 * Return: int
 */

int print_last_digit(int i)
{
	int j;
	
	if (i < 0)
		i = -1 * i;

	j = i % 10;
	_putchar('0' + j);

	return (j);
}
