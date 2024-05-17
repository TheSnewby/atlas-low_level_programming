#include "main.h"

/**
 * add - adds two integers
 *
 * Return: the sum
 */

int add(int a, int b)
{
	
	write(1,a+b, sizeof(a+b));
	return (a+b);
}
