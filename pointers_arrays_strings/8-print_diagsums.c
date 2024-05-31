#include "main.h"

/**
 * print_diagsums - prints the sum of the two diags of a square matrix
 * @a: square matrix
 * @size: size of matrix
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
		sumLtoR += a[i][i];
	}

	for (i = 0; i < size; i++)
	{
		sumRtoL += a[i][size - i];
	}
	printf("%d, %d", sumLtoR, sumRtoL);
}
