#include "main.h"

/**
 * _print_rev_recursion - recusively prints a string in reverse
 * @s: string to be printed
 *
 * Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		;
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
