#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase without using standard libs
 *
 * Return: 0
 */

void print_alphabet(void)
{

        char letter;

        for (letter = 'a'; letter <= 'z'; letter++)
                _putchar(letter);
        _putchar('\n');

        return (0);
}


/*int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');

	return (0);
}
*/
