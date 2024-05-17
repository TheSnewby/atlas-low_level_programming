#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase without using standard libs
 *
 * Return: void
 */

void  print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
