#include "holberton.h"

/**
 * print_line - print number lines.
 * @n: Argument type int
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int m;

	if (n > 0)
	{
		m = 0;
		while (m <= n)
		{
			_putchar('_');
			m++;
		}
	}

_putchar('\n');
}
