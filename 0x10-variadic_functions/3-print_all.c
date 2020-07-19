#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print all arguments different data type
 * @format: format to print
 *
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	unsigned int count = 0;
	char *str;
	va_list args;

	va_start(args, format);
	while (format  && format[count])
	{
		switch (format[count++])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				continue;
		}
		if (format[count])
			printf(", ");
	}
printf("\n");
va_end(args);
}
