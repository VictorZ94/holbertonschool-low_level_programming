#include "holberton.h"

/**
 * _strchr - Replace character dest by src, n bytes specified.
 * @s: pointer to char
 * @c: Occurence to seach
 *
 * Return: pointer to char or memory area
 */
char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return ('\0');

	while (*s)
	{
		if (*s == c)
			return (s);

	s++;
	}
return ('\0');
}
