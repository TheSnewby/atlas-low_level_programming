#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: first param
 *
 * Return: void
 */

void print_to_98(int n);
{
	for (; n <= 98; n++)
	{
		if (n != 98)
			printf("%d, ", n);
		else
			printf("%d", n);
	}
