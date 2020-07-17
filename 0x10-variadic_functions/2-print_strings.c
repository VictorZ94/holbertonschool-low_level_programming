#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function num one by one all arguments.
 * @n: n arguments
 * @separator: characters as separator
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	size_t i;

	if (n == 0)
		return;

	if (separator == NULL)
		return;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		printf("%s", str);
		if (i != (n - 1))
			printf("%s", separator);
	}
va_end(args);
printf("\n");
}
