#include "function_pointers.h"

/**
 * print_name - write a function that prints a name
 * @name: name to be printed
 * @f: function pointer with a string
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
