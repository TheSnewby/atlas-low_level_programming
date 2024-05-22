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
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (i = count; s[i] != *s; i--)
		_putchar(s[i]);
	_putchar('\n');
}
