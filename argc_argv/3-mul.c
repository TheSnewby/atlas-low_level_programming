#include "main.h"

/**
 * main - prints the multiplication of two numbers
 * @argc: number of arguments
 * @argv: string of strings
 *
 * Return: EXIT_SUCCESS
*/

int main(int argc, char **argv)
{
	int i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	i = (int)(argv[1]) * (int)(argv[2]);

	printf("%d\n", i);

	return (EXIT_SUCCESS);
}
