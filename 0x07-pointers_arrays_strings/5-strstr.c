#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - function finds the first occurrence of ...
 * the substring needle in the string haystack.
 * @haystack: Full string
 * @needle: match to search
 *
 * Return: a pointer a firs occurrence.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*needle)
	{
		while (*haystack)
		{
			if (*needle == *haystack)
				return (haystack);

		haystack++;
		}
	needle++;
	}

return ('\0');
}
