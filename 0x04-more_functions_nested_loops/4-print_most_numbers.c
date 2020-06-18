#include "holberton.h"

/**
 * print_most_numbers - function print number 0 until 9
 *
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (!((i == '2') || (i == '4')))
			_putchar(i);

		i++;
	}
_putchar('\n');
}
