#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - my own function calculate the length of a string.
 * @s: Argument - pointer to a type char.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

return (i);
}
