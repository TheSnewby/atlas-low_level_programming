#include "main.h"

/**
 * main - prints all arguments received
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: EXIT_SUCCESS
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (EXIT_SUCCESS);
}
