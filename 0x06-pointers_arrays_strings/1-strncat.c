#include "holberton.h"

/**
 * _strncat - concaten two string
 * @dest: Argument that it recieve
 * @src: Argument that it give
 * @n: N bytes
 *
 * Return: Pointer to char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (*(dest + i))
	{
		i++;
	}

	j = 0;
	while (*(src + j) != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	if (n > j)
		dest[i] = '\0';

return (dest);
}
