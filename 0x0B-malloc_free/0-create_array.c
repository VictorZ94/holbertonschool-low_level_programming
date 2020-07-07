#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creation an array through malloc
 * @size: size of array
 * @c: character to  fill an array
 *
 * Return: pointer to char.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	size_t i;

	if (size == 0)
		return ('\0');

	str = malloc(sizeof(char) * size);
	if (str == '\0')
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
return (str);
}
