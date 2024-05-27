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
	long primemax = (long)sqrt(n); /* maximum possible prime */

	if (primemax % 2 != 0) /* reduce by 1 if lower*/
		primemax--;

	for (i = primemax; i > 2 && isprime == 0; i -= 2) /* from primemax reduce by 2 */
	{
		if (i % 2 == 0 || i % 3 == 0) /* most likely divisors */
			continue;
		printf("current i is: %lu\n", i);
		for (j = 5; j <= primemax; j += 6) /* all other primes above 3 */
		{
			if (n % j == 0 || n % (j + 2) == 0) 
			{
				isprime = 1; /* is a prime */
				break;
			}
		}
		if (isprime == 1)
			maxprime = j;
	}
	printf("%ld\n", maxprime);
	return (0);
}
