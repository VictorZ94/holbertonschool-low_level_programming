#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print an array full or parcial.
 * @a: pointer to integer.
 * @n: pointer to integer
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (a[i] != '\0' && i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
}
