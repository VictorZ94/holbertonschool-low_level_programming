#include "holberton.h"

/**
 * print_alphabet_x10 - Function that print alphabet x 10 times .
 *
 * Return: void.
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	_putchar('\n');
	i++;
	}
}
