#include "holberton.h"

/**
 * print_number - print integer number with putchar.
 * @n: Argument int number
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	/* If number is smaller than 0, put a - sign */
	/* and change number to positive */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Remove the last digit and recur */
	if (n / 10 != 0)
		print_number(n / 10);

	/* Print the last digit */
	_putchar(n % 10 + '0');
}
