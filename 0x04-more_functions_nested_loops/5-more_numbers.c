#include "holberton.h"

/**
 * more_numbers - print numbers until 14 with 3 putchar
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
				_putchar('1');

		_putchar((j % 10) + '0');
		j++;
		}
	_putchar('\n');
	i++;
	}
}
