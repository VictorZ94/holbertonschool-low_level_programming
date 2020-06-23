#include "holberton.h"

/**
 * print_rev - print a string reverse.
 * @s: Argument type char
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
_putchar('\n');
}
