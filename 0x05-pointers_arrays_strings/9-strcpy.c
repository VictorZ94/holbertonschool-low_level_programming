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
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
dest[i] = '\0';
return (dest);
}
