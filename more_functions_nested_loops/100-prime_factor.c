#include "main.h"
#include <stdio.h>
#include <math.h>

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
	long nprime = (long)sqrt(n);

	if (nprime % 2 != 0)
		nprime--;

	for (i = nprime; i > 2; i -= 2)
	{
		if (i % 2 == 0 || i % 3 == 0)
			continue;
		for (j = 5; j < nprime; j += 6)
		{
			if (n % j == 0 || n % (j + 2) == 0)
			{
				isprime = 1;
				break;
			}
		}
		if (isprime == 1)
			maxprime = j;
		isprime = 0;
	}
	if (maxprime == 0)
		maxprime = n;
	printf("%ld\n", maxprime);
	return (0);
}
