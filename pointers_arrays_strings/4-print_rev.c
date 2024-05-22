#include "main.h"

/**
 * print_rev - prints a reversed string \n
 * @s: string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s); s[i] != *s; i--)
		_putchar(s[i]);
	_putchar('\n');
}
