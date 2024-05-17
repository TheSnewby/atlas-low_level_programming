#include "main.h"

/**
 * print_last_digit - returns the vbalue of the alst digit
 * @i: first param
 *
 * Return: int
 */

int print_last_digit(int i)
{
	if (i < 0)
		i = -1 * i;

	return (i % 10);
}
