#include "holberton.h"

/**
 * reverse_array - reverse an array
 * @a: Argument pointer to int
 * @n: Argument pointer t
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int j, z;

	n--;
	j = 0;
	while (j < n)
	{
		z = a[n];
		a[n] = a[j];
		a[j] = z;
		n--;
		j++;
	}
}
