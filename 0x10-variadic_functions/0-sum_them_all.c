#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function sum all arguments.
 * @n: n arguments
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	size_t i;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

va_end(args);
return (sum);
}
