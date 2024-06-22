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
	int va_count = 0;

	va_start(text, format);
	while (format != NULL && format[i] != '\0')
	{
		if ((va_count > 0) && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(text, int));
				va_count++;
				break;
			case 'i':
				printf("%d", va_arg(text, int));
				va_count++;
				break;
			case 'f':
				printf("%f", va_arg(text, double));
				va_count++;
				break;
			case 's':
				str = va_arg(text, char*);
				va_count++;
				if (str == NULL)
				{
					printf("(nil)");
					break;
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
