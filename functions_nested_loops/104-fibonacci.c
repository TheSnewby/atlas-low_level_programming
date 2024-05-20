#include <stdio.h>

/**
 * main - print to 98
 *
 * Return: 0
 */

int main(void)
{
	unsigned long minustwo = 1;
	unsigned long minusone = 2;
	unsigned long current;
	int i;

	printf("%lu, %lu", minustwo, minusone);

	for (i = 3; i <= 98; i++)
	{
		current = minustwo + minusone;
		minustwo = minusone;
		minusone = current;

		printf(", %lu", current);
	}
	printf("\n");

	return (0);
}
