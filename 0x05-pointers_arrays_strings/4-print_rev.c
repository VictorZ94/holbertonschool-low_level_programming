#include "holberton.h"

/**
 * print_rev - print a string reverse.
 * @s: Argument type char
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
_putchar('\n');
}
