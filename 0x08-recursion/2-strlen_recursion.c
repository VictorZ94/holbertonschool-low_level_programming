#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - Function to count lenght of a string.
 * @s: String Full
 *
 * Return: Always 0 or lenght of the string.
 */
int _strlen_recursion(char *s)
{

	if (*s)
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
