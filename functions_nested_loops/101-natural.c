#include <stdio.h>

/**
 * main - prints all natural numbers below 1024
 *
 * Return: 0
 */

int main(void)
{
	int sum, i = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
