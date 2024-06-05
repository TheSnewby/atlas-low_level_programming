#include "main.h"
/**
 * _puts_recursion - recursively prints a string and \n
 * @s: string to be printed
 *
 * Return: void
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
		_putchar('\n');
	else 
	{
		_putchar(*s);
		s++;
	}
}

int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}