#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a conditional string based on the last digit in a randomized variable
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int lastdigit = n % 10;
	char str;
	if (lastdigit > 5)
	{
		char str[] = "and is greather than 5\n";
	}
	else if (lastdigit == 0)
	{
		char str[] = "and is 0\n";
	}
	else
	{	
		char str[] = "and is less than 6 and not 0\n";
	}

	printf("Last digit of %d is %s", n, str);

	return (0);
}
