#include <stdio.h>

/**
 * main - print to 98
 *
 * Return: 0
 */

int main(void)
{
	unsigned long long minustwo = 1;
	unsigned long long minusone = 2;
	unsigned long long current;
	int i;

	printf("%llu, %llu", minustwo, minusone);

	for (i = 3; i <= 98; i++)
	{
		current = minustwo + minusone;
		minustwo = minusone;
		minusone = current;

		printf(", %llu", current);
	}
	printf("\n");

	return (0);
}
