#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two string in a new address memory
 * @s1: first string to concatenate
 * @s2: Second string to concatenate
 *
 * Return: pointer to char
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, z, w;

	if (!s1 || !s2) /* if NO son NULL */
		return ('\0');

	i = 0;
	while (s1[i])
		i++;

	j = 0;
	while (s2[j])
		j++;

	p = malloc(sizeof(char) * (i + j + 1)); /* + 1 is to put NULL character */
	if (!p)
		return ('\0');

	z = 0;
	while (z < i)
	{
		p[z] = s1[z];
		z++;
	}
	w = 0;
	while (z <= (i + j))
	{
		p[z] = s2[w];
		z++;
		w++;
	}
return (p);
}
