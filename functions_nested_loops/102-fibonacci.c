#include <stdio.h>

/**
 * main - print the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long minustwo = 1;
	long minusone = 2;
	int i;
	long current;

	printf("%ld", minustwo);
	printf(", %ld", minusone);

	for (i = 3; i <= 50; i++)
	{
		current = minustwo + minusone;
		printf(", %ld", current);
		minustwo = minusone;
		minusone = current;
	}

	printf("\n");

	return (0);
}
