#include <stdio.h>

/**
 * startupPrint - prints a message before main
 *
 * Return: void
 */
void startupPrint (void) __attribute__ ((constructor));

void startupPrint(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
