#include "main.h"

/**
 * main - prints the addition of positive numbers
 * @argc: number of arguments
 * @argv: string of strings
 *
 * Return: EXIT_SUCCESS
*/

int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}

	else
	{
		for (i = 1; *argv[i] != '\0'; i++)
		{
			if (argv[i][0] < '0' || argv[i][0] > '9')
			{
			printf("Error\n");
			return (1);
			}
			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (EXIT_SUCCESS);
}
