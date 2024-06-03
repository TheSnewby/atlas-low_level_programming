#include "main.h"

/**
 * print_diagsums - prints the sum of the two diags of a square matrix
 * @a: square matrix
 * @size: size of matrix as sizexsize
 *
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sumLtoR = 0;
	int sumRtoL = 0;

	for (i = 0; i < size; i++)
	{
		sumLtoR += a[i * (size + 1)];
	}

	for (i = 1; i <= size; i++)
	{
		sumRtoL += a[i * (size - 1)];
	}
	printf("%d, %d\n", sumLtoR, sumRtoL);
}
