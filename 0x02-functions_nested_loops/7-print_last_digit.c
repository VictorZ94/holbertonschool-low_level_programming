#include "holberton.h"

/**
 * print_last_digit - print last digit of a number
 * @r: argument positive or negative number
 *
 * Return: On success 0 otherwise 1
 */
int print_last_digit(int r)
{
	int v = (r % 10);
	int n = (v * -1);

	if (r > 0)
	{
		_putchar (v + '0');
		return (v);
	}
	else if (r == 0)
	{
		_putchar (r + '0');
		return (r);
	}
	else
	{
		_putchar (n + '0');
		return (n);
	}
}
