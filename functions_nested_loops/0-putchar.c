#include "main.h"

/**
 * main - prints "_putchar \n" without libraries
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

	return (0);
}
