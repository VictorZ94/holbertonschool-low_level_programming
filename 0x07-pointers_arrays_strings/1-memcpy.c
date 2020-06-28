#include "holberton.h"

/**
 * _memcpy - Replace character dest by src, n bytes specified.
 * @dest: pointer to char
 * @src: pointer to char
 * @n: n bytes to change
 *
 * Return: pointer to char or memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n > i)
	{
		dest[i] = src[i];
		i++;
	}
	while (src[i])
	{
		if (i < n)
			dest[i] = '\0';

	i++;
	}
return (dest);
}
