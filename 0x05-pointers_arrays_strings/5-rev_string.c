#include "holberton.h"

/**
 * rev_string - reversar an array.
 * @s: argument array type char
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int i, j, z;

	i = 0;
	while (s[i])
	{
		i++;
	}

	i--;
	j = 0;
	z = 0;
	while (j < i)
	{
		z = s[i];
		s[i] = s[j];
		s[j] = z;
		j++;
		i--;
	}
}
