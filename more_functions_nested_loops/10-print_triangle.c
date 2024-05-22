#include "main.h"

/**
 * print_triangle - prints a right-to-left triangle followed by a new line
 * @size: 1st param
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	for (i = size; i > 0; i--)
	{
		for (j = 1; j < i; j++)
			_putchar(' ');
		for (j = i; j <= size; j++)
			_putchar('#');
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
