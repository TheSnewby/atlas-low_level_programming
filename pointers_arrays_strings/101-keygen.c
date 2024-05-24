#include "main.h"
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random valid passwords
 *
 * Return: 0
 */

int main(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	return (i);
}
