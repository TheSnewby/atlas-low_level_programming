#include "main.h"
#include <string.h>

/**
 * mulLarge - multiplies large numbers
 * @n1: 1st string of nums
 * @n2: 2nd string of nums
 *
 * Return: product
 */
char *mulLarge(char *n1, char *n2)
{
	int n1_size = strlen(n1);
	int n2_size = strlen(n2);
	int i, j, prod, swap;
	char *product = malloc(n1_size + n2_size);

	if (product == NULL)
		return (0);

	for (i = n1_size - 1; i >= 0; i--)
	{
		for (j = n2_size - 1; j >= 0; j--)
		{
			prod = (n1[i] - '0') * (n2[j] - '0');
			swap = product[i + j + 1] + prod;
			product[i + j + 1] = swap % 10;
			product[i + j] += swap / 10;
		}
	}

	for (i = 0; i < n1_size + n2_size; i++) /* convert back to ascii */
		product += '0';

	if (*product == '0')
	{
		for (i = 0; i < n1_size + n2_size; i++)
			if (*product == '0')
				product++;
	}

	if (*product == '\0')
		return (product--);

	return (product);
}

/**
 * isDigit - checks whether a string of any size is a number
 * @num: the string
 *
 * Return: 0 if true, -1 if not
 */
int isDigit(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
		if (num[i] < 48 || num[i] > 57)
			return (-1);
	return (0);
}

/**
 * main - multiplies two numbers passed as arguments
 * @num1: num of arguments
 * @num2: ** of arguments
 *
 * Return: 0 if succesful, 98 otherwise
 */

int main(int num1, char **num2)
{
	char *product = NULL;

	if (sizeof(num2) != 2) /* consider added num1 != 2*/
	{
		printf("Error\n");
		return (98);
	}
	(void)(num1); /* unused var */
	if (isDigit(num2[0]) != 0 || isDigit(num2[1]) != 0)
	{
		printf("Error\n");
		return (98);
	}

	if (sizeof(num2[0]) <= sizeof(long int))
	{
		if (sizeof(num2[1]) <= sizeof(long int)) /* two lines for betty */
			printf("%ld\n", atol(num2[0]) * atol(num2[1]));
	}
	else
	{
		product = mulLarge(num2[0], num2[1]);
		printf("%s\n", product);
		free(product);
	}


	return (0);
}
