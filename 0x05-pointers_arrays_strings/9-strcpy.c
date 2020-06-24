#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - Copy a string .
 * @dest: Argument that receive
 * @src: Argument that give.
 *
 * Return: a pointer.
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	j = 0;
	i = 0;
	while (src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
return (dest);
}
