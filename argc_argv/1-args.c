#include "main.h"

/**
 * main - prints number of arguments passed to it
 * @argc: number of arguments
 * @argv: string of strings
 *
 * Return: EXIT_SUCCESS
*/

int main (int argc, char *argv[])
{
	(void)(argv);
	printf("%d\n", argc);

	return (EXIT_SUCCESS);
}