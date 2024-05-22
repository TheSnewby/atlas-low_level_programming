#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: 1st param
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i;
	int length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;
	if (length % 2 == 0)
		i = length / 2;
	else 
		i = (length - 1 ) / 2;

	for (i; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
