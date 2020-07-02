#include "holberton.h"

/**
 * _pow_recursion - number to the power
 * @x: Number to power
 * @y: number to indicate number times.
 *
 * Return: Power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (_pow_recursion(x, y - 1) * x);
}
