#include "holberton.h"

/**
 * print_diagonal - print lines in diagonal
 * @n: Argument int
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int d, m;

	if (n > 0)
	{
		m = 0;
		while (m < n)
		{
			d = 0;
			while (d < m)
			{
				_putchar(' ');
				d++;
			}
		_putchar(92);
		_putchar('\n');
		m++;
		}
	}
	else
		_putchar('\n');
}
