#include "holberton.h"

/**
 * _strchr - function returns a pointer to the first occurrence of the string
 * @s: pointer to char
 * @c: Occurence to seach
 *
 * Return: pointer to char or memory area
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
			return (s);

	s++;
	}

	if (c == '\0')
		return (s);

return ('\0');
}
