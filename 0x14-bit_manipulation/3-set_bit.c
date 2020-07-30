#include "holberton.h"
#include <stdio.h>

/**
 * set_bit - Function to set bit depends on index.
 * @n: number to convert
 * @index: to get bit index
 * Return: Nothing.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8 || n == '\0')
		return (-1);

	*n = *n | (1 << index);
		return (1);
}
