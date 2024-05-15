#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - prints whether a random number is positive, negative or zero
 *
 * return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is posiitve", n);
	} else if (n == 0)
	{
		printf("%d is zero", n);
	} else
	{
		printf("%d is negative", n);
	}

	return (0);
}
