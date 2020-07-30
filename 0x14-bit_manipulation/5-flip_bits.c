#include "holberton.h"

/**
 * flip_bits - sets the value of a bit to 0 at a given index.
 * @n: pointer to unsigned long integer
 * @m: index of intger to sets
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	int count = 0;

	for (i = 0; i <= ((sizeof(n) * 8) - 1); i++)
	{
		if (((n ^ m) >> i) & 1)
			count++;
	}
	return (count);
}
