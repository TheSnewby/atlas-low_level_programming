#include "main.h"

/**
 * get_endianness - finds the endianness
 *
 * Return: 0 if big endianness, 1 if little endianness
 */

int get_endianness(void)
{
	int num = 0x76555510;
	char *c = (char *) &num;

	if (*c == 0x10)
		return (1);
	else
		return (0);
}
