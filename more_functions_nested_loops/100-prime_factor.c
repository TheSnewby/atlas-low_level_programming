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
	long i;
	long n = 30; //612852475143;
	long n_original = n;
	/* long n = 31; */
	long maxprime = 0;
	int nisprime = 1; /* boolean, 0 false, 1 true */
	//long maxpossible; * maximum possible prime 

	while (n % 2 == 0) /* remove multiples of 2 */
	{
		nisprime = 0;
		maxprime = 2;
		n /= 2;
	}
	while (n % 3 == 0) /* remove multiples of 3 */
	{
		nisprime = 0;
		maxprime = 3;
		n /= 3;
	}

	printf("maxprime before for loop is %ld\n", maxprime);
	printf("n is now: %ld\n", n);
	for (i = 5; i * i <=  n_; i += 6) /* based on 6k +- 1 */
	{
		while (n % i == 0) /* remove multiples of 6k - 1 */
		{
			printf("n is divisible by %ld\n", i);
			nisprime = 0;
			maxprime = i;
			n = n / i;
		}
		printf("maxprime before n i + 2 loop: %ld\n", maxprime);
		printf("n is now: %ld\n", n);
		while (n % (i + 2) == 0) /* remove multiples of 6k + 1 */
		{
			printf("n is divisible by %ld\n", i + 2);
			nisprime = 0;
			maxprime = i + 2;
			n = n / (i + 2);
		}
	}

	if (nisprime == 1) /* when the original number is its own prime */
		maxprime = n_original;
	printf("the maximum prime is %ld\n", maxprime);
	return (0);
}
