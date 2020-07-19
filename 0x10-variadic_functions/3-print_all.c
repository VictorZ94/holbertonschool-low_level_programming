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
	va_list args;
	int i, count, c;
	float d;
	char *str, *separador = "";

	if (!format)
		printf("(nil)");
	va_start(args, format);
	count = 0;
	while (format[count] != '\0')
	{
		switch (format[count])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%s%c", separador, c);
				separador = ", ";
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%s%d", separador, i);
				separador = ", ";
				break;
			case 'f':
				d = va_arg(args, double);
				printf("%s%f", separador, d);
				separador = ", ";
				break;
			case 's':
				str = va_arg(args, char *);
				if (str != NULL)
					printf("%s%s", separador, str);
				if (str == NULL)
					printf("%s(nil)", separador);
				separador = ", ";
				break;
		}
	count++;
	}
printf("\n");
va_end(args);
}
