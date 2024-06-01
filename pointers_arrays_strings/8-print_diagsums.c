#include "main.h"
#include <math.h>

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
	int m = sqrt(size);

	for (i = 0; i < m; i++)
	{
		sumLtoR += a[i * (m + 1)];
	}

	for (i = 1; i <= m; i++)
	{
		sumRtoL += a[i * (m - 1)];
	}
	printf("%d, %d", sumLtoR, sumRtoL);
}
