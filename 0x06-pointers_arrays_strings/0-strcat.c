#include "holberton.h"

/**
 * _strcat - concaten two string
 * @dest: Argument that it recieve
 * @src: Argument that it give
 *
 * Return: Pointer to char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (*(dest + i))
	{
		i++;
	}

	j = 0;
	while (*(src + j))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
dest[i] = '\0';
return (dest);
}
