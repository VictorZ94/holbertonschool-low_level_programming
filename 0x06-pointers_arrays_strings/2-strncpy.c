#include "holberton.h"

/**
 * _strncpy - concaten two string
 * @dest: Argument that it recieve
 * @src: Argument that it give
 * @n: n bytes
 *
 * Return: Pointer to char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

return (dest);
}
