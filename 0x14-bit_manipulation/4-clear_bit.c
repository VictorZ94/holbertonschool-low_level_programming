#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - check the code for Holberton School students.
 * @n: number to convert
 * @index: to get bit index
 * Return: 1 on success otherwise -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8 || n == '\0')
		return (-1);

	*n = *n & ~(1 << index);
		return (1);
}
