#include "holberton.h"

/**
 * _putchar_recursion - to print only strings
 * @s: String full
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(s[i]);
	_puts_recursion(s + 1);
}
