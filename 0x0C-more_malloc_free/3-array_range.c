#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Create a new space array
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Return pointer.
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int range;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	p = malloc(sizeof(int) * range);

	if (!p)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		p[i] = min++;
	}
return (p);
}
