#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - print the second half of a string.
 * @str: pointer type char
 *
 * Return: Nothig.
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i])
	{
		i++;
	}

	if (i % 2 != 0)
		i++;

	j = (i - 1) / 2;

	while (str[j])
	{
		j++;
		_putchar(str[j]);

	}
_putchar('\n');
}
