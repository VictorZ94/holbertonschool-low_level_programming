#include "holberton.h"

/**
 * _memset - Replace character of a *s by constant, n bytes specified.
 * @s: pointer to char
 * @b: char constant
 * @n: n bytes to chance
 *
 * Return: pointer to char or memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n > i)
	{
		s[i] = b;
		i++;
	}
return (s);
}
