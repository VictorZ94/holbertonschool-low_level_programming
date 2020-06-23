#include "holberton.h"

/**
 * swap_int - Swap two numbers.
 * @a: Argument pointer to int
 * @b: Argument pointer to int
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
