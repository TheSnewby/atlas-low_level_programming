#include "variadic_functions.h"

/**
 * print_all - print all arguments of certain type
 * @format: passed list of types of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list text;
	char *str;

	va_start(text, format);
	while (format[i] != '\0')
	{
		if ((i > 0) && (format[i] == 'c' || format[i] == 'i'
		|| format[i] == 'f' || format[i] == 's'))
			printf(", ");
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(text, int));
			break;
			case 'i':
			printf("%d", va_arg(text, int));
			break;
			case 'f':
			printf("%f", va_arg(text, double));
			break;
			case 's':
			str = va_arg(text, char*);
			if (str == NULL)
			{
				printf("(nil)");
				continue;
			}
			printf("%s", str);
			break;
			default:
			break;
		}
		i++;
	}
	va_end(text);
	printf("\n");
}

