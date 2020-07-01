#include "holberton.h"

/**
 * _print_rev_recursion - to print only strings
 * @s: String full
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
