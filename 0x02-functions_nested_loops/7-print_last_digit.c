#include "holberton.h"

/**
 * print_last_digit - print last digit of a number
 * @n: argument positive or negative number
 *
 * Return: On success 0 otherwise 1
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		m = n * -1;
		_putchar((m % 10) + '0');
		return (m % 10);
	}

	_putchar((n % 10) + '0');
	return (n % 10);
}
