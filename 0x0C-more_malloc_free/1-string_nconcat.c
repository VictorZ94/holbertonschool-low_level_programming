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
	int i = 0;
	unsigned int j = 0;
	int size;
	unsigned int size2;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
	i++;
	}
	while (j < n && s2[j] != '\0')
	{
	j++;
	}
	size = (i + j);
	s = malloc(sizeof(char) * size + 1);
	if (s == NULL)
		return (NULL);
	size = 0;
	while (size < i)
	{
		s[size] = s1[size];
		size++;
	}
	size2 = 0;
	while (size2 < n && size2 < j)
	{
		s[size] = s2[size2];
		size++;
		size2++;
	}
s[size] = '\0';
return (s);
}
