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

	printf("%ld\n", minustwo);
	printf("%ld\n", minusone);

	for (i = 3; i <= 50; i++)
	{
		current = minustwo + minusone;
		printf("%ld\n",current);
		minustwo = minusone;
		minusone = current;
	}

	return(0);
}
