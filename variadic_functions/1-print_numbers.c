#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by \n
 * @separator: delineator to be printed between numbers
 * @n: numbers of variadic arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	printf("%d", va_arg(nums, int));
	for (i = 1; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(nums, int));
		else
			printf("%s%d", separator, va_arg(nums, int));
	}
	printf("\n");
}

int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}