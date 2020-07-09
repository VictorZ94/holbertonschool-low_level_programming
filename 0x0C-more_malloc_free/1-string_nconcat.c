#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Function concatenate two strings.
 * @s1: First string
 * @s2: Second String
 * @n: n bytes to concatenate
 *
 * Return: Pointer to char.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int size;
	size_t i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = 0;
	while (s1[size])
	{
		size++;
	}
	i = 0;
	while (s2[i] && i <= n)
	{
		i++;
	}
	p = malloc(sizeof(char) * (size + i) + 1);
	if (!p)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] && j < n)
	{
		p[i] = s2[j];
		i++;
		j++;
	}
p[i] = '\0';
return (p);
}
