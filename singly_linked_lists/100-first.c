#include <stdio.h>

/**
 * startupPrint - prints a message before main
 *
 * Return: void
 */
void startupPrint (void) __attribute__ ((constructor));

void startupPrint(void)
{
	char *first = "You're beat! and yet, you must allow,\n";
	char *second = "I bore my house upon my back!\n";
	printf("%s%s", first, second);
}
