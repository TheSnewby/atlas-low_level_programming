#include "main.h"

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
	if (num1 != 2) 
	{
		printf("Error\n");
		return (98);
	}

	if (isDigit(num2[0]) != 0 ||isDigit(num2[1]) != 0)
	{
		printf("Error\n");
		return (98);
	}

	printf("%ld\n", atol(num2[0]) * atol(num2[1]));
	return (0);
}
