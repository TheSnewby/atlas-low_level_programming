#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: buffer length to be printed
 *
 * Return: void
*/

void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0) /* 0 size case */
    	printf("\n");
    for (i = 0; i < size; i += 10)
    {
		printf("%08x: ", (unsigned int)(&b[i] - &b[0])); 

    	for (j = 0; j < 10; j += 2)
    	{
			printf("%02x%02x ", (unsigned int)(b[i + j]), (unsigned int)(b[i + j + 1]));
    	}
    	for (j = 0; j < 10; j++)
    	{
			if ((b[i + j]) > 31 && (b[i + j]) < 127)
				printf("%c", b[i + j]);
			else
				printf(".");
    	}
    printf("\n");
    }
}
