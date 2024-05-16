#include <stdio.h>

/**
 * main - prints all single integers
 *
 * Return: 0
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		printf("%d", number);
	}

	printf("\n");

	return (0);
}
