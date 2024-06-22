#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by new line
 * @separator: delineator printed between strings
 * @n: number of strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *str = NULL;

	va_start(strings, n);
	/* print first arg if str not null */
	str = strcpy(str, va_arg(strings, char*));
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
	for (i = 1; i < n; i++)
	{
		str = strcpy(str, va_arg(strings, char*));
		if (separator == NULL)
		{
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		else
		{
			if (str == NULL)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, str);
		}
	}
	va_end(strings);
	printf("\n");
}
