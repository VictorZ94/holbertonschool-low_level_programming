#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - count to match of the first segment of a string.
 * @s: Full string
 * @accept: match to search
 *
 * Return: count n bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t count = 0;
	int j;

	while (*accept)
	{
		j = 0;
		while ((s[j] != ' ') && (s[j]))
		{
			if (*accept == s[j])
				count++;

		j++;
		}
	accept++;
	}
return (count);
}
