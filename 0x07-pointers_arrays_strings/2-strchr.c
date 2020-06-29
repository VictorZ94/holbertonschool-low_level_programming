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
	if (*s == '\0')
		return (s);

	while (*s)
	{
		if (*s == c)
			return (s);

	s++;
	}
return ('\0');
}
