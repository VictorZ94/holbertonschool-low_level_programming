#include "holberton.h"

/**
 * print_binary - Function to convert decimal to binary base.
 * @n: number to convert
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
