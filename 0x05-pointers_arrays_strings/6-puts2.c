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
		if (i % 2 == 0)
			_putchar(str[i]);
	
	i++;
	}
_putchar('\n');
}
