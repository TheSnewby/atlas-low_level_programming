#include "main.h"

/**
 * swap_int - swaps two values
 * @a: 1st int pointer
 * @b: 2nd int pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
