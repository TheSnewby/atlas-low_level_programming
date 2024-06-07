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
	int i, j;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}

	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
				printf("Error\n");
				return (1);
				}
			}
			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (EXIT_SUCCESS);
}
