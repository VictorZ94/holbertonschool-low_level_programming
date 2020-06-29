#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - function to print two-dimesional array.
 * @a: Array main.
 *
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8]) /* a[][] == *a[] or (*a)[8] */
{
	short i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
	_putchar('\n');
	i++;
	}
}
