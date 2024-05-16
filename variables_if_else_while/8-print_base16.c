#include <stdio.h>

/**
 * main - prints single digit hexa with putchar
 * i'm curious if %x works with putchar
 *
 * Return: 0
 */

int main(void)
{
	int num;
	char let;

	for (num = 0; num < 10; num++)
		putchar('0' + num);
	for (let = 'a'; let < 'g'; let++)
		putchar(let);
	putchar('\n');

	return (0);
}
