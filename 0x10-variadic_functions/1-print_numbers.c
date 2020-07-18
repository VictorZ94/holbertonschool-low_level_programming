#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function num one by one all arguments.
 * @n: n arguments
 * @separator: characters as separator
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int num = 0;
	size_t i;

	if (separator == NULL)
		separator = "";

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i != (n - 1))
			printf("%s", separator);
	}
va_end(args);
printf("\n");
}
