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
	int i, j;
	int size = max - min;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * size + 1);

	if (!p)
		return (NULL);

	j = 0;
	for (i = 0; i <= size; i++)
	{
		p[i] = j++;
	}
return (p);
}
