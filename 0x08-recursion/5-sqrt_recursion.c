#include "holberton.h"

/**
 * _sqrt_recursion - function print square of a number
 * @n: Integer number
 *
 * Return: Function
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (find_second(n, i));
}

/**
 * find_second - function print square of a number
 * @n: Integer number
 * @i: Integer number
 * Return: Function
 */


int find_second(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (find_second(n, i + 1));
}
