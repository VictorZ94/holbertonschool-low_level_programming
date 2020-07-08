#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - create a new grid of integers with malloc
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to char.
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	p = malloc(sizeof(int *) * height);

	if (!p)
		return ('\0');

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (!p[i])
		{
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
			return ('\0');
		}

		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
return (p);
}
