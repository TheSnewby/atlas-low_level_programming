#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the filename
 * @argc: number of arguments
 * @argv: number of strings
 *
 * Return: EXIT_SUCCESS
*/

int main(int argc, char **argv)
{
	printf("%s", argv[0]);

	return (EXIT_SUCCESS);
}
