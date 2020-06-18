#include "holberton.h"

/**
 * print_square - print square agree numbers given
 * @size: Argument type int
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int m, n;

	if (size > 0)
	{
		m = 0;
		while (m < size)
		{
			n = 0;
			while (n < size)
			{
				_putchar('#');
				n++;
			}
			_putchar('\n');
			m++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
