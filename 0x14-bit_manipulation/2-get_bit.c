#include "holberton.h"

/**
 * get_bit - Function to get bit depends on index.
 * @n: number to convert
 * @index: to get bit index
 * Return: Nothing.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	n >>= index;
	return (n & 1);
}
