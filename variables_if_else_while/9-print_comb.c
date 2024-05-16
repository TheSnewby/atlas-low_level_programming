#include <stdio.h>

/**
 * main - print 0-9 with putchar and formatted
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for(num = 0; num < 9; num++)
	{
		putchar('0' + num);
		putchar(',');
		putchar(' ');
	}
	putchar('9');

	return (0);
}
