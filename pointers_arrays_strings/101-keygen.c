#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - generates random valid passwords
 *
 * Return: 0
 */

int keygen(void)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	printf("%d", i);

	return (i);
}
