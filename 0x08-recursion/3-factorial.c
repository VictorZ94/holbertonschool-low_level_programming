#include "holberton.h"
#include <stdio.h>

/**
 * factorial - Factorial of a Number.
 * @n: Integer number
 *
 * Return: n! factorial.
 */
int factorial(int n)
{

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (n * factorial(n - 1));
}
