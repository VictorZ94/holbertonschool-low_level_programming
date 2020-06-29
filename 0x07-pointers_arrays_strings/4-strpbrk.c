#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - function locates the first occurrence in the string.
 * @s: Full string
 * @accept: match to search
 *
 * Return: Pointer to char.
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		j = 0;
		while (accept[j])
		{
			if (*s == accept[j])
				return (s);

		j++;
		}
	s++;
	}
return ('\0');
}
