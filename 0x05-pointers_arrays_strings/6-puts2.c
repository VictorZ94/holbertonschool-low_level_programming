#include "holberton.h"

/**
 * puts2 - print string every character follow.
 * @str: Pointer type char as argument
 *
 * Return: Nothing.
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
_putchar('\n');
}
