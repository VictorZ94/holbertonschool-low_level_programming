#include "holberton.h"

/**
 * print_triangle - print trinagle.
 * @size: Argument int
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
	x = 0;
	while (x < size)
	{
		y = size - 1;
		while (y > x)
		{
			_putchar(' ');
			y--;
		}
		y = 0;
		while (y <= x)
		{
			_putchar('#');
			y++;
		}
	_putchar('\n');
	x++;
	}
	}
	else
	{
		_putchar('\n');
	}
}
