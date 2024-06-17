#include "main.h"
/**
 * main - multiplies two numbers passed as arguments
 * num1 - num of arguments
 * num2 - ** of arguments
 *
 * Return: 0 if succesful, 98 otherwise
 */

int main(int num1, char **num2)
{
	if (num1 != 2 || atoi(num2[0]) == 0 || atoi(num2[1]) == 0)
	{
		printf("Error\n");
		return (98);
	}

	printf("%d\n", atoi(num2[0]) * atoi(num2[1]));
	return (0);
}
