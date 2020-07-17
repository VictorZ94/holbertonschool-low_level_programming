#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function sum all arguments.
 * @n: n arguments
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int num = 0;
	size_t i;

	if (n == 0)
		return;

	if (separator == NULL)
		return;
		
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i != (n - 1))
			printf("%s", separator);
	}
putchar('\n');
va_end(args);
}
