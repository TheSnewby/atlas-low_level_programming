#include "main.h"
#include <stdio.h>

/**
 * main - prints largest prime factor of a number
 *
 * Return: 0
 */

int main(void)
{
	long i,j;
	long n = 612852475143;
	long maxprime = 0;
	int isprime = 0; /* boolean, 0 false, 1 true */

	for (i = 2; i < (n / 2 + 1); i++)
	{
		if (n == 2)
			maxprime = 2;
		for (j = 2; j < i; j++)
		{
			if (n % j == 0)
			{
				isprime = 1;
				break;
			}
		}
		if (isprime == 1)
			maxprime = j;
		isprime = 1;
	}
	if (maxprime == 0)
		maxprime = n;
	printf("%ld", maxprime);
	return (0);
}
